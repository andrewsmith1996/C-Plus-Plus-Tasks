//
//  main.cpp
//  passbyreference
//
//  Created by Andrew Smith on 07/11/2016.
//  Copyright © 2016 Andrew Smith. All rights reserved.
//

#include <iostream>

void passByValue(int x){
    x = 46;
}

void passByReference(int *x){

    *x = 45;
   
}

int main() {
    
    int x = 44;
    
    //Nothing happens as the value is passed by value, a copy of the value is made
    passByValue(x);
    std::cout << "x after passing by value " << x << std::endl;

    //Function has access to x as memory address is passed to function
    passByReference(&x);
    std::cout << "x after passing by references " << x << std::endl;

    return 0;
}
