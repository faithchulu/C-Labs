#include <iostream>

using namespace std;

int main (){

   int numbers[5] = {1, 2, 3, 4, 5}; 

//    string letters[3][4] =  {
//     {"A", "B", "C", "D"},
//     {"E", "F", "G", "H"},
//     {"I", "J", "K", "L"}
//    };

   string letters [2][2][2] = {
    {
        {"A", "B"},
        {"C", "D"}
    },
    {
        {"E", "F"},
        {"G", "H"}
    }
   };


//    cout << letters[1][2] << endl; // Accessing the third element of the second array in the first array

   for(int i = 0; i < 3; i++) {
       for(int j = 0; j < 4; j++) {
           cout << letters[i][j] << " ";
       }
       cout << endl;
    }

    return 0;
}