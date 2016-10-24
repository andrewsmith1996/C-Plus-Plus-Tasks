//
//  main.cpp
//  textfiles
//
//  Created by Andrew Smith on 18/10/2016.
//  Copyright © 2016 Andrew Smith. All rights reserved.
//

#include <iostream>
#include <fstream>

int main() {
    
    using namespace std;
   
    //Writing to a text file
    ofstream myTextFile;
    
    myTextFile.open("test.txt", ios::out);
    myTextFile << "Hello World!";
    myTextFile.close();
    
    //Reading from a File
    ifstream file;
    
    file.open("example.txt", ios::in);
    
    string var;
   
    file >> var;
  
    file.close();
    
    cout << var << endl;
  
    //Appending to a text file
    ofstream appFile;
    appFile.open("example.txt", ios::app);
    appFile << "\nHow are you?";
    appFile.close();
    
    return 0;
}
