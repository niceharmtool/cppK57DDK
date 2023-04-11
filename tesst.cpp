#include <iostream>
using namespace std;
int main(){
	int   a=2147483647 ;  //over max = 2^31-1  => a am
	long double b=2147483648.0;  //2^31
	long double c=b-1 ;  //2^31 - 1
    cout<<"size of int    = "<<sizeof(a)<<" value a="<<a<<endl;
    cout<<"size of double = "<<sizeof(b)<<" value b="<<b<<endl;
    cout<<"size of double = "<<sizeof(c)<<" value c="<<b<<endl;
    cout<<"b-c == "<<(b-c)<<endl;
    
    bool bo=0.0001; 
    //0==false  == sai
    //!0  la dung == 1
    //toan tu so sanh : ==, >, >=, < , <=, !=
    //toan tu so sanh la loai 2 NGOI
    //ket qua ttss la: kieu bool => 0 or 1
    cout<<"value of b when print: "<<bo<<endl;
    short x=256;
    if(x)
	    cout<<"hello";
    else
      	cout<<"tacke";
	
}
