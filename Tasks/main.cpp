#include <iostream>
using namespace std;

int main() {
    string cars[6] = {"Volvo", "BMW", "Ford", "Mazda", "Toyota", "Honda"};
    int age[5] = {25, 17, 10, 15, 19};
    int choice;

    // cout << "Enter your choice between 0 and 2:" << endl;;
    // cin >> choice;
    // cout << cars[choice] << endl;

    // cout << cars[1:3];

    for( string car : cars){
        cout << car << endl;
    }

    return 0;
}

