//dem snt trong khoang a..b
#include <iostream>
#include <cmath>
using namespace std;

int main(){
  cout<<"CHUONG TRINH DEM SNT TRONG KHOANG A..B\n"
      <<"Hay nhap 2 so nguyen A,B: ";
  int a,b;
  cin>>a>>b;

  int dem=0;
  for(int i=a;i<=b;i++){
  	bool ok=true;
  	int max=sqrt(i);
  	for(int c=2;c<=max;c++)
  	  if(i%c==0){
  	    ok=false;
		break; //ko can check them c	
	  }
	if(ok)dem++;
  }

  cout<<"so luong snt = "<<dem;
  cin.get();
}
