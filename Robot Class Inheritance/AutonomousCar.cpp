//
//  AutonomousCar.cpp
//  workshop5
//
//  Created by Andrew Smith on 07/11/2016.
//  Copyright © 2016 Andrew Smith. All rights reserved.
//

#include "AutonomousCar.h"
#include <iostream>
#include <string>

using namespace std;

AutonomousCar::AutonomousCar(string text, int number1, int number2) : Robot(text, number1, number2){
    name = text;
    row = number1;
    col = number2;

}

void AutonomousCar::drive(){
    cout << name << " is an autonomous car at " << row << ", " << col << endl;
}

