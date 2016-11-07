//
//  AutonomousCar.hpp
//  workshop5
//
//  Created by Andrew Smith on 07/11/2016.
//  Copyright © 2016 Andrew Smith. All rights reserved.
//

#ifndef AutonomousCar_h
#define AutonomousCar_h
#include <string>
#include <stdio.h>
#include <string>
#include "robot.h"
using namespace std;

class AutonomousCar : public Robot{
    
public:
    AutonomousCar(string name, int number1, int number2);
    void drive();
    
private:
    
    string colour;
    
    
};



#endif /* AutonomousCar_hpp */
