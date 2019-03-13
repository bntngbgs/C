#include <iostream>
using namespace std;

void hitungluas(){
	int p, l;
	int luas;

	
	cout << "Masukkan Panjang : ";
	cin >> p;
	cout << "Masukkan Lebar : ";
	cin >> l;

	luas = p * l;

	cout << "Luasnya adalah : " << luas;
}


int main()
{			
	hitungluas();
}
