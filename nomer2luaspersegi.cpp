#include <iostream>
#include <math.h>
using namespace std;

int main(){
	char pilihan,yt;
	double ls,lp,p,l,a,t(2.5);
	
	awal:
	cout <<"========================\n";
	cout <<"        pilihan\n";
	cout <<"P = Luas persegi panjang\n";
	cout <<"S = Luas segitiga\n";
	cout <<"========================\n";
	cout <<"silahkan masukkan pilihan:";
	cin >>pilihan;
	
	if (pilihan=='p'|| pilihan=='P')
	{
		cout<<"masukkan panjang\t:";
		cin >>p;
		cout<<"masukkan lebar\t\t:";
		cin >>l;
		lp=p*l;
		cout<<"Luas persegi adalah\t:"<<lp<<"\n";
	}
	else if 	(pilihan=='s'|| pilihan=='S')
	{
		cout<<"masukkan alas\t\t:";
		cin >>a;
		cout<<"masukkan tinggi\t\t:";
		cin >> t;
		ls=0.5*(a*t);
		cout<<"luas segitiga adalah\t:"<<ls<<"\n";
	}
	else
	cout<<"kode yang anda masukkan salah\t"<<"\n";
	
	
	cout<<"Apakah anda ingin mengulang ? [Y/T] : ";
	cin>>yt;
	if(yt=='Y' || yt=='y')
	{goto awal;}
	if(yt=='T' || yt=='t')
	{goto selesai;}
	selesai:
	cout<<"Terima Kasih";	
	
	
}
