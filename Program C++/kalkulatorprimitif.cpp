#include <iostream>
using namespace std;

// Kalkulator ini menggunakan kondisi if-else pada 

int main ()
{
	int input, a, b; 
	float hasil;

	cout << " Pilihan Operasi\n 1. Penambahan\n 2. Pengurangan\n 3. Perkalian\n 4. Pembagian\n";
	cout << " Masukkan pilihan operasi yang diinginkan : "; cin >> input;
	cout << " Masukkan nilai pertama : "; cin >> a;
	cout << " Masukkan nilai kedua : "; cin >> b;



	if(input == 1){
		hasil = a + b;
		cout<< " Hasil dari Operasi yang Dilakukan adalah : " << hasil;

	}else if(input == 2){
		
		hasil = a - b;
		cout<< " Hasil dari Operasi yang Dilakukan adalah : " << hasil;

	}else if(input == 3){
		
		hasil = a * b;
		cout<< " Hasil dari Operasi yang Dilakukan adalah : " << hasil;

	}else{
		
		hasil = (float) a / b;
		cout<< " Hasil dari Operasi yang Dilakukan adalah : " << hasil;
	}

	return 0;
}
