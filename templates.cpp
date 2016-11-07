

#include <iostream>
#include <vector>

using namespace std;

template <class TYPE>

void findMean(vector<TYPE> myVec){
    float total = 0.0;

    for(int count = 0; count < myVec.size(); count++){
        total += myVec[count];
    }

    cout << "Mean: " << total / myVec.size() << endl;
}



int main() {

    vector<int> myVecInt = {1,2,3,4,5,6};
    vector<double> myVecDouble= {1.5,2.3,3.5,4.6,5.4};
    vector<float> myVecFloat = {1.1,2.6,3.4,4.5,5.7};

    findMean(myVecInt);
    findMean(myVecDouble);
    findMean(myVecFloat);


    return 0;
}
