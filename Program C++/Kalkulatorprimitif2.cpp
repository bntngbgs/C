
#include <iostream>
using namespace std;

// Kalkulator ini menggunakan switch case

int main()
{
	int input, a, b; 
	float hasil;

	cout << " Pilihan Operasi\n 1. Penambahan\n 2. Pengurangan\n 3. Perkalian\n 4. Pembagian\n";
	cout << " Masukkan pilihan operasi yang diinginkan : "; cin >> input;
	
	switch(input){
		case 1:
			cout << " Masukkan nilai pertama : "; cin >> a;
			cout << " Masukkan nilai kedua : "; cin >> b;
			hasil = a + b;
			cout << "Hasil dari Operasi yang Dilakukan adalah : " << hasil << endl;
			break;
		case 2:
			cout << " Masukkan nilai pertama : "; cin >> a;
			cout << " Masukkan nilai kedua : "; cin >> b;
			hasil = a - b;
			cout << "Hasil dari Operasi yang Dilakukan adalah : " << hasil << endl;
			break;
		case 3:
			cout << " Masukkan nilai pertama : "; cin >> a;
			cout << " Masukkan nilai kedua : "; cin >> b;
			hasil = a * b;
			cout << "Hasil dari Operasi yang Dilakukan adalah : " << hasil << endl;
			break;
		case 4:
			cout << " Masukkan nilai pertama : "; cin >> a;
			cout << " Masukkan nilai kedua : "; cin >> b;
			hasil = (float) a / b;
			cout << "Hasil dari Operasi yang Dilakukan adalah : " << hasil << endl;
			break;
		default:
			cout << "Input yang anda masukkan salah" << endl;
	}

	return 0;
}