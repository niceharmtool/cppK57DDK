#include <iostream>
using namespace std;

int isNamNhuan(int y){
	return (y%400==0) || (y%4==0 && y%100!=0);
}
int maxDayOfMonth(int m, int y){
	switch(m){
		case 2:
			return isNamNhuan(y)?29:28;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		default:
			return 31;
	}
}
int nextDay(int &d, int &m, int &y){
	if(d<28)d++;
	else{
		int max = maxDayOfMonth(m,y); //call function
		if(d<max)d++;
		else{
			d=1;
			m++;
			if(m==13){
				m=1;
				y++;
			}
		}
	}
}
int main(){	
  //tinh so ngay giua 2 date
  int d,m,y;
  cout<<"Nhap ngay thang nam thoi diem t1: ";
  cin>>d>>m>>y;
  
  int d2,m2,y2;
  cout<<"Nhap ngay thang nam thoi diem t2: ";
  cin>>d2>>m2>>y2;
  
  int dem=0;
  while( !(d==d2 && m==m2 && y==y2))
  {
    dem++;
    nextDay(d,m,y);
  }
  cout<<"so ngay="<<dem<<endl;
  cin.get();
}
