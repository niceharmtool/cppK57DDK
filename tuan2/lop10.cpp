//dem snt trong khoang a..b
#include <iostream>
using namespace std;

int main(){
  cout<<"LK cac so 4 chu so: chia 8 du 1 AND chia 125 du 124"<<endl;
  for(int i=9999; i>=1000; i--)
    if( i%8==1 && i%125==124)
	  cout<<i<<" ";
}
