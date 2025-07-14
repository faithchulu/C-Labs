#include <iostream>

using namespace std;

void myFunction(){
        cout << "I just got executed!" << endl;
    }

int sum (int a, int b){
    return a + b;
}

string print_my_name( string name) {
    return "My name is " + name;
}

int main() {

    int x;
    int y;
    myFunction();
    cout << print_my_name("Ngambo") << endl;

    cout << "Enter two integers: " << endl;
    cin >> x;
    cin >> y;

    cout << "The sum of x and y is: " << sum(x, y) << endl;

    return 0;
}


