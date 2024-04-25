//
//  Identify.hpp
//  机房预约系统
//
//  Created by youxuehu on 2024/4/24.
//
#pragma once
#ifndef Identify_hpp
#define Identify_hpp

#include <stdio.h>

#endif /* Identify_hpp */

#include <istream>

using namespace std;

class Identify
{
    
public:
    
    string m_Name; // 用户名
    
    string m_Pwd; // 密码
    
    virtual void openMenu() = 0;
    
};
