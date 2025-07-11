#include <iostream>
using namespace std;

int main() {

    // Declare variables
    int age;
    string nationality;

    // Prompt user to enter their age and nationality
    cout << "Enter your age: " << endl;
    cin >> age;

    cout << "Enter your nationality: " << endl;
    cin >> nationality;

    // Check if the user is eligible to vote
    if (age >= 18 && nationality == "Zambian"){
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }


    return 0;
}