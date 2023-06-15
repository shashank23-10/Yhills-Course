#include <iostream>
#include<limits.h>
using namespace std;

int lcm(int a, int b)
{
  int x = (a>b)?a:b; 
  int y = (a<b)?a:b; 
  for (int i = x; ; i += x) {
    if (i % y  == 0)
      return i;
    }
    
}
int main() {
  cout<<lcm(12,15);
}