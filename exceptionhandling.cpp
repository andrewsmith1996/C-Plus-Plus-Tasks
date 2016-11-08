//
//  main.cpp
//  tryandcatch
//
//  Created by Andrew Smith on 08/11/2016.
//  Copyright © 2016 Andrew Smith. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    //Try block contains the code to be run
    try{
        cout << "Enter a number greater than 50 and less than 100" << endl;
        int number;
        cin >> number;
        
        //Throw error numbers to e based on what the input is
        if(number < 50){
            throw 1;
        }
        
        if(number > 100){
            throw 2;
        }
        
    //Catch block catches the thrown exception e, error messages here
    } catch (int e){
        if(e == 1){
            cout << "You have entered a number less than 50. Error No: " << e << endl;
        } else{
            cout << "You have entered a number greater than 100. Error No: " << e << endl;
        }
        
    }
    

    
    return 0;
}
