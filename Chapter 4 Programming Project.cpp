//Jacob Walrath
//10/16/2024
//Chapter 4 Programming Project
//Shipping_Charges

#include <iostream>

using namespace std;

int main()
{
    double weight, distance;
    double rate = 0.0;
    double total = 0.0;

    cout << "Enter the weight of the package in kilograms (maximum of 20 kg): ";
    cin >> weight;

    cout << "Enter the distance that the package will be shipped\n";
    cout << "(minimum of 10 miles and maximum of 3,000 miles): ";
    cin >> distance;

    if ((weight <= 2) && (weight > 0))
        rate = 1.10;
    else if (weight > 2 && weight <= 6)
        rate = 2.20;
    else if (weight > 6 && weight <= 10)
        rate = 3.70;
    else if (weight > 10 && weight <= 20)
        rate = 4.80;
    else if ((weight <= 0) || (weight > 20))
        cout << "You did not enter a valid weight.\n";

    if ((distance < 10) || (distance > 3000))
        cout << "You did not enter a valid distance.\n";

    total = (distance / 500) * rate;

    if (rate != 0.0)
    {
        if ((distance >= 10) && (distance <= 3000))
            cout << "The total for charges is " << total << ".";
    }

    return 0;
}