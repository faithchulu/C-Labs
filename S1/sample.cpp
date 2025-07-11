#include <iostream>
using namespace std;

int main() {
    
    // Declare variables
    string name;
    int age;

    // Ask for the user's name
    cout << "What is your name? ";
    cin >> name;

    // Ask for the user's age
    cout << "Hi " << name << "! How old are you? ";
    cin >> age;

    // Output a message based on the age
    if (age >= 18) {
        cout << "You're old enough to vote!" << endl;
    } else {
        cout << "You're still young — enjoy it!" << endl;
    }

    return 0;
}
