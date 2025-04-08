#include <iostream>
using namespace std;

// Function to calculate retail price
double calculateRetail(double wholesaleCost, double markupPercentage) {
    return wholesaleCost + (wholesaleCost * (markupPercentage / 100));
}

int main() {
    double wholesaleCost, markupPercentage;
    
    //  User input
    cout << "Enter the wholesale cost of the item: ";
    cin >> wholesaleCost;
    
    // Validate input
    if (wholesaleCost < 0) {
        cout << "Error: Wholesale cost cannot be negative." << endl;
        return 1;
    }
    
    cout << "Enter the markup percentage: ";
    cin >> markupPercentage;
    
    // Validate input
    if (markupPercentage < 0) {
        cout << "Error: Markup percentage cannot be negative." << endl;
        return 1;
    }
    
    // Calculate and display retail price
    double retailPrice = calculateRetail(wholesaleCost, markupPercentage);
    cout << "The retail price of the item is: $" << retailPrice << endl;
    
    return 0;
}