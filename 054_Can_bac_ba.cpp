#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
    // You can change this value to any large number you want
    long long int number;
    cin >> number;
    long double cubeRoot;

    // Calculate cube root
    cubeRoot = pow(number, 1.0L/3.0L);

    ostringstream oss;
    oss << fixed << setprecision(11) << cubeRoot;
    string str = oss.str();
    str.pop_back();
    cout << str << endl;

    return 0;
}
