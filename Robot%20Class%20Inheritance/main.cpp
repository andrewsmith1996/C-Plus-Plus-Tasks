//
//  main.cpp
//  workshop5
//
//  Created by Andrew Smith on 07/11/2016.
//  Copyright © 2016 Andrew Smith. All rights reserved.
//

#include <iostream>
#include "robot.h"
#include "AutonomousCar.h"

using namespace std;



int main() {
    
    Robot* andrewRobot = new Robot("Andrew", 0, 0);
    
    andrewRobot->printName();
    andrewRobot->printPosition();
   
    AutonomousCar* car = new AutonomousCar("Car Man", 0, 0);
    car->drive();
    car->moveForward();
    car->moveRight();
    car->drive();
    
    delete andrewRobot;
    delete car;
    
    
    return 0;
}
