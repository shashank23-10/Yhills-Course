#include <iostream>
#include<limits.h>
using namespace std;

int gcd(int a, int b)
{
  int maxi = INT_MIN;
  for(int i=1; i<=((a<b)?a:b); i++)
    if(a%i==0 && b%i==0)
      maxi = max(maxi, i);
  return maxi; 
}
int main() {
  int a=20 , b=25 ;  
  cout<<gcd(a,b);
}