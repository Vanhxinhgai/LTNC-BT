#include <iostream>

using namespace std;

void size(int arr[]) {
       cout << sizeof(arr) << endl;
}

int main() {
    int arr[10] = {};
    size(arr);
    cout << sizeof(arr) << endl;
}
