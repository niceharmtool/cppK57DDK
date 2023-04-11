#include <iostream>
#include <set>
using namespace std;
int main ()
{
  std::set<int> myset;
  int n=5;
  for(int i=0;i<n;i++){
    int item;
    cin>>item;
    myset.insert(item);
  }

  std::cout << "myset contains:";
  for (std::set<int>::iterator it=myset.begin(); it!=myset.end(); ++it)
    std::cout << ' ' << *it;

  std::cout << '\n';

  return 0;
}
