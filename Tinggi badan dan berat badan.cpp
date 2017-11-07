#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double berat, tinggi  (2.5);
	
	cout<<"masukkan tinggi badan(cm)\t:";
	cin>>tinggi;
	cout<<"masukkan berat badan(kg)\t:";
	cin>>berat;
	
	
	if (berat<tinggi/2.5)
	cout<<"anda terlalu kurus (underweight)";
		
	else if (tinggi/2.3<berat)
	cout<<"anda terlalu berat (overweight)";	
		
	else if (tinggi/2.5<=berat<=tinggi/2.3)
	cout<<"berat dan tinggi badan anda normal";
	else
	cout<<"program error, silahkan coba lagi";
}
