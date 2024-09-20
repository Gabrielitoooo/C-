/**************************************************************************
 Author: Gabrieitoooo
 Course: tnd012, lab3, exercise 1
************************************************************************* */

#include <iostream>
#include <cmath>

int main() {
    
    // constant for ages and the prices of a ticket for each age-category.
    constexpr int KID_PRICE = 30;
    constexpr int ADOLECENTS_ADULTS_PRICE = KID_PRICE + 50;
    constexpr int KID_AGE = 8;
    constexpr int TEEN_AGE = 15;
    
    std::cout << "Welcome to AIK's home arena!\n-----------------------------";

    int numTickets;
    int age;
    int totalPrice = 0;

    do {
        std::cout << "\nNumber of tickets: ";
        std::cin >> numTickets;
        if (numTickets <= 0) {
            std::cout << "Invalid number of tickets!!\n";
        }
    } while (numTickets <= 0); // Repeats if the number of tickets is negative

    // Step 2: Request the age of each ticket owner
    for (int i = 0; i < numTickets; i++) {
        std::cout << "Enter age for person " << i + 1 << ": ";
        std::cin >> age;

        // Step 3: Calculate the price based on age
        if (age <= KID_AGE) {
            totalPrice += 0; // Free ticket
        } else if (age <= TEEN_AGE) {
            totalPrice += KID_PRICE; // Ticket price is 30
        } else {
            totalPrice += ADOLECENTS_ADULTS_PRICE; // Ticket price is 50
        }
    }

    // Step 4: Display the total price to be paid
    std::cout << "Total price: " << totalPrice << "\n";

    return 0;
}
