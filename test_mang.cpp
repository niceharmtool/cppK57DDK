#include <iostream>
#include <cmath>
using namespace std;

int dem_chan(int a[], int n){
	int d=0;
	for(int i=0; i<n; i++)
		d+=!(a[i] & 1);
	return d;
}

int main (){
	cout<<"SV DO DUY COP. mssv: 12345678\n"
	    <<"chuong trinh NHAP MANG N PT SO NGUYEN\n"
	    <<"DEM SO LUONG SO CHAN TRONG MANG\n";
	    
	cout<<"Hay nhap so nguyen n=";	
	int n;
	cin>>n;
	
	//khai bao mang ten a, co n pt so nguyen, chi so 0..n-1
	int a[n]; 
	
	//nhap n phan tu: su dung for: moi lan nhap cho a[i] : i=0..n-1
	for(int i=0; i<n; i++){
		cout<<" Nhap phan tu "<<(i)<<": ";  //thong bao
		cin>>a[i];  //nhap tu ban phim
	}
	
	int kq = dem_chan(a,n);
	cout<<"So luong so chan trong mang = "<<kq;
}
