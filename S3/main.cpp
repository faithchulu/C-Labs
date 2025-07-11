#include <iostream>

using namespace std;

int main() {

    int i = 0;
    int countdown;

    // //While loop
    // while (i == 3){
    //     cout << "Output from while loop" << endl;
    //     cout << "i is: " << i << endl;
    // }

    // // Do while loop
    // do {
    //     cout << "Output from Do while loop" << endl;
    // } while (i == 3);

    cout << "Enter a number to countdown from: " << endl;
    cin >> countdown;

    //Practical example for while loop
    while (countdown > 0){
        cout << countdown << endl;
        countdown--;
    }

    cout << "Happy new year!"   << endl;    

    
 
    return 0;
} 