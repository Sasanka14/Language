// Question 5: Search for an element in an unsorted array using Linear Search algorithm.
#include <iostream>
using namespace std;

void linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout << "Element found at index: " << i << endl;
            return;
        }
    }
    cout << "Element not found in the array." << endl;
}

int main() {
    int arr[] = {5, 3, 8, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 1; // Element to search for

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    linearSearch(arr, n, x);
    return 0;
}

