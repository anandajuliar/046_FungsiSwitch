#include <iostream>
using namespace std;

int bilA, int bilB;

void input()
{
    cout << "Masukkan Bilangan Pertama = ";
    cin >> bilA;
    cout << "Maukaan Bilanga Kedua = ";
    cin >> bilB;
}
int bilA, int bilB;

int penjumlahan(int a, int b)
{
    return a + b;
}

int pengurangan(int a, int b)
{
    return a - b;
}

int perkalian(int a, int b)
{
    return a * b;
}

float pembagian(float a, float b)
{
    return a / b;
}

int main()
{
    int pilihan;
    do
    {
        cout << "Kalkulator Sederhana" << endl;
        cout << "====================" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Keluar" << endl;
        cout << "====================" << endl;
        cout << "Masukan menu pilihan : ";
        cin >> pilihan;

        switch (pilihan)
        {

        }
    }
}