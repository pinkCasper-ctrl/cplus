 
#include <iostream>
#include<stdlib.h>
#include <cmath>
using namespace std;
 
 
 
int main()
{ 
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter
	int sayi1;
	int sayi2;
	int toplam;
	cout<<"1. Sayı : ";
	cin>>sayi1;
	cout<<"2. Sayı : ";
	cin>>sayi2;
	toplam=sayi1+sayi2;
	cout<<"Toplam : "<<toplam;
}
