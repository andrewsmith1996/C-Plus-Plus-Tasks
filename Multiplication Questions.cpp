//
//  main.cpp
//  tasks
//
//  Created by Andrew Smith on 31/10/2016.
//  Copyright © 2016 Andrew Smith. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {

    int multiple_one = 1, multiple_two = 1;
    
    while(multiple_one <= 12){
        multiple_two = 1;
        while(multiple_two <= 12){
            bool correct = false;
            while(correct == false){
                cout << "What is " << multiple_one << " * " << multiple_two << " ?" << endl;
                int answer;
                cin >> answer;
                if(answer == (multiple_one * multiple_two)){
                    cout << "Correct!" << endl;
                    correct = true;
                } else{
                    cout << "Incorrect!" << endl;
                }
            }
            multiple_two++;
            cout << endl << endl;
        }
        multiple_one++;

        
    }
    
 

    return 0;
}
