/**************************************************************************
 Author: Gabrielitoooo
 Course: tnd012, lab3, exercise 2
************************************************************************* */

#include <iostream>
#include <iomanip>
int main() {
    
	int first_price;
	do {

		std::cout << "Enter first price: "; //user input variable
		std::cin >> first_price; //initialize variable
		if (first_price < 0) { //if-statement, if variable is a negative number then it will continue to run the while loop
			std::cout << "Error, invalid input. Try again!\n";
		}
	} while (first_price < 0); //run the program as long as the int variable is a negative number


	//loop for every user input to make sure that they enter a valid variable
	int last_price;
	do {
		std::cout << "\nEnter last price: ";
		std::cin >> last_price;
		if (last_price < 0 || first_price > last_price) {
			std::cout << "Error, invalid input. Try again!\n";
		}
	} while (last_price < 0 || first_price > last_price); 

	int price_step;
	do {
		std::cout << "\nEnter price step: ";
		std::cin >> price_step;
		if (price_step < 0) {
			std::cout << "Error, invalid input. Try again!\n";
		}
	} while (price_step < 0);
    
    int tax_percentage;
    do {
        std::cout << "\nEnter tax: ";
        std::cin >> tax_percentage;
        if (tax_percentage <= 0) {
            std::cout << "Error, invalid input. Try again!\n";
        }
    } while (tax_percentage <= 0);
        
	//print table header
    std::cout << std::setw(15) << "\nPrice tax free" << std::setw(15) << "Tax"<< std::setw(25) << "Price with tax"<< std::endl;
	std::cout << std::setfill('=') << std::setw(55) << "" << std::endl;
    
	//loop through price step until first price becomes last price and prints price table details
    for (double price = first_price; price <= last_price; price += price_step) {
        double tax = (price * tax_percentage) / 100;
        double priceWithTax = price + tax;
      
        std::cout << std::fixed << std::setprecision(2);
        std::cout << std::setfill(' ') << std::setw(15) << price << std::setw(15) << tax << std::setw(25) << priceWithTax << "\n";
    }
    return 0;
}
