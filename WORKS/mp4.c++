#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> myQueue;
    char choice;
    int value;

    do {
        cout << "\n[A] Enqueue Data";
        cout << "\n[B] Dequeue Data";
        cout << "\n[C] Show Front";
        cout << "\n[D] Show Size";
        cout << "\n[E] Quit";
        cout << "\nEnter Choice: ";
        cin >> choice;
        
        switch (toupper(choice)) {
            case 'A':
                cout << "Enter value to enqueue: ";
                cin >> value;
                myQueue.push(value);
                cout << value << " enqueued into the queue." << endl;
                break;
            case 'B':
                if (!myQueue.empty()) {
                    cout << "Dequeued value: " << myQueue.front() << endl;
                    myQueue.pop();
                } else {
                    cout << "Queue is empty!" << endl;
                }
                break;
            case 'C':
                if (!myQueue.empty()) {
                    cout << "Front value: " << myQueue.front() << endl;
                } else {
                    cout << "Queue is empty!" << endl;
                }
                break;
            case 'D':
                cout << "Queue size: " << myQueue.size() << endl;
                break;
            case 'E':
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a valid option." << endl;
        }
    } while (toupper(choice) != 'E');
    
    return 0;
}
