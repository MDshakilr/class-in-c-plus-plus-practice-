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
