
#include <iostream>

int main() {


    using namespace std;

    int timestable[10][10];

    for(int row = 1; row <= 10; row++){
        for(int col = 1; col <= 10; col++){
            timestable[row - 1][col - 1] = row * col;
        }
    }



    for(int row = 0; row < 10; row++){
        for(int col = 0; col < 10; col++){
            cout << timestable[row][col] << "  ";
        }

        cout << endl;
    }







    return 0;
}
