#include <iostream>
using namespace std;
int findOddOccrance(int arr[], int n){
  int s=0;
  int e=n-1;
  int mid= s+(e-s)/2;
  while(s <= e){
    //single element 
    if(s == e){
      return s;
    }
    //mid check
    if(mid & 1){//mid & 1 -> true for odd number
      if(mid-1 >= 0 && arr[mid-1] == arr[mid]){
        //right me jawo
        e=mid+1;
      }
      else{
        //left me jawo
        e=mid-1;
      }
    }
    else
    {
      //even
      if(mid+1 < n && arr[mid] == arr[mid+1]){
        //right me jawo
        s=mid+2;
      }
      else{
        e=mid;
      }
    }
    mid=s+(e-s)/2;
  }
  return -1;
}
int main() {
  int arr[] = {10,10,2,2,3,3,2,5,5,6,6,7,7};
  int n=13;
  int ansIndex = findOddOccrance(arr, n);
  cout << " final Index is:" << arr[ansIndex] <<endl;
}
