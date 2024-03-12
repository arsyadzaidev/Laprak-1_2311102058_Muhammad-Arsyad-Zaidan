#include <iostream>
#include <conio.h>
using namespace std;

class Kubus {
    public:
        double panjang;
        double luas;
        double tinggi;
};

int main() {
    Kubus kubus1;
    Kubus kubus2;
    double volume = 0.0;

    kubus1.tinggi = 11.0;
    kubus1.panjang = 9.0;
    kubus1.luas = 3.0;

    kubus2.tinggi = 13.0;
    kubus2.panjang = 16.0;
    kubus2.luas = 11.0;

    volume = kubus1.tinggi * kubus1.panjang * kubus1.luas;
    cout << "Volume dari kubus 1: " << volume << endl;

    volume = kubus2.tinggi * kubus2.panjang * kubus2.luas;
    cout << "Volume dari kubus 2: " << volume << endl;

    getch();
    return 0;
}
