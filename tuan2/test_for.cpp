#include <iostream>
using namespace std;
int main(){
	int i=3, j=77;
	while(i*2<j){
		cout<<"hello i="<<i<<" j="<<j<<endl;
		i+=3, j-=2;
	}
	cout<<"sau khi finish for: i="<<i<<" j="<<j;
}
