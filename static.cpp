#include <iostream>
using namespace std;

class mahasiswa
{
    public:
    static int nim;
    string nama;

    void setID();

    void printAll();

    mahasiswa(string pnama)
    {
        nama=pnama;
        setID();
    }
};

int mahasiswa::nim = 209;

void mahasiswa::setID()
{
    id = ++nim;
}

void mahasiswa::printAll()
{
    cout << "ID     = " << id << endl;
    cout << "Nama   = " << nama << endl;
    cout << endl;
}