#include <iostream>

using namespace std;
struct sepeda {
string merk = "polygon";
string type = "sepeda gunung";
int tahun = 2013;
string harga = "2.000.000";

};
int main()
{
    cout << "Latihan 2" << endl;
    sepeda sepedaX;
    cout <<"Merk sepeda  :"<<sepedaX.merk << endl;
    cout <<"Tipe sepeda  :"<<sepedaX.type << endl;
    cout <<"Tahun sepeda :"<<sepedaX.tahun << endl;
    cout <<"Harga sepeda :"<< sepedaX.harga<< endl;

    return 0;
}
