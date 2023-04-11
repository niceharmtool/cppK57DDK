#include <iostream>
#include <cmath>
#include <limits>
using namespace std;
int main (){
cout<<"app tinh chan le\n";
	int a;
	do{
        cout<<"HAY NHAP 1 SO NGUYEN: ";
		cin>>a;
		if(!cin.good())
		{
    		cin.clear();
    		cin.ignore(numeric_limits<streamsize>::max(), '\n');
    		cout<<"chu y: Hay nhap so nguyen sep oi"<<endl;
		}else{
			break; // now is good
		}
	}while(1);
	cout<<"Ban vua nhap a="<<a<<endl;
	if(a%2){
		cout<<"day la so le";
	}else{
		cout<<"day la so chan";
	}	
}
