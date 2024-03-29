#include <iostream>
using namespace std;
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true; 
            }
        }
        if (!swapped) {
            break;
        }
    }
}
int main() {
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, n);

   cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
       cout << arr[i] << " ";
    }
   cout <<endl;

    return 0;
}