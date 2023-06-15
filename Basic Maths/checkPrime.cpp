#include <iostream>
#include<limits.h>
using namespace std;

int checkPrime(int num)
{
  int i;
  for( i=2; i<=num/2; i++){
    if(num%i==0)
      return 0;
  }
  if(i>num/2)
    return 1;
}
int main() {
  cout<<checkPrime(5);
}