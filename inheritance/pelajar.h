#ifndef PELAJAR_H
#define PELAJAR_H

#include "orang.h"
#include <iostream>
#include <string>
using namespace std;

class pelajar : public orang
{
public:
    string sekolah;

    pelajar(string pNama, string pSekolah)
        : orang(pNama), sekolah(pSekolah)
    {
        cout << "pelajar dibuat\n";
    }

    ~pelajar()
    {
        cout << "pelajar dihapus\n";
    }

    string perkenalan()
    {
        return "Hallo, nama saya " + nama + " dari sekolah " + sekolah + "\n";
    }
};

#endif