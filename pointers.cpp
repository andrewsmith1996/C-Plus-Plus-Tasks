#include <iostream>
using namespace std;
int factorial(int);

int main(void) {

    int variable = 45;

    //Declare the variable of type Pointer to the address of the variable
    int* pointerVar = &variable;

    cout << "The Address of the Variable is " << pointerVar << endl;

    //Dereference the address to show what the value at the address
    cout << "The Variable at the Address is " << *pointerVar << endl;
}
