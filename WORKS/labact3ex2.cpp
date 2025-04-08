#include<iostream>  // Includes the input-output stream library to use cout and endl

using namespace std; // Allows using standard namespace, so we don't need to prefix std:: before cout

double divide (int a = 10, double b = 2) { // Function definition with default parameters

    return a / b; // Returns the result of a divided by b
}
int main () { // Main function, the entry point of the program

    cout << divide() << endl; // Calls divide() with no arguments, using default values (10,2) → Output: 5

    cout << divide(14) << endl; // Calls divide(14), using default b=2 → Output: 14/2 = 7
    
    cout << divide(10,3) << endl; // Calls divide(10,3), overriding both defaults → Output: 10/3 = 3.33333
}