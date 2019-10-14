#include <iostream>
#include <string>
#include <ctime>
#include <stdlib.h>


using namespace std;

int main()
{
    //variable
    string kata;
    int indeks1,indeks2,jumlah;
    char temp;

    cout << "Masukan sebuah kata : ";   //input kata
    cin>>kata;
    cout << "Jumlah huruf dari" << kata << " adalah : ";    //tampilkan jumlah huruf dari kata
    cout <<kata.size() << endl <<endl;

    jumlah=kata.size(); //ukuran kata
    srand(static_cast<unsigned int>(time(0)));  //acak
    for (int a=jumlah; a>0; a--){ //loop
        indeks1=rand() % jumlah;
        indeks2=a-1;

        temp = kata[indeks1];
        kata[indeks1] = kata[indeks2];
        kata[indeks2] = temp;

    }

    cout << "Hasil acak kata : " ;
    for (int i=0; i<jumlah; i++){

        cout << kata[i];
    }
    cout << endl << endl;
    //endloop
    return 0;
}
