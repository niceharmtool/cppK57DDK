#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double tinh_pi(double delta){
	double pi=0, ps, mau_le=1, d=+1;  //dau=+1 theo dau ps dau tien
	
	do{
		ps = 1.0 / mau_le;
		pi += d*ps;  //su dung dau
		mau_le += 2;
		d  = -d;  //dao dau
	}while(ps >= delta);
	
	return 4.0*pi;
}

int main (){
	cout<<"SV DO DUY COP. mssv: 12345678\n"
	    <<"chuong trinh tinh so pi theo wiki\n"
		<<"hay nhap do chinh xac delta = ";	
	double delta;
	cin>>delta;
	
	double kq=tinh_pi(delta);
	
	cout<<"Ket qua so Pi = "<<setprecision(10)<<kq;
}
