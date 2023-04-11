//dem snt trong khoang a..b
#include <iostream>
#include <cmath>
using namespace std;

int main(){
  cout<<"LK scp t a..b"<<endl
      <<"Hay nhap 2 so a,b : ";
  int a,b;
  cin>>a>>b;
  cout<<"Cac scp tu "<<a<<".."<<b<<": ";
  int min=ceil(sqrt(a));
  int max=sqrt(b);
  for(int i=min;i<=max;i++){
  	cout<<i*i<<" ";
  }
}
