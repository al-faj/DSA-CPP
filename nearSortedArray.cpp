#include<iostream>
using namespace std;
  int nearSortedArray(int arr[], int n, int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s <= e){
      if(mid-1 >= 0 && arr[mid-1] == target){
        return mid-1;
      }
      if(arr[mid]== target){
        return mid;
      }
      if(arr[mid+1] == target){
        return mid+1;
      }
      if(target > arr[mid]){
        //right
       s=mid+2;
      }
      else{
        //left
        e=mid-2;
      }

     mid=s+(e-s)/2; 
    }
    return -1;

  }
int main() {
  
  int  arr[]={20,10,30,50,40,70,60};
  int n=7;
  int target=30;
  int finalAns = nearSortedArray(arr, n, target);
  if(finalAns == -1){
    cout <<"element not found" << endl;
  }else
  {
    cout << "element founded at :" << finalAns << endl;
  }
}
