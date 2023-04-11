#include <iostream>
#include <cmath>
using namespace std;
int main(){
  //liet ke cac snt tu 1..n
  //input: n
  //output: print so nt 1..n ra man hinh
  int n;
  cout<<"Please input number N=";
  cin>>n;
  cout<<"List number is SNT: 2 ";
  for(int i=3;i<=n;i++){
  	bool ok=true;
  	cout<<"check i="<<i<<":"<<endl;
  	int amax = sqrt(i);
  	for(int c=2;c<=amax;c++){
  	   cout<<" chia "<<i<<" cho "<<c<<" kq: ";
  	  if(i%c==0){
  	  	cout<<" => chia het ";
  	  	ok=false;  //=> i ko phai snt
  	  	break; //ket thuc for c gan nhat
	  }
	  cout<<"ko chia het"<<endl;
	}
	if(ok)cout<<"=> vay snt la: "<<i<<endl;
	else cout<<" => "<<i<<" ko phai snt "<<endl;
  }
}
