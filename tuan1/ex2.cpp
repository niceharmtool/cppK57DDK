#include <iostream>	 //khai báo thu vien
using namespace std; //k/b s/d ko gian ten: std
int main() {         //k/b ham main,ko ts,kieu tra ve la int
	short a=32767;  //2^15-1
	cout<<"lan 1: a="<<a<<" size of a = "<<sizeof(a)<<endl;
	a=a+1;
	cout<<"lan 2: a="<<a<<" size of a = "<<sizeof(a)<<endl;
	cout<<" size of KDL : short = "<<sizeof(short)<<endl;
	cout<<" size of const = "<<sizeof(5.0)<<endl;
	
	unsigned short b=65535;
	cout<<"lan 1 b="<<b<<" size of b = "<<sizeof(b)<<endl;
	b=b+100;
	cout<<"lan 2 b="<<b<<" size of b = "<<sizeof(b)<<endl;
	cout<<" size of KDL : unsigned short = "<<sizeof(unsigned short)<<endl;
	
	
	int c= 1<<31; //want c = min of int: -2^31
	cout<<"lan 1 c="<<c<<" size of c = "<<sizeof(c)<<endl;
	c=c-1;  //=> max of int
	cout<<"lan 2 c="<<c<<" size of c = "<<sizeof(c)<<endl;
	cout<<" size of KDL : int = "<<sizeof(int)<<endl;
	cin.get(); //wait press any key
}
