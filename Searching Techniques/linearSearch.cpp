#include <iostream>
#include<limits.h>
using namespace std;

int linearSearch(int arr[], int key)
{
  for(int i=0; i<sizeof(arr); i++){
      if(arr[i]==key)
        break; 
  if(i<sizeof(arr))
    return 1; 
  else 
    return 0;
  }
}
int main() {
  int arr[]={12, 42, 36, 5, 9, 7} ; 
  int key =5; 
  cout<<linearSearch(arr, key);
}