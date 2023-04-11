#include <iostream>	 //khai báo thu vien
using namespace std; //k/b s/d ko gian ten: std
int main() {         //k/b ham main,ko ts,kieu tra ve la int
	int a=1, b=2, c=3;
	int *t=&a;  //con tro t === dia chi voi a
	
	int d=a+b+c+*t;
	cout<<"d lan 1 = "<<d<<endl;
	//toan tu ++
	
	a=4;
	
	d = d + a+b+c+*t;  //7+4+2+3+4 = 20
	cout<<"d lan 2 = "<<d<<endl;

	d=++a + b + c + ++(*t);
	    //5+  2  + 3 + 6=16
	cout<<"d lan 3 = "<<d<<endl;
	cout<<" a="<<a;
	cin.get(); //wait press any key
}
