
#include <iostream>
using namespace std;
int factorial(int);

int main(void) {
    int number;

    cout << "Please enter a  integer: ";
    cin >> number;
    cout << number << " factorial is: " << factorial(number) << endl;
}

int factorial(int number) {
    int temp = 1;

    if(number > 1){
        temp = number * factorial(number - 1);

    }

    return temp;
}
