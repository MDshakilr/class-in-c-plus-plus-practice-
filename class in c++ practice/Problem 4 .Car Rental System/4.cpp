/*
Create a class `Car` with attributes `model`, `make`, and `rentalFee`. Implement a
parameterized constructor to initialize these attributes. Overload the constructor to handle both
with and without rental fee cases. Create a method to display the details of the car, including the
rental fee.
Sample Input:
Car 1: Model - "Sedan", Make - "Toyota"
Car 2: Model - "SUV", Make - "Ford", Rental Fee - 50

Sample Output:
Car 1 created with no rental fee.
Car 2 created with rental fee 50. Rental Fee: 50.
*/
#include <bits/stdc++.h>
using namespace std;

class Car {
public:
    string model;
    string make;
    int rentalFee;

    Car(string nModel, string nMake)
    {
        model = nModel;
        make = nMake;
        cout << "Car 1 created with no rental fee." << endl;
    }

    Car(string pModel, string pMake, int prentalFee)
    {
        model = pModel;
        make = pMake;
        rentalFee = prentalFee;
        cout << "Car 2 created with rental fee " << rentalFee << ". Rental Fee:";
        displayDetails();

    }

    void displayDetails()
    {
        if (rentalFee != -1) {
            cout << rentalFee;
        }
    }
};

int main() {
    Car car1("Sedan", "Toyota");
    Car car2("SUV", "Ford", 50);

    return 0;
}
