#include <iostream>
using namespace std;

void showMenu() {
    cout << "\n1. Convert to kilometers";
    cout << "\n2. Convert to inches";
    cout << "\n3. Convert to feet";
    cout << "\n4. Quit the program";
    cout << "\n\nEnter your choice: ";
}

void showKilometers(double meters) {
    cout << meters << " meters is " << meters * 0.001 << " kilometers.\n";
}

void showInches(double meters) {
    cout << meters << " meters is " << meters * 39.37 << " inches.\n";
}

void showFeet(double meters) {
    cout << meters << " meters is " << meters * 3.281 << " feet.\n";
}

int main() {
    double meters;
    int choice;
    
    cout << "Enter a distance in meters: ";
    cin >> meters;
    
    if (meters < 0) {
        cout << "Error: Distance cannot be negative.\n";
        return 1;
    }
    
    do {
        showMenu();
        cin >> choice;
        
        switch (choice) {
            case 1: showKilometers(meters); break;
            case 2: showInches(meters); break;
            case 3: showFeet(meters); break;
            case 4: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
    
    return 0;
}
