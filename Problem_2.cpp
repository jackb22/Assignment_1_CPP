/*
 * Title: Problem_2.cpp
 * Date: January 7th, 2023
 * Author: Jack Bennett
 * Version: 1.0
 */

/* Documentation
 *
 * Program Purpose: Convert temperature from Fahrenheit to Celsius and vice versa.
 *
 * Classes: None
 *
 * Notes: N/A
 *
 * Variables:
 * Input: Char -  Used to store the user input for the units of  temperature.
 *
 * Rerun: Char  - Used to store the user's response (if they want to rerun the program or not).
 *
 * Temp: Double - used to store the users input for temperature.
 *
 * TempF: Double - Used to Give/ Calculate   the temperature in Fahrenheit.
 *
 * TempC: Double - Used to give/ Calculate the temperature in Celsius.
 *
 */


/*
 * Test Plan:
 *
 * Normal Case:
 *  >>Please enter your temperature -> 32
 *  >>Please enter the units (F/C) -> F
 *  >>output:
 *  >> A temperature of 32 degrees Fahrenheit is equivalent to 0 degrees Celsius.
 *  >> Do you want another conversion? (Y/N):
 *
 * Bad Case 1 (not integer entered for Temp) :
 *  >>Please enter your temperature: no
 *  >>Please enter the units (F/C):Invalid input. Please enter F or C.
 *  >>Thank you. Goodbye.
 *
 * Bad Case 2( Integer  entered for F or C input)
 *   >>Please enter your temperature: 32
 *   >>Please enter the units (F/C): 12
 *   >>Invalid input. Please enter F or C.
 *   >>Thank you. Goodbye.
 *
 *
 */



#include <iostream>
int main() {

//declaring variables
    char Input; //user input
    char Rerun; //user input to rerun program
    double Temp;  //user input temperature
    double TempF; //temperature in fahrenheit
    double TempC; //temperature in celsius


//taking user input
    std::cout << "This program converts Temperatures from Fahrenheit to Celsius and vice versa." <<  std::endl;


    do {
        std::cout << "Please enter your temperature: ";
        std::cin >> Temp; // taking user input temperature

        std::cout << "Please enter the units (F/C):";
        std::cin >> Input; // taking user input unit of temperature
        //converting temperature
        if (Input == 'F' || Input == 'f') {
            TempC = (Temp - 32) * 5 / 9; //converting temperature to celsius
            std::cout <<"A temperature of " <<Temp << " degrees Fahrenheit is equivalent to " << TempC << " degrees Celsius." <<  std::endl;

            std:: cout << " Do you want to convert again? (Y/N): ";
            std:: cin >> Rerun;

        } else if (Input == 'C' || Input == 'c') {
            TempF = (Temp * 9 / 5) + 32; //converting temperature to Fahrenheit
            std::cout <<"A temperature of " << Temp << " degrees Celsius is equivalent to " << TempF << " degrees Fahrenheit." <<  std::endl;
            std::cout << " Do you want to convert again? (Y/N): ";
            std::cin >> Rerun;
        } else {
            //Incorrect input handling
            std::cout << "Invalid input. Please enter F or C." <<  std::endl;

        }
    } while (Rerun == 'Y' || Rerun == 'y'); //rerun program if user inputs Y or y
        std::cout<< "Thank you. Goodbye." <<  std::endl;


    return 0;
}

