//
//  robot.h
//  workshop5
//
//  Created by Andrew Smith on 07/11/2016.
//  Copyright © 2016 Andrew Smith. All rights reserved.
//

#ifndef robot_h
#define robot_h
#include <string>
using namespace std;
class Robot{
    
public:
    Robot(string text, int number, int number2);
    int getRow();
    int getCol();
    void setRow(int number);
    void setCol(int number);
    void printPosition();
    void printName();
    void moveForward();
    void moveLeft();
    void moveRight();
    
protected:
    int row;
    int col;
    string name;

    
    
};



#endif /* robot_h */
