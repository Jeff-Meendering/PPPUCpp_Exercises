#include "../std_lib_facilities.h"

int main() {

    int val1;
    int val2;

    cout << "Enter value 1: \n";
    cin >> val1;

    cout << "Enter value 2: \n";
    cin >> val2;

    if (val1 > val2) {
        cout << "Smallest: Value2\nLargest: Value1" << endl;
    } else {
        cout << "Smallest: Value1\nLargest: Value2" << endl;
    }

    cout << "Sum: " << val1 + val2 << endl;

    cout << "Difference: " << val1 - val2 << endl;

    cout << "Product: " << val1 * val2 << endl;

    cout << "Ratio: " << val1 / val2 << endl;

    return 0;
}