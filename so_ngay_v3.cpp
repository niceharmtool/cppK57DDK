#include <iostream>
#include <ctime>
using namespace std;

int main(){	
  //tinh so ngay giua 2 date
  int d,m,y;
  cout<<"Nhap ngay thang nam thoi diem t1: ";
  cin>>d>>m>>y;
  
  
  struct tm tm1={0};
  tm1.tm_year=y-1900;
  tm1.tm_mon=m-1;
  tm1.tm_mday=d;
  time_t t1=mktime(&tm1);  //1
  
  //get today -> d2,m2,y2  
  time_t today=time(0); //today==now  //2
  struct tm *tm2;  // mong muon tm2==today
  tm2=localtime(&today);  //3
  
  int d2,m2,y2;
  d2=tm2->tm_mday;
  m2=tm2->tm_mon+1; //tinh tu 0
  y2=tm2->tm_year+1900;
  
  cout<<"Tinh so ngay tu: "<<d<<"/"<<m<<"/"<<y
      <<" -> "<<d2<<"/"<<m2<<"/"<<y2<<endl;
  
  int dem=difftime(today,t1)/24/60/60;  //4 quy doi so giay -> ngay
  cout<<"so ngay="<<dem<<endl;
  cin.get();
}
