#include <iostream>

using namespace std;

int main(){

    double acceleration, time, initialVelocity, finalVelocity;

    cout << "Enter the acceleration (m/s^2): " << endl;
    cin >> acceleration;

    cout << "Enter the time (s): " << endl;
    cin >> time;

    cout << "Enter the initial velocity (m/s): " << endl;
    cin >> initialVelocity;

    cout << "Final velocity is: " << initialVelocity + (acceleration * time) << " m/s" << endl;


    return 0;
}

