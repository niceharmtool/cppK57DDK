#include <iostream>
using namespace std;
int isNamNhuan(int y){
	return (y%400==0) || (y%4==0 && y%100!=0);
}
int main(){
	int m=2,y=2024,max=0;
	switch(m>=1 && m<=12)
	{	
		case false:
			cout<<"Thang phai nam trong khoang 1..12";
			break;
		case true:
			switch(m){
				case 2:
					max= isNamNhuan(y)?29:28;
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					max= 30;
					break;
				default:
					max= 31;
			}
			cout<<"Thang "<<m<<" nam "<<y<<" co "<<max<<" ngay";
			break;
	}
}
