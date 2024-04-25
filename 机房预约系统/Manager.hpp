//
//  Manager.hpp
//  机房预约系统
//
//  Created by youxuehu on 2024/4/25.
//
#pragma once
#ifndef Manager_hpp
#define Manager_hpp

#include <stdio.h>

#endif /* Manager_hpp */
#include "Identify.hpp"
using namespace std;

class Manager : public Identify
{
public:
    
    //默认构造
    Manager();
    //有参构造
    Manager(string name, string pwd);
    //菜单界面
    virtual void openMenu();
    //添加账号
    void addPerson();
    //查看账号
    void showPersion();
    //查看机房信息
    void showComputer();
    //清空预约记录
    void clearFile();
};
