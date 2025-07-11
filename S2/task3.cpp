#include <iostream>

using namespace std;

int main (){

    //Declare variables
    int day;
    int choice = 1;

    //Loop to allow user to enter day of the week multiple times
    while (choice == 1){

    //Prompt user to enter the day of the week
    cout << "Enter the day of the week (1-7): " << endl;
    cin >> day;

    //Switch statement to determine the day of the week based on user input
    switch(day) {
        case 1:
            cout << "Today is sunday" << endl;
            break;
        case 2:
            cout << "Today is monday" << endl;
            break;
        case 3:
            cout << "Today is tuesday" << endl;
            break;
        case 4:
            cout << "Today is wednesday" << endl;
            break;
        case 5:
            cout << "Today is thursday" << endl;
            break;
        case 6:
            cout << "Today is friday" << endl;
            break;
        case 7:
            cout << "Today is saturday" << endl;
            break;
        default:
            cout << "You've entered an invalid choice. Please select from the menu" << endl;
            break;
    }

    //Prompt user to continue or exit
    cout << "Do you want to continue? Enter 1 for YES and 0 for NO" << endl;
    cin >>  choice;

    }


    return 0;
}