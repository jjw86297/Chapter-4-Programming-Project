//Jacob Walrath
//10/16/2024
//Chapter 4 Programming Project
//Geometry_Calculator

#include <iostream>

using namespace std;

int main()
{
    int choice;

    cout << "Geometry Calculator\n";
    cout << "     1. Calculate the Area of a Circle\n";
    cout << "     2. Calculate the Area of a Rectangle\n";
    cout << "     3. Calculate the Area of a Triangle\n";
    cout << "     4. Quit\n";
    cout << "     Enter your choice (1-4): ";
    cin >> choice;

    if (choice == 1)
    {
        double radius = 0.0;
        cout << "\nWhat is the radius of the circle? ";
        cin >> radius;

        if (radius >= 0.0)
            cout << 3.14159 * (radius * radius) << "\n";

        else
            cout << "You didn't enter a correct radius.\n";
    }

    else if (choice == 2)
    {
        double length = 0.0;
        double width = 0.0;
        cout << "\nWhat is the length of the rectangle? ";
        cin >> length;
        cout << "What is the width of the rectangle? ";
        cin >> width;

        if ((length >= 0.0) && (width >= 0.0))
            cout << length * width << "\n";

        else
            cout << "You didn't enter a correct length and/or width.\n";
    }

    else if (choice == 3)
    {
        double base = 0.0;
        double height = 0.0;
        cout << "\nWhat is the length of the triangle's base? ";
        cin >> base;
        cout << "What is the height of the triangle? ";
        cin >> height;

        if ((base >= 0.0) && (height >= 0.0))
            cout << base * height * 0.5 << "\n";

        else
            cout << "You didn't enter a correct base length and/or height.\n";
    }

    else if (choice == 4)
        cout << "\nQuitting program ...\n";

    else
        cout << "\nYou did not enter a correct option.\n";

    return 0;
}