#include <iostream>
#include <ctime>
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
		if(d<max){
			d++;
		}
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
  
  //get today -> d2,m2,y2  
  time_t today=time(0); //today==now
  struct tm *tm2;  // mong muon tm2==today
  tm2=localtime(&today);
  
  int d2,m2,y2;
  d2=tm2->tm_mday;
  m2=tm2->tm_mon+1; //tinh tu 0
  y2=tm2->tm_year+1900;
  
  cout<<"Tinh so ngay tu: "<<d<<"/"<<m<<"/"<<y
      <<" -> "<<d2<<"/"<<m2<<"/"<<y2<<endl;
  int dem=0;
  while( !(d==d2 && m==m2 && y==y2))
  {
    dem++;
    nextDay(d,m,y);
  }
  cout<<"so ngay="<<dem<<endl;
  cin.get();
}
