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
    
    //Write to a Text File
    fstream myFile;
    
    myFile.open("test.txt", ios::out);
    myFile << "Hello World!";
    myFile.close();
    
    //Reading from a Text File
    fstream readFile;
    
    readFile.open("hello.txt", ios::in);
    
    string var;
    
    readFile >> var;
    
    myFile.close();
    
    cout << var << endl;
    
    //Appending to a text file
    
    fstream appFile;
    
    appFile.open("hello.txt", ios::app);
    
    appFile << "world";
    appFile.close();
    
    //Use .eof() to detect end of file
    
    //Get the lines into an array until it reaches \n
    file.getline(str, 80, '\n');
    
    string line[10];
    
    getline(file line[i];
    
    
  
    
    
    
    
    return 0;
}
