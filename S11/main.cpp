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

    void start() {
        cout << "Car started." << endl;
    }

    void turnLeft() {
        cout << "Car turned left." << endl;
    }

    int get_speed(){
        return 60; // Example speed
    }

    string get_brand() {
        return brand;
    }

    void turnRight() {
        cout << "Car turned right." << endl;
    }

    void brake() {
        cout << "Car stopped." << endl;
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
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.color = "Red";
    car1.year = 2020;
    car1.weight = 1300.5;
    car1.price = 20000.0;

    cout << "Car Details:" << endl;
    car1.printDetails();
    

    Car car2;
    car2.brand = "Benz";
    car2.model = "C-Class";
    car2.color = "Black";   
    car2.year = 2021;
    car2.weight = 1500.0;
    car2.price = 40000.0;

    cout << "\nCar Details:" << endl;
    car2.printDetails();


    return 0;
}