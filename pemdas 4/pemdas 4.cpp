#include <iostream>
using namespace std;
int nTelor, nMie, nAir, jumlah;
int hTelor = 2000, hMie = 2800, hAir = 3000;
string nama;

void input()
{
    cout << "Masukan Nama =";
    cin >> nama;
    cout << "Jumlah telor  =";
    cin >> nTelor;
    cout << "Masukan jumlah Mie =";
    cin >> nMie;
    cout << "Masukan jumlah Air Mineral";
    cin >> nAir;
}
int hitungharga() {
    return (nTelor * hTelor) + (nMie * hMie) + (nAir * hAir);
}

void display() {
    cout << "Nama = " << nama << endl;
    cout << "Jumlah Telor = " << nTelor << endl;
    cout << "Jumlah Mie =" << nMie << endl;
    cout << "Jumlah Air =" << nAir << endl;
    cout << "Total Harga RP. " << hitungharga << endl;
}

int main() {

    input();
    display();

    return 0;
}