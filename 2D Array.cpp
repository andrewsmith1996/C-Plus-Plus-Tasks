
#include <iostream>
using namespace std;


int main(void) {

    int array3D[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    //Display the 3D Array
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            cout << array3D[row][col] << " ";
        }
        cout << endl;
    }


    //Convert to 2D Array
    int array2D[9];
    int count = 0;

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            array2D[count] = array3D[row][col];
            count++;

        }
    }

    for(int count = 0; count < 9; count++){
         cout << array2D[count] << " ";
    }

}
