#include <iostream>
using namespace std;

int main() {

    enum Level {
        LOW = 1,
        MEDIUM,
        HIGH
    };

    enum Days {
        MONDAY,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY,
        SATURDAY,
        SUNDAY
    };

    enum Level myLevel = MEDIUM;

    switch(myLevel){
        case 1: 
            cout << "Low level" << endl;
            break;
        case 2:
            cout << "Medium level" << endl;
            break;
        case 3:
            cout << "High level" << endl;
            break;
        default:
            cout << "Unknown level" << endl;
            break;
    }





    return 0;
}
