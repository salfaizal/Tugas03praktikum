#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int x;
	char yt;
	
	awal:
	
	cout<<"============================\n";
	cout<<" program menentukan bilangan\n";
	cout<<"positif atau negatif atau nol\n";
	cout<<"============================\n";
	
	cout<<"masukkan nilai\t:";
	cin>>x;
	cout<<"============================\n";
	
	if (x>0)
	cout<<x<<" adalah bilangan positif\n";
	
	else if (x==0)
	cout<<x<<" adalah bilangan nol\n";
	
	else if (x<0)
	cout<<x<<" adalah bilangan negatif\n";
	
	else 
	cout<<"angka yang anda masukan tidak dapat dibaca oleh sistem\n";
	
	cout<<"============================\n";
	cout<<"Apakah anda ingin mengulang ? [Y/T] : ";
	cin>>yt;
	if(yt=='Y' || yt=='y')
	{goto awal;}
	if(yt=='T' || yt=='t')
	{goto selesai;}
	selesai:
	cout<<"Terima Kasih";	
}
