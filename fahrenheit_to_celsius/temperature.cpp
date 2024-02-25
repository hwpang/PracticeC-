#include <iostream>

int main() {
    double fahrenheit;
    double celsius;

    std::cout << "Enter the temperature in Fahrenheit: ";
    std::cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;

    std::cout << "The temperature in Celsius is " << celsius << std::endl;

}