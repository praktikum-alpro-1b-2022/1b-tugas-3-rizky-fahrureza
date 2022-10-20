#include <iostream>
#include <string>
using namespace std;

int main(){
    int angka;
    char pilihan;

    do{
    string desk = "Pilih rumus yang ingin digunakan: \n"
    "1. Arus (I)\n"
    "2. Tegangan (V)\n"
    "3. Hambatan (R)\n";

    cout << desk;
    cout << "Masukan pilihan (Dalam angka): ";
    cin >> angka;

        switch (angka){
    case 1:
        float V, R, I;
        cout << "Input Tegangan (V): ";
        cin >> V;
        cout << "Input Hambatan (R): ";
        cin >> R;
        I = V/R;
        cout << "Besar arus (I) = " << I << " Ampere." << endl;
    break;
    case 2:
        cout << "Input Arus (I): ";
        cin >> I;
        cout << "Input Hambatan (R): ";
        cin >> R;
        V = I*R;
        cout << "Besar tegangan (V) = " << V << " Volt." << endl;
        break;
    case 3:
        cout << "Input Tegangan (V): ";
        cin >> V;
        cout << "Input Arus (I): ";
        cin >> I;
        R = V/I;
        cout << "Besar hambatan (R) = " << R << " Ohm." << endl;
    break;
    default:
        cout << "Pilih angka" << endl;
    break;
    }
    if(cin.fail()){
        cout << "Input harus berupa angka!!" << endl;
        break; // Untuk menghentikan looping
    }else{
        cout << endl;
        cout << "Ingin memilih rumus lain (y/t)? ";
        cin  >> pilihan;
        cout << endl;
    }


    }while(pilihan != 't');
    return 0;
}
