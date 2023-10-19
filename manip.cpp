#include <iostream>
#include <iomanip> // For setting the output to display currency
 
// Function to display the total cost of car ownership
void displayTotalCost(double totalCost) {
    std::cout << "\nTotal Cost of Ownership Over 5 Years:\n";
    std::cout << "Purchase Price: €" << std::fixed << std::setprecision(2) << totalCost << "\n";
    std::cout << "Fuel Costs: €" << std::fixed << std::setprecision(2) << totalCost << "\n";
    std::cout << "Maintenance Costs: €" << std::fixed << std::setprecision(2) << totalCost << "\n";
    std::cout << "\nTotal Cost: €" << std::fixed << std::setprecision(2) << totalCost << "\n";
}
