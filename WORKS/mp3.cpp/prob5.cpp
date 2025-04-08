#include <iostream>
using namespace std;

const double COVERAGE = 115, HOURS = 8, LABOR_COST = 120;

int main() {
    int numRooms;
    double pricePerGallon, totalSqFt = 0, sqFt;
    
    cout << "Enter number of rooms: ";
    cin >> numRooms;
    cout << "Enter paint price per gallon: ";
    cin >> pricePerGallon;
    
    for (int i = 0; i < numRooms; i++) {
        cout << "Enter square feet for room " << i + 1 << ": ";
        cin >> sqFt;
        totalSqFt += sqFt;
    }
    
    double gallons = (totalSqFt + COVERAGE - 1) / COVERAGE;
    double laborHours = gallons * HOURS;
    double paintCost = gallons * pricePerGallon;
    double laborCost = laborHours * LABOR_COST;
    double totalCost = paintCost + laborCost;
    
    cout << "\nGallons needed: " << gallons << "\nLabor hours: " << laborHours;
    cout << "\nPaint cost: P" << paintCost << "\nLabor cost: P" << laborCost;
    cout << "\nTotal cost: P" << totalCost << endl;
    
    return 0;
}