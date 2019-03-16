#include <iostream>
using namespace std;

//Kalkulator menggunakan Fungsi

int tambah (int x, int y){
	int hasil;
	hasil = x + y;
	return hasil;
}

int kurang (int x, int y){
	int hasil;
	hasil = x - y;
	return hasil;
}

int kali (int x, int y){
	int hasil;
	hasil = x * y;
	return hasil;
}

float bagi (int x, int y){
	float hasil;
	hasil =  (float ) x / y;
	return hasil;
}

int main ()
{
	int input, a, b; 

	cout << " Pilihan Operasi\n 1. Penambahan\n 2. Pengurangan\n 3. Perkalian\n 4. Pembagian\n";
	cout << " Masukkan pilihan operasi yang diinginkan : "; cin >> input;
	cout << " Masukkan nilai pertama : "; cin >> a;
	cout << " Masukkan nilai kedua : "; cin >> b;



	if(input == 1){

		cout<< " Hasil dari Operasi yang Dilakukan adalah : " << tambah(a,b);

	}else if(input == 2){
		
		cout<< " Hasil dari Operasi yang Dilakukan adalah : " << kurang(a,b);

	}else if(input == 3){
		
		cout<< " Hasil dari Operasi yang Dilakukan adalah : " << kali(a,b);

	}else{
		
		cout<< " Hasil dari Operasi yang Dilakukan adalah : " << bagi(a,b);
}
	return 0;
}