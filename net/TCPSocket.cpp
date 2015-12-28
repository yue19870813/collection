//
//  TestSocket.cpp
//  CocosJSGame
//
//  Created by Yue on 14-11-5.
//
//

#include "TCPSocket.h"
#include "ConvertUtil.h"

TCPSocket::TCPSocket()
{
    
}

bool TCPSocket::Create(int af, int type, int protocol) {
    m_sock = socket(af, type, protocol);
    if (m_sock == INVALID_SOCKET) {
        return false;
    }
    return true;
}

bool TCPSocket::Connect(const char* ip, unsigned short port)
{
    struct sockaddr_in svraddr;
    svraddr.sin_family = AF_INET;
    svraddr.sin_addr.s_addr = inet_addr(ip);
    svraddr.sin_port = htons(port);
    int ret = connect(m_sock, (struct sockaddr*) &svraddr, sizeof(svraddr));
    if (ret == SOCKET_ERROR) {
        return false;
    }
    return true;
}

// Send socket
int TCPSocket::Send(const unsigned char* buf, int len, int flags)
{
    long bytes;
    int count = 0;
    //bytes = send(m_sock, buf, len, flags);
    while (count < len) {
        //const void* a= buf + count;
        bytes = send(m_sock, buf + count, len - count, flags);
        if (bytes == -1 || bytes == 0)
            return -1;
        count += bytes;
    }
    return (int)bytes;
}

// Recv socket
int TCPSocket::Recv(char* buf,int flags)
{
    long l = (recv(m_sock, buf, 4, flags));
    
    int a = *(int *)buf;
    int temp = ConvertUtil::convertLToB(a);
    
    l = (recv(m_sock, buf, 1, flags));
    
    l = (recv(m_sock, buf, temp, flags));
    
    return (int)l;
}




