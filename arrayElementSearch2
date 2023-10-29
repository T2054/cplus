#include <iostream>
using namespace std;

int main() {
    const int arraySize = 3;
    int arr[arraySize][arraySize] = {1, 2, 3, 4, 5, 6, 7, 8, 9, };

    int target;
    cout << "请输入要查找的元素： ";
    cin >> target;

    bool found = false;
    for (int n = 0; n < arraySize; n++) {
    for (int i = 0; i < arraySize; i++) {
        if (arr[i][n] == target) {
            cout << "元素 " << target << " 在二维数组中第 " << i+1<<"行" << " 在数组中第 " << n+1<<"列"<< " 处找到。" << endl;
            found = true;
            break;
        }
    }
    }
    if (!found) {
        cout << "元素 " << target << " 未在数组中找到。" << endl;
    }
