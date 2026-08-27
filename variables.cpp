#include <iostream>
#include <string>
#include <iomanip> // needed for set precision

using namespace std;

int main() {
    cout << "Hi. I will demonstrate how to use integers, floats and doubles." << endl;

    int a = 3;
    float b = 34.99f;
    double pi = 3.14159265358979323;

    cout << "An example of an integer is: " << a << endl;
    cout << "An example of a float is: " << b << ", which remembers around 7 decimal places." << endl;
    cout << setprecision(15) << "An example of a double is: " << pi << ", which remembers more decimal places than a float.";
    // this tells precision to print up to 15 decimal places, so cout doesn't round it for printing

    return 0;
}