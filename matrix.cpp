//
//  main.cpp
//  matrix
//
//  Created by Andrew Smith on 07/11/2016.
//  Copyright © 2016 Andrew Smith. All rights reserved.
//

#include <iostream>
#include <array>

#define rows 6
#define cols 6

using namespace std;

//Main Matrix Class
class Matrix{
public:
    
    Matrix(int number){
        cout << "Matrix was allocated memory" << endl;
        for(int col = 0; col < rows; col++){
            for(int row = 0; row < cols; row++){
                arr[col][row] = number;
            }
        }
    }
    
    ~Matrix(){
        cout << "Matrix was deallocated memory" << endl;
    }
    
    //Populate array with a given float
    void populate(float number){
        for(int col = 0; col < rows; col++){
            for(int row = 0; row < cols; row++){
                arr[col][row] = number;
            }
        }
    }
    
    //Print whole Matrix
    void print(){
        for(int col = 0; col < cols; col++){
            for(int row = 0; row < rows; row++){
                cout << arr[col][row] << " ";
            }
            cout << "\n";
        }
    }
    
    //Set Individual elements
    void set(float number, int row, int col){
        arr[row][col] = number;
    }
    
    //Get Individual Elements
    void get(int row, int col){
        cout << arr[row][col] << endl;
    }
    
    
private:
    //Definition of array
    array<array<float, rows>, cols> arr;
    
    
};



int main(){
    
    //Declare new Matrix
    Matrix* myMatrix = new Matrix(7);
     
    //myMatrix->populate(0.6);
     
    //myMatrix->set(5.2, 3, 3);
     
    myMatrix->print();
     
     
    //Delete memory
    delete myMatrix;
    
    return 0;
}
