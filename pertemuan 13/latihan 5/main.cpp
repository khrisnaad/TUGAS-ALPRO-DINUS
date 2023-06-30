#include <iostream>
using namespace std;

struct Sepeda {
    string merk;
    string type;
    int tahun;
    string harga;

    void printInfo() {
        cout << "Merk  : " << merk << endl;
        cout << "Type  : " << type << endl;
        cout << "Tahun : " << tahun << endl;
        cout << "Harga : " << harga << endl;
    }
};

int main() {
    Sepeda sepeda;
    Sepeda* ptrSepeda = &sepeda;

    ptrSepeda->merk = "Polygon";
    ptrSepeda->type = "Sepeda Gunung";
    ptrSepeda->tahun = 2013;
    ptrSepeda->harga = "2.000.000";

    ptrSepeda->printInfo();

    return 0;
}
