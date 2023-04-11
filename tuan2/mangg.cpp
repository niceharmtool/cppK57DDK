//dem snt trong khoang a..b
#include <iostream>
#include <cmath>
using namespace std;
//nhap mang n phan tu so nguyen
//liet ke cac scp trong mang
int main(){
  cout<<"Liet ke scp trong mang N phan tu"<<endl
      <<"Hay nhap so luong N = ";
  int n;
  cin>>n;
  
  int a[n]; //khai bao mang a co n pt
  for(int i=0;i<n;i++){
  	cout<<" Nhap phan tu a["<<i<<"] = ";
  	cin>>a[i];
  }
  
  cout<<"Cac scp la: ";
  for(int i=0;i<n;i++){
  	if(a[i]%2==0)
  	{
	  	int t=sqrt(a[i]);
	  	if(t*t==a[i])
	  	  cout<<a[i]<<" ";
    }
  }
}
