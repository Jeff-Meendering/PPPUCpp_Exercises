#include "../std_lib_facilities.h"

int main() {
    double miles;
    double km;

    cout << "Enter Miles: \n";
    cin >> miles;

    km = miles * 1609;

    cout << miles << " miles";

    return 0;
}