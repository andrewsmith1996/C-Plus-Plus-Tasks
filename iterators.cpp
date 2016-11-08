//
//  main.cpp
//  tryandcatch
//
//  Created by Andrew Smith on 08/11/2016.
//  Copyright © 2016 Andrew Smith. All rights reserved.
//

#include <vector>
#include <iostream>

using namespace std;

int main() {

    //Declare Vector
    vector<int> myVec;
    
    //Declare Iterator
    vector<int>::iterator it;
    
    //Populate Vector with random numbers
    for(int x = 0; x < 20; x++){
        myVec.push_back(rand() % 9);
    }
    
    //Use Iterator to loop through vector. Has to be *it.
    for(it = myVec.begin(); it < myVec.end(); it++){
        cout << myVec[*it] << " ";
    }
    
    return 0;
}
