#include <iostream>
using namespace std;
int main()
{
    string kalimat;
    int jumlah = 0;
    
    cout << "Jumlah Huruf Vokal" << endl;
    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);
    
    for (int i = 0; i < kalimat.length(); i++) {
        char c = tolower(kalimat[i]);
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') jumlah++;
    }

    cout << "\nKalimat yang dimasukkan memiliki " << jumlah << " huruf vokal.";
    return 0;
}