//
//  ConvertUtil.h
//  CocosJSGame
//
//  Created by Yue on 14-11-6.
//
//

#ifndef __CocosJSGame__ConvertUtil__
#define __CocosJSGame__ConvertUtil__

#include <iconv.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <memory.h>


using namespace std;

class ConvertUtil {
    
public:
    static unsigned int convertLToB(unsigned int i)
    {
        unsigned char *p = (unsigned char*)&i;
        return(((unsigned int)*p<<24)+((unsigned int)*(p+1)<<16)+
               ((unsigned int)*(p+2)<<8)+(unsigned int)*(p+3));};
    
    static unsigned int convertLBoT(unsigned int i)
    {
        unsigned char *p = (unsigned char*)&i;
        return(((unsigned int)*p)+((unsigned int)*(p+1)<<8)+
               ((unsigned int)*(p+2)<<16)+(unsigned int)*(p+3)<<24);
    };
    
    static void UTF_8ToGB2312(string &pOut, char *pText, int pLen) //utf_8转为gb2312
    {
    
    };
    
    static void GB2312ToUTF_8(char* pOut,char *pText, int pLen) //gb2312 转utf_8
    {
        char* uchar = pOut;
        uchar[1] = ((pText[0] & 0x0F) << 4) + ((pText[1] >> 2) & 0x0F);
        uchar[0] = ((pText[1] & 0x03) << 6) + (pText[2] & 0x3F);
        return;
    };
};

#endif /* defined(__CocosJSGame__ConvertUtil__) */
