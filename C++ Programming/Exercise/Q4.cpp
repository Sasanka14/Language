// Question 4: Search for an element in a sorted array using Binary Search algorithm.
#include <iostream>
using namespace std;

void binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2; // Calculate the middle index

        // Check if the element is present at the middle
        if (arr[mid] == x) {
            cout << "Element found at index: " << mid << endl;
            return;
        }

        // If element is smaller than mid, search in the left subarray
        if (arr[mid] > x) {
            binarySearch(arr, l, mid - 1, x);
        }
        // If element is larger than mid, search in the right subarray
        else {
            binarySearch(arr, mid + 1, r, x);
        }
    } else {
        cout << "Element not found in the array." << endl;
    }
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10; // Element to search for

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    binarySearch(arr, 0, n - 1, x);
    return 0;
}