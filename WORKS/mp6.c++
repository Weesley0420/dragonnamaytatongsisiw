#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// Linear Search
int linearSearch(const vector<int>& arr, int key, int& comparisons, int& ctr) {
    comparisons = 0;
    ctr = 0;
    for (size_t i = 0; i < arr.size(); i++) {
        comparisons++;
        ctr++;
        if (arr[i] == key) {
            return i; // Found, return index
        }
    }
    return -1; // Not found
}

// Jump Search (Requires sorted array)
int jumpSearch(const vector<int>& arr, int key, int& comparisons, int& ctr) {
    int n = arr.size();
    int step = sqrt(n);
    int prev = 0;
    comparisons = 0;
    ctr = 0;

    // Finding the block where the element is present
    while (arr[min(step, n) - 1] < key) {
        comparisons++;
        ctr++;
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1; // Not found
    }

    // Linear search within the block
    for (int i = prev; i < min(step, n); i++) {
        comparisons++;
        ctr++;
        if (arr[i] == key)
            return i;
    }

    return -1; // Not found
}

// Binary Search (Requires sorted array)
int binarySearch(const vector<int>& arr, int key, int& comparisons, int& ctr) {
    int left = 0, right = arr.size() - 1;
    comparisons = 0;
    ctr = 0;

    while (left <= right) {
        comparisons++;
        ctr++;
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // Not found
}

// Interpolation Search (Requires sorted array)
int interpolationSearch(const vector<int>& arr, int key, int& comparisons, int& ctr) {
    int left = 0, right = arr.size() - 1;
    comparisons = 0;
    ctr = 0;

    while (left <= right && key >= arr[left] && key <= arr[right]) {
        comparisons++;
        ctr++;

        if (left == right) {
            if (arr[left] == key)
                return left;
            return -1;
        }

        int pos = left + ((double)(right - left) / (arr[right] - arr[left]) * (key - arr[left]));

        if (pos < left || pos > right)
            return -1; // Out of bounds

        if (arr[pos] == key)
            return pos;
        else if (arr[pos] < key)
            left = pos + 1;
        else
            right = pos - 1;
    }
    return -1; // Not found
}

int main() {
    int N, key, comparisons, ctr;

    cout << "Enter the number of elements: ";
    cin >> N;

    vector<int> arr(N);
    cout << "Enter " << N << " numbers: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << "Enter the search value: ";
    cin >> key;

    // Linear Search
    int linIndex = linearSearch(arr, key, comparisons, ctr);
    cout << "Linear Search: ";
    if (linIndex != -1)
        cout << "Found at index " << linIndex << ", Comparisons: " << comparisons << ", Attempts: " << ctr << endl;
    else
        cout << "Not found, Comparisons: " << comparisons << ", Attempts: " << ctr << endl;

    // Sorting array for Jump, Binary & Interpolation Search
    sort(arr.begin(), arr.end());

    // Jump Search
    int jumpIndex = jumpSearch(arr, key, comparisons, ctr);
    cout << "Jump Search: ";
    if (jumpIndex != -1)
        cout << "Found at index " << jumpIndex << ", Comparisons: " << comparisons << ", Attempts: " << ctr << endl;
    else
        cout << "Not found, Comparisons: " << comparisons << ", Attempts: " << ctr << endl;

    // Binary Search
    int binIndex = binarySearch(arr, key, comparisons, ctr);
    cout << "Binary Search: ";
    if (binIndex != -1)
        cout << "Found at index " << binIndex << ", Comparisons: " << comparisons << ", Attempts: " << ctr << endl;
    else
        cout << "Not found, Comparisons: " << comparisons << ", Attempts: " << ctr << endl;

    // Interpolation Search
    int intIndex = interpolationSearch(arr, key, comparisons, ctr);
    cout << "Interpolation Search: ";
    if (intIndex != -1)
        cout << "Found at index " << intIndex << ", Comparisons: " << comparisons << ", Attempts: " << ctr << endl;
    else
        cout << "Not found, Comparisons: " << comparisons << ", Attempts: " << ctr << endl;

    return 0;
}

