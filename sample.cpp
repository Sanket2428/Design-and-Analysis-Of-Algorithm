#include <iostream>
using namespace std;

int firstzero(int arr[], int n) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == 1) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }   
    return n - low;
}

int main() {
    int arr[] = {1, 1, 1, 0, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int count = firstzero(arr, n);
    cout << "Count of zeros: " << count << endl;
    return 0;
}
