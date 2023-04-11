#include <iostream>
#include <cmath>
using namespace std;

double tinh_s(int n){
	double s=2023;
	for(int i=1;i<=n;i++)
		s+=1.0/sqrt(i);
	return s;
}

int main (){
	cout<<"SV DO DUY COP. mssv: 12345678\n"
	    <<"chuong trinh tinh S (de 120)\n"
		<<"Hay nhap so nguyen n=";	
	int n;
	cin>>n;
	
	double kq=tinh_s(n);
	
	cout<<"Ket qua S = "<<kq;
}
