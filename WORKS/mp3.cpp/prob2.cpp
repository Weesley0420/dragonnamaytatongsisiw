#include <iostream>
using namespace std;


double computeAverage(double num1, double num2) {
    return (num1 + num2) / 2;
}


double sumOfSquares(double num1, double num2) {
    return (num1 * num1) + (num2 * num2);
}


double squareOfSums(double num1, double num2) {
    double sum = num1 + num2;
    return sum * sum;
}

int main() {
    double num1, num2;
    
    // User input
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    // Compute and display results
    cout << "Average: " << computeAverage(num1, num2) << endl;
    cout << "Sum of Squares: " << sumOfSquares(num1, num2) << endl;
    cout << "Square of Sums: " << squareOfSums(num1, num2) << endl;
    
    return 0;
}
