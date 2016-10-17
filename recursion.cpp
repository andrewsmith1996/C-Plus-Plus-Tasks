#include <iostream>
using namespace std;

void half(float number){

    if(number >= 1){
        cout << number << endl;
        number /= 2;
        half(number);
    }


}

int main(){

    float number;

    cout << "Enter a Float" << endl;

    cin >> number;

    half(number);

    return 0;
}
