//
// Created by Jack Bennett on 2023-02-01.
//
#include <iostream>
using namespace std;

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
    // coverting F to C

    // cout for Temp and degree stuff
    cout<< "\t" <<"\t" << "Temperature" << "\t"<<"\t" <<"\t"  << " |" << "\t"<<"\t" <<"\t"<< "Temperature"
    << "\n" << "\t" "\t"  << " (Degrees)" << "\t" << "\t" << "\t"  << " |" << "\t" <<  "\t"  << "\t" << " (Degrees)" <<  endl;

    // cout for F to C
    cout <<"\t" << "  F" << "\t" << "\t" <<"\t "<< "  C" << "\t" << "\t" <<" |" <<"\t" <<"\t" << " C" << "\t" << "\t" <<"\t "<< "  F" << endl;




    for ( double i  = -40 ; i <= 455; i += 5 ){
        std::printf("%10.3f \t %10.3f \t | %10.3f \t %10.3f\n", i, TemperatureConverter::FahrenheitToCelsius(i), i,TemperatureConverter::CelsiusToFahrenheit(i));

    }









};


