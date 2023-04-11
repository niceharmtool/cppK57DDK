//dem snt trong khoang a..b
#include <iostream>
using namespace std;

int main(){
  cout<<"LK n scp dau tien"<<endl
      <<"Hay nhap so n = ";
  int n;
  cin>>n;
  cout<<n<<" scp dau tien la: ";
  for(int i=1;i<=n;i++)
    cout<<i*i<<" ";
}
