#include "unitlib.h"

double celsiusToFahrenheit(double celsius) {
    return celsius * 9.0 / 5.0 + 32.0;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double metersToFeet(double meters) {
    return meters * 3.280839895;
}

double feetToMeters(double feet) {
    return feet / 3.280839895;
}

double poundsToKilograms(double pounds) {
    return pounds * 0.45359237;
}

double kilogramsToPounds(double kilograms) {
    return kilograms / 0.45359237;
}