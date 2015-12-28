//
//  SocketManager.cpp
//  CocosJSGame
//
//  Created by Yue on 14/11/10.
//
//
#include "SocketManager.h"


static SocketManager* _instance = new SocketManager();

SocketManager* SocketManager::getInstance()
{
    return _instance;
}

void SocketManager::init(char* addr, int port, int netType)
{
    _addr = addr;
    _port = port;
    _isInit = true;
}

void SocketManager::send(char* msg)
{
    if (_isInit) {
        
        m_jsCx = ScriptingCore::getInstance()->getGlobalContext();
        
        ts = new TCPSocket();
        
        msgVector.push_back(msg);
        _socketThread = new std::thread(&SocketThread::start, new SocketThread());
    } else {
        printf("TCPSOCKET ERROR : SocketManager not init!");
    }
}

void SocketManager::resposeMsg(char* str)
{
    js_proxy_t * p = jsb_get_native_proxy(SocketManager::getInstance());
    jsval retval;
    JSContext* jc = ScriptingCore::getInstance()->getGlobalContext();
    //  定义参数
    //JSString *str = "abcd";
    
    JSString *jss = JS_NewStringCopyZ(jc, str);
    
    jsval v[] = {
        //        v[0] = INT_TO_JSVAL(99)
        v[0] = STRING_TO_JSVAL(jss)
    };
    
    ScriptingCore::getInstance()->executeFunctionWithOwner(OBJECT_TO_JSVAL(p->obj), "callback", 1, v, &retval);
}



