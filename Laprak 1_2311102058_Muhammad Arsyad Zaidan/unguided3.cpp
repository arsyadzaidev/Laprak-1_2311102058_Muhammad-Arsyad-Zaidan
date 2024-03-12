#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, int> umur;

    umur["Andi"] = 25;
    umur["Budi"] = 30;
    umur["Citra"] = 28;
    umur["Dewi"] = 35;

    cout << "Umur Andi: " << umur["Andi"] << " tahun" << endl;

    cout << "Semua umur:" << endl;
    for (auto it = umur.begin(); it != umur.end(); ++it) {
        cout << it->first << ": " << it->second << " tahun" << endl;
    }

    if (umur.find("Ella") != umur.end()) {
        cout << "Umur Ella: " << umur["Ella"] << " tahun" << endl;
    } else {
        cout << "Umur Ella tidak ditemukan dalam map." << endl;
    }

    return 0;
}
