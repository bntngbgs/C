#include <iostream>
using namespace std;

// fungsi untuk menghitung luas persegi
int LuasPersegi (int p, int l){
    int luas;
    luas = p*l;
    return luas;
}

// Fungsi Utama
int main()
{
	// Deklarasi Variabel
	int a;
	int b;

	// Input dari panjang dan lebar
    cout << "masukkan panjang: ";
    cin >> a;
    cout << "masukkan lebar: ";
    cin >> b;

    // Mengeluarkan hasil dari luas persegi
    cout << "Luas Persegi: " << LuasPersegi(a,b);
    return 0;
}
