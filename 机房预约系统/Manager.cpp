//
//  Manager.cpp
//  机房预约系统
//
//  Created by youxuehu on 2024/4/25.
//

#include "Manager.hpp"
#include <iostream>
using namespace std;

//Manager:: 表示作用域
//默认构造
Manager::Manager()
{
    
}
//有参构造
Manager::Manager(string name, string pwd)
{
    this->m_Name = name;
    this->m_Pwd = pwd;

    
}
//菜单界面
void Manager::openMenu()
{
    cout << "\t\t欢迎管理员 \"" << this->m_Name << "\" 登录\n" << endl;
    cout << "\t\t1 添加账号\n" << endl;
    cout << "\t\t2 查看账号\n" << endl;
    cout << "\t\t3 查看机房\n" << endl;
    cout << "\t\t4 清空预约\n" << endl;
    cout << "\t\t0 注销登录\n" << endl;
    cout << "请输入您的选择: \n";
}
//添加账号
void Manager::addPerson()
{
    
}
//查看账号
void Manager::showPersion()
{
    
}
//查看机房信息
void Manager::showComputer()
{
    
}
//清空预约记录
void Manager::clearFile()
{
    
}
