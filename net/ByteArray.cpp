//
//  ByteArray.cpp
//  CocosJSGame
//
//  Created by Yue on 14-11-6.
//
//

#include "ByteArray.h"
#include "ConvertUtil.h"

ByteArray::ByteArray(int capacity)
{
    _capacity = capacity;
    _byteList = new unsigned char[capacity];
}

void ByteArray::CheckWriteIndex(int len)
{
    
}

unsigned char* ByteArray::ReverseOrder(unsigned char* bytes, int start, int len)
{
    return bytes;
}

void ByteArray::writeByte(unsigned char c)
{
    _byteList[_writeIndex++] = c;
}

void ByteArray::writeBytes(unsigned char* c, int start, int len)
{
    if(start == -1|| len==-1)
    {
        start = 0;
        len = strlen((char*)c);
    }
    CheckWriteIndex(len);
    memcpy(_byteList + _writeIndex + 1, &c, len);
    _writeIndex += len;
    
}


void ByteArray::writeInt(int i)
{
    uint t = ConvertUtil::convertLToB(i);
    memcpy(_byteList, &t, sizeof(int));
    _writeIndex += 4;
}


void ByteArray::writeString(char* str)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        writeByte(str[i]);
    }
}

void ByteArray::clear()
{
    
}