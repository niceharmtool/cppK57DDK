#include <iostream>
#include <cmath>
using namespace std;

double tinh_s(double x, int n){
	double s=0;
	for(int i=1;i<=n;i++){
		s=sqrt(x+s);
		cout<<"LAN "<<i<<" s="<<s<<endl;
	}
	return s;
}

int main (){
	cout<<"SV DO DUY COP. mssv: 12345678\n"
	    <<"chuong trinh tinh S (n dau can x+can...)\n"
		<<"Hay nhap so nguyen n va so thuc x: ";	
	int n;
	double x;
	cin>>n>>x;  //bai thi ko can check error
	
	double kq=tinh_s(x, n);
	
	cout<<"Ket qua S = "<<kq;
}
