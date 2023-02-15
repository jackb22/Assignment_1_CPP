//
// Created by Jack Bennett on 2023-01-24.
//

#include <iostream>
using namespace std;

int main() {

//declaring variables
    char input; //user input
    char rerun; //user input to rerun program
    double Temp;  //user input temperature
    double TempF; //temperature in fahrenheit
    double tempC; //temperature in celsius


//taking user input
    cout << "This program converts Temperatures from Fahrenheit to Celsius and vice versa." << endl;


    do {
        cout << "Please enter your temperature: ";
        cin >> Temp; // taking user input temperature

        cout << "Please enter the units (F/C):";
        cin >> input; // taking user input unit of temperature

        if (input == 'F' || input == 'f') {
            tempC = (Temp - 32) * 5 / 9;
            cout << Temp << " degrees Fahrenheit is equivalent to " << tempC << " degrees Celsius." << endl;

            cout << " Do you want to convert again? (Y/N): ";
            cin >> rerun;

        } else if (input == 'C' || input == 'c') {
            TempF = (Temp * 9 / 5) + 32;
            cout << Temp << " degrees Celsius is equivalent to " << TempF << " degrees Fahrenheit." << endl;
            cout << " Do you want to convert again? (Y/N): ";
            cin >> rerun;
        } else {
            cout << "Invalid input. Please enter F or C." << endl;

        }
    } while (rerun == 'Y' || rerun == 'y');
        cout<< "Thank you. Goodbye." << endl;


}

