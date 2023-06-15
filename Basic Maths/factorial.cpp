#include <iostream>
using namespace std;

int findFact(int num)
{
  if(num==0 || num==1)
    return 1;
  return num*findFact(num-1);
}
int main() {
  int num; 
  cin>>num; 
  cout<<findFact(num);
}