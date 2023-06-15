#include <iostream>
#include<limits.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int key)
{
  if(start>=end)
    return 0; 
  int mid=(start+end)/2;
  if(arr[mid]==key)
    return 1; 
  else if (arr[mid]<key)
    start=mid+1;
  else 
    end = mid - 1; 
    return binarySearch(arr, start, end, key);
}
int main() {
  int arr[]={3, 7, 12, 14, 26, 92} ; 
  int key =26; 
  int size = sizeof(arr) / sizeof(arr[0]);
  cout << binarySearch(arr, 0, size - 1, key);
}