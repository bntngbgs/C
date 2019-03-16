#include <iostream>
using namespace std;

int main()
{
	int input;

	cout << "Input nomor dari 1 sampai 3 : ";
	cin >> input;

	switch(input){
		case 1:
			cout << "ini angka 1" << endl;
			break;
		case 2:
			cout << "ini angka 2" << endl;
			break;
		case 3:
			cout << "ini angka 3" << endl;
			break;
		default:
			cout << "Input yang anda masukkan salah" << endl;
	}

	cout << "Selesai" << endl;
}