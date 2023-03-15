#include <iostream>

using namespace std;

//FUNGSI PERTAMBAHAN
int pertambahan(int x, int y){
    return x+y;
}
//PROSEDUR PERTAMBAHAN
void pertambahan1(int x, int y){
    cout << x-y;
}

//FUNGSI PENGURANGAN
int pengurangan(int x, int y){
    return x-y;
}
//PROSEDUR PENGURANGAN
void pengurangan1(int x, int y){
    cout << x-y;
}

//FUNGSI PERKALIAN
int perkalian(int x, int y){
    return x*y;
}
//PROSEDUR PERKALIAN
void perkalian1(int x, int y){
    cout << x*y;
}

//FUNGSI PEMBAGIAN
int pembagian(int x, int y){
    return x/y;
}
//PROSEDUR PEMBAGIAN
void pembagian1(int x, int y){
    cout << x/y;
}

//FUNGSI ARRAY
//fungsi jmlh array
void jmlarray( ){
    int h;
    int a;
    cout<<"jumlah array dan rata rata"<<endl;
    cout<<"==========================="<<endl;
    cout<<"masukan jumlah nilai : ";cin>>a;

    int n [a];
    for( int i = 0; i < a ; i++){
       cout<<"masukan nilai ke"<<i+1<<" : " ; cin >> n[i];
    }
    float total = 0;
    for(int i = 0; i < a; i++){
        total = total+n[i];
    }
    float r = total / a ;
    cout<<"hasil jumlah     : "<<total<<endl;
    cout<<"hasil rata rata  : "<<r;
}

int main()
{
    cout << "PROGRAM PROSEDUR DAN FUNGSI" << endl;

     int a,b;
    //output untuk fungsi & prosedur pertambahan
    cout << "masukan nilai 1: " ;cin>>a;
    cout << "masukan nilai 2: " ;cin>>b;
    cout<<"|------------------------------|"<<endl;
    cout<<"|            HASIL             |"<<endl;
    cout<<"|------------------------------|"<<endl;
    cout<<"hasil dari fungsi tambah : " << pertambahan(a,b);
    cout<<endl;
    cout<<endl;

    //output untuk fungsi & prosedur pengurangan
    cout<<"hasil dari fungsi kurang : " << pengurangan(a,b);
    cout<<endl;
    cout<<endl;

    //output untuk fungsi & prosedur perkalian
    cout<<"hasil dari fungsi kali   : " << perkalian(a,b);
    cout<<"\n"<< endl;
    cout<<"------------------------------"<<endl;

    jmlarray();
    return 0;
}
