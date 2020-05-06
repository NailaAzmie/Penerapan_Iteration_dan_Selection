#include <iostream>
using namespace std;


int main ()
{
	int angkaAwal, angkaAkhir;
	cout << "Masukkan angka awal : " ;
	cin >> angkaAwal;
	cout << endl;
	cout << "Masukkan angka akhir : " ;
	cin >> angkaAkhir;
	cout << endl;
	
	for ( int i = angkaAwal ; i <= angkaAkhir ; i++)
	{
		int counterPrima = 0;
		for ( int j = 1; j<= i; j++)
		{
			if (i % j == 0)
			{
				counterPrima++;
			}
		}
		if ( counterPrima == 2)
		{
			cout << i << " merupakan bilangan PRIMA" << endl;
		} else {
		cout << i << " merupakan bilangan BUKAN PRIMA" << endl;
		}
	}
	return 0;
}
