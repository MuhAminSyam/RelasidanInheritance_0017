#ifndef ORANG_H
#define ORANG_H

#include <iostream>
#include <string>
using namespace std;

class orang
{
public:
    string nama;

    orang(string pNama) : nama(pNama)
    {
        cout << "orang dibuat\n";
    }

    ~orang()
    {
        cout << "orang dihapus\n";
    }

    int jumlah(int a, int b)
    {
        return a + b;
    }
};

#endif