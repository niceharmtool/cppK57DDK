#include <iostream>
using namespace std;
int main(){	
	cout<<"Nhap nam sinh, tinh xem du tuoi dk gp lx?"<<endl;
	//tu 18 tuoi tro len: dc phep thi bang lai xe
	int n;
	cout<<"Hay nhap nam sinh cua ban: ";
	cin>>n;
	cout<<"Ban sinh nam: "<<n<<endl;
	int t=2023-n;
	cout<<"Vay tuoi cua ban: "<<t<<endl;
	if(t>=18)
	{
	  cout<<"Ban du dieu kien thi gp lx"<<endl;
	  cout<<"Ban cung du tuoi de chiu trach nhiem hinh su roi day!"<<endl;
	}
	else
	{
	  cout<<"Ban chua du dieu kien thi gp lx"<<endl;
	  int doi = 18 - t;
	  cout<<"Ban phai doi "<<doi<<" nam nua nhe!"<<endl;
	  if(t<6)cout<<"Ve nha di hoc mau giao di";
    }
}
