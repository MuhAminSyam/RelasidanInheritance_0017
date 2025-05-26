#include <iostream>
#include <string>
using namespace std;

#include "jantung.h"
#include "manusia.h"

int main()
{
    manusia *varManusia = new manusia("Mario");
    delete varManusia; // Jangan lupa hapus untuk panggil destructor

    return 0;
}