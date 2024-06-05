#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int DATA[10]={ 9, 4, 1, 4, 7, 10, 5, 4, 12, 4};

void sequentialsearch(int angka){
    int temp=0;
    for (int i = 0; i < 10; i++)
    {
        if (DATA[i] == angka)
        {
            temp=temp+1;
        }
    }

cout<<" angka "<<angka<<" berjumlah "<< temp<<" dalam array data";
}

int main(){
int angka=4;
cout<<"Program Sequential Search Sederhana"<<endl;
cout<<"Data: {9, 4, 1, 4, 7, 10, 5, 4, 12, 4} "<<endl;
cout<<"Mencari Angka 4 di dalam data"<<endl;
sequentialsearch(angka);

}