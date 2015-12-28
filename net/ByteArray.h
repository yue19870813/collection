//
//  ByteArray.h
//  CocosJSGame
//
//  Created by Yue on 14-11-6.
//
//

#ifndef __CocosJSGame__ByteArray__
#define __CocosJSGame__ByteArray__

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <iostream>
#include <string.h>

using namespace std;

class ByteArray{
    
private:
    int _capacity;
    unsigned char* _byteList;
    int _readIndex = 0;
    int _writeIndex = 0;
    int _markReadIndex = 0;
    int _markWriteIndex = 0;
    
public:
    
    ByteArray() = default;
    ByteArray(int capacity);
    
    void setByteArray(unsigned char* byteList) {_byteList = byteList;};
    unsigned char* getByteArray() {return _byteList;};
    
    unsigned char* ReverseOrder(unsigned char* bytes, int start = -1, int len = -1);
    
    void CheckWriteIndex(int len);
    
    void writeByte(unsigned char c);
    void writeBytes(unsigned char* c, int start = -1, int len = -1);
    void writeInt(int i);
    void writeString(char* str);
    
    void clear();
    
    
};

#endif /* defined(__CocosJSGame__ByteArray__) */
