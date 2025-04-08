#include <iostream>
using namespace std;

// PRIME NUMBER CHECKER
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int number;
    
    // Get user input
    cout << "Enter an integer: ";
    cin >> number;
    
    // Check if the number is prime and display result
    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }
    
    return 0;
}
