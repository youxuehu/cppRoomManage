//
//  Teacher.hpp
//  机房预约系统
//
//  Created by youxuehu on 2024/4/24.
//
#pragma once
#ifndef Teacher_hpp
#define Teacher_hpp

#include <stdio.h>

#endif /* Teacher_hpp */

#include "Identify.hpp"


using namespace std;



class Teacher : public Identify
{
    
public:
    
    Teacher();
    
    Teacher(int empId, string name, string pwd);
    
    void openMenu();
    
    void showAllOrder();
    
    void validOrder();
    
};
