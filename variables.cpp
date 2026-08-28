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

    cout << "Now I will demonstrate boolean and char variables.";

    bool valid = true;
    bool not_valid = false; 
    // printing these gives either 1 (true) or false (0)

    char letter = 'A';

    cout << "If a boolean variable is true it prints: " << valid << endl;
    cout << "If a boolean variable is false it prints: " << not_valid << endl;

    cout << "A character example is: " << letter << endl;

    return 0;
}