//
//  SocketManager.h
//  CocosJSGame
//
//  Created by Yue on 14/11/10.
//
//

#ifndef __CocosJSGame__SocketManager__
#define __CocosJSGame__SocketManager__

#include <stdio.h>
#include <stdlib.h>
#include <thread>
#include <iostream>
#include <vector>
#include <map>

#include "SocketThread.h"
#include "cocos2d.h"


#include "jsapi.h"
#include "jsfriendapi.h"
#include "cocos2d_specifics.hpp"

class SocketManager  : public cocos2d::Ref{
    
public:
    
    static SocketManager* getInstance();
    
    void init(char* addr, int port, int netType = 1);
    
    void send(char* msg);
    
    char* getAddr(){ return _addr; };
    int getPort(){ return _port; };
    
    void resposeMsg(char* msg);
    
public:
    std::vector<char*> msgVector;
    TCPSocket *ts;
    
private:

    std::thread* _socketThread;
    
    bool _isInit = false;
    
    char* _addr;
    int _port;

    JSContext *m_jsCx;
    JSObject *m_jsThisObj;
    jsval m_jsFun;
    jsval *m_jsArgv;
    
};

#endif /* defined(__CocosJSGame__SocketManager__) */
