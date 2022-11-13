#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int sisiAlas = 8, sisiTinggi = 10;

    // Rumus sm = a^2 + t^2
    float sisiMiring = sqrt(pow(sisiTinggi, 2) + pow(sisiAlas, 2));
    cout << "Panjang sisi miring pythagoras jika alas = 8 cm dan tinggi = 10 cm adalah " <<sisiMiring << " cm" << endl;

    return 0;
}
