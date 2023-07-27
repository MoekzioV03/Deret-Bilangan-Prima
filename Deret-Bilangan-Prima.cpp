#include<iostream>
using namespace std;

int main(){
	
	//Deklarasi
	int bilangan;
	int i = 2;
	int j;
	int jumlah = 0;
	int k = 0;
	
	//Menanyakan dan memasukkan sebuah bilangan
	cout << "Masukkan banyaknnya bilangan prima : ";
	cin >> bilangan;
	
	//Program bilangan prima
	while (k < bilangan){
	
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				jumlah++;
			}
		}
		
		if (jumlah == 2)
		{
			//Memunculkan bilangan prima
			cout << i << " ";
			k++;
		}
		
		jumlah = 0;
		i++;
	}
	
	return 0;
}
