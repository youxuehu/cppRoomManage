//
//  main.cpp
//  机房预约系统
//
//  Created by youxuehu on 2024/4/24.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    int select = 0;
    while (true) {
        cout << "\t\t请输入您的身份\n" << endl;
        cout << "\t\t1 学生代表\n" << endl;
        cout << "\t\t2 老师\n" << endl;
        cout << "\t\t3 管理员\n" << endl;
        cout << "\t\t0 退出\n" << endl;
        cout << "请输入您的选择: ";
        
        cin >> select; // 接受用户选择
        
        switch (select) {
            case 1:
                cout << "学生代表";
                break;
            case 2:
                cout << "老师";
                break;
            case 3:
                cout << "管理员";
                break;
            case 0:
                cout << "退出";
                cout << "欢迎下一次使用";
                return 0;
                break;
            default:
                cout << "输入有误，请重新输入";
                break;
        }
    }
    return 0;
}
