#include <iostream>

using namespace std;

int main(){

    string food = "Pizza";
    string &meal = food; // meal is a reference to food
    string *ptr = &food; // ptr is a pointer to food

    cout << "Original food: " << food << endl;
    cout << "Meal reference: " << meal << endl;
    cout << "Food pointer "<< ptr << endl;


    *ptr = "Humburger"; // Changing food will change meal and the value pointed to by ptr

    return 0;
}


