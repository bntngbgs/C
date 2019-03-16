#include <iostream>
using namespace std;

//Kalkulator menggunakan Procedure

void tambah (){
	int hasil, a, b;
	cout << " Masukkan nilai pertama : "; cin >> a;
	cout << " Masukkan nilai kedua : "; cin >> b;
	hasil = a + b;
	cout<< " Hasil dari Operasi yang Dilakukan adalah : " << hasil;
}

void kurang (){
	int hasil, a, b;
	cout << " Masukkan nilai pertama : "; cin >> a;
	cout << " Masukkan nilai kedua : "; cin >> b;
	hasil = a - b;
	cout<< " Hasil dari Operasi yang Dilakukan adalah : " << hasil;
}

void kali (){
	int hasil, a, b;
	cout << " Masukkan nilai pertama : "; cin >> a;
	cout << " Masukkan nilai kedua : "; cin >> b;
	hasil = a * b;
	cout<< " Hasil dari Operasi yang Dilakukan adalah : " << hasil;
}

void bagi (){
	float hasil, a, b;
	cout << " Masukkan nilai pertama : "; cin >> a;
	cout << " Masukkan nilai kedua : "; cin >> b;
	hasil = (float) a / b;
	cout<< " Hasil dari Operasi yang Dilakukan adalah : " << hasil;
}

int main ()
{
	int input, a, b; 

	cout << " Pilihan Operasi\n 1. Penambahan\n 2. Pengurangan\n 3. Perkalian\n 4. Pembagian\n";
	cout << " Masukkan pilihan operasi yang diinginkan : "; cin >> input;
	



	if(input == 1){
		tambah();
	}else if(input == 2){
		kurang();
	}else if(input == 3){
		kali();
	}else{
		bagi();
}
	return 0;
}