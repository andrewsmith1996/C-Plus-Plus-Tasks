//
//  robot.cpp
//  workshop5
//
//  Created by Andrew Smith on 07/11/2016.
//  Copyright © 2016 Andrew Smith. All rights reserved.
//

#include <stdio.h>
#include "robot.h"
#include <iostream>
using namespace std;
Robot::Robot(string text, int number, int number2){
    name = text;
    row = number;
    col = number2;
}

int Robot::getRow(){
    return row;
}
int Robot::getCol(){
    return col;
}
void Robot::setRow(int number){
    row = number;
}
void Robot::setCol(int number){
    col = number;
}
void Robot::printPosition(){
    cout << "Robot is at " << row << ", " << col << endl;
}
void Robot::printName(){
    cout << "Hello, I am " << name << endl;
}
    
void Robot::moveForward(){
    row++;
}
    
void Robot::moveLeft(){
    col--;
}
    
void Robot::moveRight(){
    col ++;
}
