//
//  Student.hpp
//  机房预约系统
//
//  Created by youxuehu on 2024/4/24.
//
#pragma once
#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>

#endif /* Student_hpp */

#include "Identify.hpp"

using namespace std;

class Student : public Identify
{
public:
    
    Student();//默认构造
    
    Student(int id, string name, string pwd);//有参构造
    
    virtual void openMenu();
    
    void applyOrder();//申请订单
    
    void showMyOrder();//显示自己的订单
    
    void showAllOrder();//显示所有订单
    
    void calcelOrder();//取消订单
    
    int m_id;//学生学号
    
};
