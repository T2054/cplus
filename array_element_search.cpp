#include <iostream>
using namespace std;

int main() {
    const int arraySize = 10;
    int arr[arraySize] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int target;
    cout << "请输入要查找的元素： ";
    cin >> target;

    bool found = false;

    for (int i = 0; i < arraySize; i++) {
        if (arr[i] == target) {
            cout << "元素 " << target << " 在数组中第 " << i << " 处找到。" << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "元素 " << target << " 未在数组中找到。" << endl;
    }

    return 0;
}
