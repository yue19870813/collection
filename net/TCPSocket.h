//
//  TestSocket.h
//  CocosJSGame
//
//  Created by Yue on 14-11-5.
//
//

#ifndef __CocosJSGame__TestSocket__
#define __CocosJSGame__TestSocket__

#include <stdio.h>
#include <stdlib.h>


#include <netdb.h>
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS || CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
#include <sys/socket.h>
#include <fcntl.h>
#include <errno.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#else
#include <io.h>
#include <WS2tcpip.h>
#endif

#define INVALID_SOCKET	-1
#define SOCKET_ERROR	-1
typedef int	SOCKET;

class TCPSocket{
    
public:
    
    TCPSocket(void);
    
    bool Create(int af, int type, int protocol = 0);
    
    bool Connect(const char* ip, unsigned short port);
    
    // Send socket
    int Send(const unsigned char* buf, int len, int flags = 0);
    
    // Recv socket
    int Recv(char* buf, int flags = 0);
    
protected:
    SOCKET m_sock;
    fd_set  fdR;
    
};

#endif /* defined(__CocosJSGame__TestSocket__) */
