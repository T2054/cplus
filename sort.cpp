#include <iostream>

using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp = 0;
    for (int n = 0; n < size; n++) {
        for (int i = size; i > 0; i--) {
            if (arr[i] > arr[i - 1]) {
                temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }

        }
    }
    cout << "\n排序后的数组：";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}
