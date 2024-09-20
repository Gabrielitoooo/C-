/**************************************************************************
 Author: Gabrielitoooo
 Course: tnd012, lab3, exercise 3
************************************************************************* */

/*
 * Tax: 25
 * Products prices:
 * 10 12.5 13 8.5 1120 155 200 220 44 150 112 75 109 80 2300 157 66 47 449 154 STOP
 */



#include <iostream>
#include <iomanip>
#include <vector>

int main() {

    int tax_percentage;
    do {
        std::cout << "Enter tax: ";
        std::cin >> tax_percentage;
        if (tax_percentage <= 0) {
            std::cout << "Error, invalid input. Try again!\n";
        }
    } while (tax_percentage <= 0);

    //creates an empty vector to store elements
    std::vector <double> V;
    double price;
    
    //lets user input elements in vector and use a non-number to stop
    std::cout << "Enter products price (enter a non-number to stop): ";
    while (std::cin >> price) {
        V.push_back(price);
    }
    
    //print table header
        std::cout << std::setw(15) << "\nPrice tax free" << std::setw(15) << "Tax" << std::setw(25) << "Price with tax" << std::endl;
        std::cout << std::setfill('=') << std::setw(55) << "" << std::endl;

    //loop through vector and print price table details
    for (double price : V) {
        double tax = (price * tax_percentage) / 100;
        double priceWithTax = price + tax;

        std::cout << std::fixed << std::setprecision(2);
        std::cout << std::setfill(' ') << std::setw(15) << price << std::setw(15) << tax << std::setw(25) << priceWithTax << "\n";
    }
    return 0;
}