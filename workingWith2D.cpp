#include <iostream>

using namespace std;

int main(){

    int numberGrid[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    for(int i = 0; i < 3; i++){

        for(int k = 0; k < 2; k++){

            cout << numberGrid[i][k] << endl;

        }
    }

    return 0;
}