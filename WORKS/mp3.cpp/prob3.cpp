#include <iostream>
using namespace std;

const double PI = 3.14159;

// Function to compute the perimeter of a square
double perimeterSquare(double side) {
    return 4 * side;
}

// Function to compute the perimeter of a rectangle
double perimeterRectangle(double length, double width) {
    return 2 * (length + width);
}

// Function to compute the perimeter (circumference) of a circle
double perimeterCircle(double radius) {
    return 2 * PI * radius;
}

int main() {
    double side, length, width, radius;
    
    // Get user input and compute perimeters
    cout << "Enter the side length of the square: ";
    cin >> side;
    cout << "Perimeter of the square: " << perimeterSquare(side) << endl;
    
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Perimeter of the rectangle: " << perimeterRectangle(length, width) << endl;
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Perimeter (circumference) of the circle: " << perimeterCircle(radius) << endl;
    
    return 0;
}