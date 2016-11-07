//
//  main.cpp
//  matrix
//
//  Created by Andrew Smith on 07/11/2016.
//  Copyright © 2016 Andrew Smith. All rights reserved.
//

#include <iostream>
#include <array>
#include <time.h>

#define rows 6
#define cols 6

using namespace std;

//Main Matrix Class
class Matrix{
public:
    
    //Constructor
    Matrix(int number){
        
        //Randomly Populates Matrix
        srand(time(0));
        cout << "Matrix was allocated memory" << endl;
        for(int col = 0; col < rows; col++){
            for(int row = 0; row < cols; row++){
                //arr[col][row] = number;
                arr[col][row] = rand() % 9;
            }
        }
    }
    
    //Deconstructor
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
    
    //Converts Array from 2D to 1D
    void convertTo1D(){
        int count = 0;
        
        for(int col = 0; col < cols; col++){
            for(int row = 0; row < rows; row++){
                arr1D[col * cols + row] = arr[col][row];
            }
        }
    }
    
    //Prints the 1D Array
    void print1D(){
        for(int count = 0; count < arr1D.size(); count++){
            cout << arr1D[count] << " ";
        }
    }
    
    //Converr
    void convertTo2D(){
        int count = 0;
        for(int colcount = 0; colcount < cols; colcount++){
            for(int rowcount = 0; rowcount < rows; rowcount++){
                arr2D[colcount][rowcount] = arr1D[count];
                count++;

            }
        }
        


    
        
    }
    
    void print2D(){
        for(int col = 0; col < cols; col++){
            for(int row = 0; row < rows; row++){
                cout << arr2D[col][row] << " ";
            }
            cout << "\n";
        }
    }
    
    void getVal(int col, int row){
        cout << "Contents is " << arr1D[col + row * rows] << endl;
    }
    
    
    
    
private:
    //Definition of array
    array<array<float, rows>, cols> arr;
    array<float, rows * cols> arr1D;
    array<array<float, rows>, cols> arr2D;
    
};



int main(){
    
    //Declare new Matrix
    Matrix* myMatrix = new Matrix(7);
    
    cout << "Original Matrix:" << endl;
    myMatrix->print();
    
    cout << endl;
    cout << "Original Matrix Converted to 1D:" << endl;
    myMatrix->convertTo1D();
    myMatrix->print1D();
    
    cout << endl;
    cout << endl;
    cout << "1D Version Converted to 2D:" << endl;
    myMatrix->convertTo2D();
    myMatrix->print2D();
    
    cout << endl;
    cout << "Elements from 1D Array at 2,3:" << endl;
    myMatrix->getVal(2,3);
    
    cout << endl;
    //Delete memory
    delete myMatrix;
    
    return 0;
}
