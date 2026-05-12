#include<iostream>
using namespace std;
void insertionsort(int nums[], int n) {
    for(int i = 1; i < n; i++) {
        int key = nums[i];
        int j = i - 1;

        // Move elements of nums[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while(j >= 0 && nums[j] > key) {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = key;
    }
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertionsort(arr, n);

    cout << "Sorted array:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}