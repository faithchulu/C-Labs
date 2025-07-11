#include <iostream>

using namespace std;

int main() {

    //Declare variables
    int a;
    int b;
    int operatorChoice;


    //Prompt user to enter two numbers
    cout << "Enter the first number: " << endl;
    cin >> a;

    cout << "Enter the second number: " << endl;
    cin >> b;

    //Display menu for user to choose an operation
    cout << "Enter your choice :" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cin >> operatorChoice;

    

    //Swutch statement to perform the operation based on user choice
    switch(operatorChoice) {
        case   1:
            cout << "The sum is: " << a + b << endl;
            break;
        case   2:
            cout << "The difference is: " << a - b << endl;
            break;
        case   3:
            cout << "The product is: " << a * b << endl;
            break;
        case  4:
            if (b == 0){
                cout << "Not valid" << endl;
            } else {
            cout << "The quotient is: " << a / b << endl;
            break;
            }
        default:
            cout << "You've entered an invalid choice. Please select from the menu" << endl;
            break;

    }


    return 0;
}

