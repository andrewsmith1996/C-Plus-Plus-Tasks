
#include <iostr#include <iostream>
using namespace std;


int main(void) {

    srand(0);
    int number = rand() % 100;
    int guess;
    int goes = 0;

    do{
        cout << "Enter Guess" << endl;
        cin >> guess;

        if(guess < number){
            cout << "Too Low!" << endl;
        } else if(guess > number){
            cout << "Too High!" << endl;
        }

        goes++;

    } while(guess != number);

    cout << "You Won in " << goes << endl << "The Number was " << number << endl;


}
