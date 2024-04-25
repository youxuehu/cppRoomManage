//
//  main.cpp
//  机房预约系统
//
//  Created by youxuehu on 2024/4/24.
//
#pragma once
#include <iostream>
using namespace std;
#include "string"
#include "fstream"


#include "Identify.hpp"

#include "GlobalFile.hpp"

#include "Student.hpp"
#include "Teacher.hpp"
#include "Manager.hpp"

void managerMenu(Identify * &manager) {
    while (true) {
        manager->openMenu();
        
        Manager * man = (Manager*) manager;
        
        int select = 0;
        cin >> select;
        
        if (select == 1) {// 添加账号
            
        } else if (select == 2) {// 查看账号
            
        } else if (select == 3) {// 查看机房
            
        } else if (select == 4) {
  
            
        } else if (select == 0) { // 注销登录
            
            cout << "注销成功" << endl;
            cout << "Press any key to continue...";
            cout << endl;
            cin.get(); // 等待用户输入
            getchar(); // 获取并丢弃输入缓冲区的第一个字符（通常是换行符）
            delete manager;
            return;
        }
        
    }
    
}

void LoginIn(string fileName, int type) {
    cout << endl;
    system("pwd");
    // 定义父类指针，用于指向子类实现的对象
    Identify * person = NULL;
    
    // 读文件
    ifstream ifs;
    
    ifs.open(fileName, ios::in);
    
    //判断文件是否存在
    if(!ifs.is_open()) {
        cout << "文件不存在" << endl;
        ifs.close();
        
        return;
    }
    
    //准备接收用户的信息
    
    int id = 0;
    string name;
    string pwd;
    
    //判断身份
    if(type == 1) {
        // 学生身份
        cout << "请输入你的学号：" << endl;
        
        cin >> id;
        
    } else if(type == 2) {
        // 老师身份
        cout << "请输入你的职工号：" << endl;
        
        cin >> id;
        
    }
    
    cout << "请输入用户名：" << endl;
    cin >> name;
    
    cout << "请输入密码：" << endl;
    cin >> pwd;
    
    
    //判断身份
    if(type == 1) {
        // 学生身份验证
        cout << "学生身份验证" << endl;
        int fId;
        string fName;
        string fPwd;
        while(ifs >> fId && ifs >> fName && ifs >> fPwd) {
            cout << fId << endl;
            cout << fName << endl;
            cout << fPwd << endl;
            cout << endl;
            
            if (fId == id && fName == name && fPwd == pwd) {
                cout << "登录成功" << endl;
                cout << "进入学生菜单" << endl;
                person = new Student(id, name, pwd);
                return;
            }
        }
       
        
    } else if(type == 2) {
        // 老师身份验证
        cout << "老师身份验证" << endl;
        int fId;
        string fName;
        string fPwd;
        while(ifs >> fId && ifs >> fName && ifs >> fPwd) {
            cout << fId << endl;
            cout << fName << endl;
            cout << fPwd << endl;
            cout << endl;
            
            if (fId == id && fName == name && fPwd == pwd) {
                cout << "登录成功" << endl;
                cout << "进入老师菜单" << endl;
                person = new Teacher(id, name, pwd);
                return;
            }
        }
         
        
    } else if(type == 3) {
        // 管理员身份验证
        cout << "管理员身份验证" << endl;
        
        string fName;
        string fPwd;
        while(ifs >> fName && ifs >> fPwd) {
            cout << fName << endl;
            cout << fPwd << endl;
            cout << endl;
            
            if (fName == name && fPwd == pwd) {
                cout << "登录成功" << endl;
                cout << "进入管理员菜单" << endl;
                person = new Manager(name, pwd);
                managerMenu(person);
                return;
            }
        }
        
    }
    
    cout << "验证登录失败！" << endl;
    
}

int main(int argc, const char * argv[]) {
    int select = 0;
    while (true) {
        cout << "\t\t请输入您的身份\n" << endl;
        cout << "\t\t1 学生代表\n" << endl;
        cout << "\t\t2 老师\n" << endl;
        cout << "\t\t3 管理员\n" << endl;
        cout << "\t\t0 退出\n" << endl;
        cout << "请输入您的选择: " << endl;
        
        cin >> select; // 接受用户选择
        
        switch (select) {
            case 1:
                cout << "学生代表";
                cout << endl;
                LoginIn(STUDENT_FILE, 1);
                break;
            case 2:
                cout << "老师";
                cout << endl;
                LoginIn(TEACHER_FILE, 2);
                break;
            case 3:
                cout << "管理员";
                cout << endl;
                LoginIn(ADMIN_FILE, 3);
                break;
            case 0:
                cout << "退出";
                cout << endl;
                cout << "欢迎下一次使用";
                cout << endl;
                cout << "Press any key to continue...";
                cout << endl;
                cin.get(); // 等待用户输入
                getchar(); // 获取并丢弃输入缓冲区的第一个字符（通常是换行符）
                return 0;
                break;
            default:
                cout << "输入有误，请重新输入";
                cout << endl;
                break;
        }
    }
    return 0;
}
