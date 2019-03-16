#include <iostream>
using namespace std;

// Kalkulator menggunakan kondisi if-else

int main ()
{
	int input, a, b; 
	float hasil;

	cout << " Pilihan Operasi\n 1. Penambahan\n 2. Pengurangan\n 3. Perkalian\n 4. Pembagian\n";
	cout << " Masukkan pilihan operasi yang diinginkan : "; cin >> input;

	if(input == 1){
		cout << " Masukkan nilai pertama : "; cin >> a;
		cout << " Masukkan nilai kedua : "; cin >> b;
		hasil = a + b;
		cout<< " Hasil dari Operasi yang Dilakukan adalah : " << hasil;
	}else if(input == 2){
		cout << " Masukkan nilai pertama : "; cin >> a;
		cout << " Masukkan nilai kedua : "; cin >> b;
		hasil = a - b;
		cout<< " Hasil dari Operasi yang Dilakukan adalah : " << hasil;
	}else if(input == 3){
		cout << " Masukkan nilai pertama : "; cin >> a;
		cout << " Masukkan nilai kedua : "; cin >> b;
		hasil = a * b;
		cout<< " Hasil dari Operasi yang Dilakukan adalah : " << hasil;
	}else if(input == 4){
		cout << " Masukkan nilai pertama : "; cin >> a;
		cout << " Masukkan nilai kedua : "; cin >> b;
		hasil = (float) a / b;
		cout<< " Hasil dari Operasi yang Dilakukan adalah : " << hasil;
	} else {
		cout << "Input yang anda masukkan salah!!!";
	}

	return 0;
}