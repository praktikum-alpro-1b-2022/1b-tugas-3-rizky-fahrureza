#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    float y, b = 25, x = 15, c = 20;
    string desk = "Rumus penyelesaian Y = bx^2 + 0,5x - c\n"
    "Jika b = 25, x = 15, c = 20"
    "\nadalah ";

    // Rumus penyelesaian
    y = b * pow(x, 2) + 0.5 * x - c;

    cout << desk << y << endl;
    return 0;
}
