
#include <iostream>

using namespace std;

void drawHouse(int width, int height) {
    // Roof (Triangle)
    int roofHeight = width / 2;
    for (int i = 0; i < roofHeight; i++) {
        cout << string(roofHeight - i, ' ')  // Spaces for centering
             << string(2 * i + 1, '*')       // 
             << endl;
    }

    // Walls (Square)
    cout << string(width, '*') << endl;   // Top wall
    for (int i = 0; i < height - 2; i++) {
        cout << "*" << string(width - 2, ' ') << "*" << endl;
    }
    cout << string(width, '*') << endl;   // Bottom wall
}

int main() {
    int width = 10;  // Adjust width as needed 
    int height = 6;  // Adjust height as needed

    drawHouse(width, height);

    return 0;
}