#include <iostream>
#include <cmath>
using namespace std;


double tinh_dien_tich(int x[],int y[],int i1,int i2,int i3){
	double a,b,c;
	double dx12=x[i1]-x[i2];
	double dx13=x[i1]-x[i3];
	double dx23=x[i2]-x[i3];
	double dy12=y[i1]-y[i2];
	double dy13=y[i1]-y[i3];
	double dy23=y[i2]-y[i3];
	a=sqrt(dx12*dx12 + dy12*dy12);
	b=sqrt(dx13*dx13 + dy13*dy13);
	c=sqrt(dx23*dx23 + dy23*dy23);
	if(a+b>c && b+c>a && a+c>b){
		double p=(a+b+c)/2.0;
		return sqrt(p*(p-a)*(p-b)*(p-c));
	}
	return 0;
}
int main (){
	cout<<"SV DO DUY COP. mssv: 12345678\n"
	    <<"CO n diem 2D, tìm tam giac S max\n"
		<<"hay nhap so dien N = ";	
	int n;
	cin>>n;
	
	//toa do nguyen
	int x[n],y[n]; //2 mang luu tru tao do n diem
    for(int i=0;i<n;i++){
    	cout<<" NHap tao do x,y cua diem thu "<<i<<": ";
    	cin>>x[i]>>y[i];
	}
    
	//Nhap1: liet ke cac to hop 3 diem
	int dem=0;
	for(int i1=0; i1<n-2; i1++)
	  for(int i2=i1+1; i2<n-1; i2++)
	    for(int i3=i2+1; i3<n; i3++)
	      dem++;
	      
	double s[dem]; //khai bao mang s, co dem pt la so thuc
	
	dem=0;
	for(int i1=0; i1<n-2; i1++)
	  for(int i2=i1+1; i2<n-1; i2++)
	    for(int i3=i2+1; i3<n; i3++)
	    	s[dem++]=tinh_dien_tich(x,y,i1,i2,i3);
	
	double max=0;
	int m1,m2,m3;
	dem=0;
	for(int i1=0; i1<n-2; i1++)
	  for(int i2=i1+1; i2<n-1; i2++)
	    for(int i3=i2+1; i3<n; i3++)
	    {
	    	if(s[dem]>max){
	    		m1=i1; m2=i2; m3=i3;
				max=s[dem];
			}
	    	dem++;
		}
	cout<<"Tam giac S max="<<max<<"\n"
	    <<"Tao thanh tu 3 diem:\n"
		<<"diem "<<m1<<" = ("<<x[m1]<<","<<y[m1]<<")\n"
		<<"diem "<<m2<<" = ("<<x[m2]<<","<<y[m2]<<")\n"
		<<"diem "<<m3<<" = ("<<x[m3]<<","<<y[m3]<<")";
}
