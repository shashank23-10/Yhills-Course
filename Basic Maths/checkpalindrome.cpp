#include <iostream>
using namespace std;

bool checkPalin(int num)
{
  int r=0, d;
  int n=num; 
  while(n!=0){
    d=n%10; 
    r=10*r+d;
    n/=10;
  }
  if(num==r)
    return true; 
  else 
    return false;
}
int main() {
  int num; 
  cin>>num; 
  cout<<checkPalin(num);
}