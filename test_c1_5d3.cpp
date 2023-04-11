#include <iostream>
#include <cmath>
using namespace std;

double tinh_s(int n){
	double s=2023,tu=0, d=+1; // d = dau ps dau tien
	for(int i=1;i<=n;i++)
	{
		tu+=i;	
		s+=d*tu/sqrt(i);  //su dung bien dau
		d=-d; //dao dau. - la toan tu 1 ngoi
	}
	return s;
}

int main (){
	cout<<"SV DO DUY COP. mssv: 12345678\n"
	    <<"chuong trinh tinh S (dan dau, dau ps dau: +)\n"
		<<"Hay nhap so nguyen n=";	
	int n;
	cin>>n;  //bai thi ko can check error
	
	double kq=tinh_s(n);
	
	cout<<"Ket qua S = "<<kq;
}
