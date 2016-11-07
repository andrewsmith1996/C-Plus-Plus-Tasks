//
//  main.cpp
//  inheritance
//
//  Created by Andrew Smith on 04/11/2016.
//  Copyright © 2016 Andrew Smith. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class Person{
public:
    void setDetails(string text, int number){
        name = text;
        age = number;
    }

    void printName(){
        cout << name << endl;
    }
    void printAge()
    {
        cout << age << endl;
    }
    void speak(){
        cout << name << " is a person!" << endl;
    }

    void breathe(){
        cout << name << " is breathing!" << endl;
    }


    ~Person(){
        cout << name << " was deleted!" << endl;
    }

protected:
    string name;
    int age;



};

class Adult : public Person{
public:
       void work(){
        cout << name << " is working because he is an adult!" << endl;
    }

    void drink(){
        cout << name << " is drinking because he is an adult!" << endl;
    }

};

class Child : public Person{
public:


    void play(){
        cout << name << " is playing because he is a child!" << endl;    }

    void cry(){
        cout << name << " is crying because he is a child!" << endl;
    }
};


int main() {

    Person* mary = new Person;
    mary->setDetails("Mary", 19);
    mary->printName();
    mary->printAge();

    cout << endl;

    Adult* john = new Adult;
    john->setDetails("John", 20);
    john->printName();
    john->printAge();

    cout << endl;

    Child* josh = new Child;
    josh->setDetails("Josh", 5);
    josh->printName();
    josh->printAge();

    cout << endl;

    john->speak();
    john->breathe();
    john->work();
    john->drink();

    cout << endl;

    josh->speak();
    josh->breathe();
    josh->play();
    josh->cry();

    cout << endl;

    mary->speak();
    mary->breathe();





    cout << endl;
    delete john;
    delete josh;
    delete mary;




    return 0;
}
