/*
 * Title: Problem_3.cpp
 * Date: January 8th, 2023
 * Author: Jack Bennett
 * Version: 1.0
 */

/* Documentation
 *
 * Program Purpose: Create table of temperature  conversions from Fahrenheit to Celsius and vice versa,
 * starting from -40 to 455.
 *
 *
 * Classes: TemperatureConverter - contains two  static methods CelsiusToFahrenheit( Takes in double Celsius converts to Fahrenheit  and returns double  temp).
 *          and FahrenheitToCelsius( Takes in  double Fahrenheit converts to Celsius and returns double temp).
 *
 * Notes: N/A
 *
 * Variables:
 * Celsius: double -  takes in for loops value (double i) and used to convert to Fahrenheit
 *
 * Fahrenheit: double  - takes in for loops value (double i) and used to convert to Fahrenheit .
 *
 * i : double - used as counter in for loop to increment by 5 for every iteration of loop / feed in temp to be converted.
 *
 *
 */


/*
 * Test Plan:
 *
 * Normal Case:
 *   Table matches what is presented in the problem.
 *   Successfully calculate conversions.
 *
 * Bad Case :
 *  Does not produce correct output.
 *  Does not successfully calculate conversions.
 *
 */


#include <iostream>

//creating class for temp converter
class TemperatureConverter {
public:
    static double CelsiusToFahrenheit(double celsius) {
        double temp = (celsius * 9 / 5) + 32;
        return temp;
    }

    static double FahrenheitToCelsius(double fahrenheit) {
        double temp = (fahrenheit - 32) * 5 / 9;
        return temp;
    }
};

int main(){


    // cout for the title
    std::cout<< "\t" <<"\t" << "Temperature" << "\t"<<"\t" <<"\t"  << " |" << "\t"<<"\t" <<"\t"<< "Temperature"
    << "\n" << "\t" "\t"  << " (Degrees)" << "\t" << "\t" << "\t"  << " |" << "\t" <<  "\t"  << "\t" << " (Degrees)" <<  std::endl;

    // cout for F to C (column)s and C to F (column)s
    std::cout <<"\t" << "  F" << "\t" << "\t" <<"\t "<< "  C" << "\t" << "\t" <<" |" <<"\t" <<"\t" << " C" << "\t" << "\t" <<"\t "<< "  F" << std::endl;



    // for loop to print out the table
    for ( double i  = -40 ; i <= 455; i += 5 ){
        std::printf("%10.3f \t %10.3f \t | %10.3f \t %10.3f\n", i, TemperatureConverter::FahrenheitToCelsius(i), i,TemperatureConverter::CelsiusToFahrenheit(i));
    }

return 0;
}
