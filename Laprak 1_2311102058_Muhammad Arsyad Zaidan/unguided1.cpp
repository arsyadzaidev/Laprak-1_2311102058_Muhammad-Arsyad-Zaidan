#include <iostream>
using namespace std;

int Luas (int p, int l) {
    return p * l;
}

int vol (int s) {
    return s * s * s;
}

int main () {
    int p = 20;
    int l = 15;
    int s = 5;
    int luas = Luas(p, l);
    int volume = vol(s);
    
    cout <<"luas persegi panjang : " << luas << endl;
    cout <<"volume kubus : " << volume << endl;
    return 0;
}