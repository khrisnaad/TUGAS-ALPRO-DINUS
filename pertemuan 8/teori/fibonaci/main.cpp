/*Muhammad Rajendra Khrisna Aditama
A11.2022.14303 4207*/


#include <iostream>

using namespace std;

int fpenjumlahan(int a, int b);
int fpengurangan(int b, int c);
int fperkalian(int c,int n);
float fpembagian(float d, int e);
int fpangkat(int e, int f);
int fibonaci(int e);
int faktorial(int f);



int fpenjumlahan(int a, int b){
    if (a > 0)
        return 1 + fpenjumlahan(a-1, b);
    else if (b > 0)
        return 1 + fpenjumlahan(a, b-1);
    else
        return 0;
}

int fpengurangan(int b, int c){
    if (b > 0)
        return fpengurangan(b-1, c) +1;
    else if (c > 0)
        return fpengurangan(b, c-1) -1;
    else
        return 0;
}

int fperkalian(int c,int n){
    if (n == 0)
        return 0;
	else if (n > 0)
        return c + fperkalian(c, n - 1);
	else
        return (-c) + fperkalian(c, n+1);
}

float fpembagian(float d, int e){
    if( d < e )
        return d / e;
    else
        return 1 + fpembagian(d-e, e);
}

int fpangkat(int e, int f) {
    if(f == 0)
      return 1;
    else
      return e * fpangkat(e,f-1);

}

int fibonaci(int e){
    if( e == 1 )
        return 1;
    else if (e==0)
        return 0;
    else
        return fibonaci(e-1) + fibonaci(e-2);
}

int faktorial(int f){
    if( f==0 )
        return 1;
    else
        return f * faktorial(f-1);
}


int main()
{
    int n,m;
    cout << "                       Tugas Program Fungsi Rekursif           " << endl;
    cout << endl;
    cout << "Masukkan Angka Pertama \t: ";cin >> n;
    cout << "Masukkan Angka Kedua   \t: ";cin >> m;
    cout << "<--------------------------------------------------------------------------->" << endl;
    cout << "Penjumlahan \t :"<< n << " + " << m << " \t\t= " << fpenjumlahan(n, m) << endl;
    cout << "Pengurangan \t :"<< n << " - " << m << " \t\t= " << fpengurangan(n, m) << endl;
    cout << "Perkalian \t -"<< n << " * " << m << " \t\t= " << fperkalian(n,m) << endl;
    cout << "Pembagian \t :"<< n << " / " << m << " \t\t= " << fpembagian(n,m) << endl;
    cout << "Pangkat \t :"<< n << " ^ " << m << " \t\t= " << fpangkat(n,m) << endl;
    cout << "Fibonaci index ke-" << n << " \t\t \t= " << fibonaci(n) << endl;
    for(int i=0; i<=n ;i++){
        cout << fibonaci(i) << " ";
    }
    cout << endl;
    cout << "Faktorial !" << n << " \t\t\t\t= " << faktorial(n) << endl;
    cout << "<--------------------------------------------------------------------------->" << endl;
    return 0;
}

