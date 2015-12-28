//
//  SocketThread.cpp
//  CocosJSGame
//
//  Created by Yue on 14/11/10.
//
//

#include "SocketThread.h"
#include "SocketManager.h"
#include "ByteArray.h"

#include "jsapi.h"
#include "jsfriendapi.h"
#include "cocos2d_specifics.hpp"

SocketThread::~SocketThread(void)
{
    
}

SocketThread::SocketThread(void)
{
    
}

void SocketThread::start()
{

    char* json = SocketManager::getInstance()->msgVector.front();
    
    TCPSocket *ts = SocketManager::getInstance()->ts;
    
    ts->Create(AF_INET,SOCK_STREAM,0);
    bool iscon=ts->Connect(SocketManager::getInstance()->getAddr(),SocketManager::getInstance()->getPort());
    
    if (iscon)
    {
        int len = strlen(json);
        len = len + 5;
        ByteArray *ba = new ByteArray(len);
        ba->writeInt(strlen(json));
        ba->writeByte(0);
        ba->writeString(json);
        ts->Send(ba->getByteArray(), len);
    } else {
        printf("TCPSOCKET ERROR : connect failed!");
    }
    
    char* buff;
    ts->Recv(buff);

    resposeMsg(buff);
}

void SocketThread::resposeMsg(char* str)
{
//    SocketManager::getInstance()->resposeMsg(str);
//    
//    
//    js_proxy_t * p = jsb_get_native_proxy(SocketManager::getInstance());
//    jsval retval;
//    JSContext* jc = ScriptingCore::getInstance()->getGlobalContext();
//    //  定义参数
//    //JSString *str = "abcd";
//    
//    JSString *jss = JS_NewStringCopyZ(jc, str);
//    
//    jsval v[] = {
//        //        v[0] = INT_TO_JSVAL(99)
//        v[0] = STRING_TO_JSVAL(jss)
//    };
//    
//    ScriptingCore::getInstance()->executeFunctionWithOwner(OBJECT_TO_JSVAL(p->obj), "callback", 1, v, &retval);
}




