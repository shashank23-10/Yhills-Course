#include <iostream>
using namespace std;

int count(int num)
{
  int digits=0;
  if(num==0)
    return digits; 
  digits++; 
  return count(num/10); 
}

int main() {
  int num; 
  cin>>num; 
  cout<<count(num);
}