//
//  SocketThread.h
//  CocosJSGame
//
//  Created by Yue on 14/11/10.
//
//

#ifndef __CocosJSGame__SocketThread__
#define __CocosJSGame__SocketThread__

#include <stdio.h>
#include "TCPSocket.h"
#include "pthread.h"


class SocketThread{
    
public:
    
    ~SocketThread(void);
    SocketThread(void);
    
    void start();
    
    void resposeMsg(char* str);
    
private:
    
    pthread_t pid;
};

#endif /* defined(__CocosJSGame__SocketThread__) */
