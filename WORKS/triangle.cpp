
#include <iostream>

using namespace std;

void drawBuilding(int width, int height) {
    // Roof
    cout << string(width, '*') << endl;

    // Walls
    for (int i = 0; i < height - 2; i++) {
        cout << "*" << string(width - 2, ' ') << "*" << endl;
    }

    // Base
    cout << string(width, '*') << endl;
}

int main() {
    int width = 10;  // Adjust width as needed
    int height = 6;  // Adjust height as needed

    drawBuilding(width, height);

    return 0;
}