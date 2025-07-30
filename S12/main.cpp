#include <iostream>
using namespace std;

class Car {
    public:         // Access specifier
        string brand;
        string model;
        string color;
        int year;
        float weight;
        float price;

    Car() {
        cout << "Default Constructor Called" << endl;
        brand = "Unknown";
        model = "Unknown"; 
        color = "Unknown";
        year = 0;   
        weight = 0.0;
        price = 0.0;
    }

    Car(string b, string m, string c, int y, float w, float p){
        cout << "Constructor Called" << endl;
        brand = b;
        model = m; 
        color = c;
        year = y;   
        weight = w;
        price = p;
    }    

    void printDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Color: " << color << endl;
        cout << "Year: " << year << endl;
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Price: $" << price << endl;
    }
}; 

int main() {

    Car car1;
    car1.printDetails();

    cout << endl;

    Car car2("Toyota", "Corolla", "Red", 2020, 1300.5, 20000.0);
    car2.printDetails();

    return 0;
}
