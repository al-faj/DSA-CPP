#include<iostream>
using namespace std;
int binarySearch(int arr[], int target, int size){
  int start = 0;
  int end=size-1;
  int mid = (start + end)/2;
  while(start <= end){
    if(arr[mid] == target){
      return mid;
    }
    else if(target > arr[mid]){
      start = mid+1;
    }
    else if(target < arr[mid]){
      end = mid-1;
    }
    mid = (start + end)/2;
  }
  return -1;
}

int main() {
  int arr[] = {10,20,30,40,50,60,70,80,90};
  int target = 90; 
  int size = 9;
  int ansIndex = binarySearch(arr, target, size);
  if(ansIndex == -1){
    cout << " index not exist :" << endl;
  }
  else {
    cout << "index fonded at :"<< ansIndex << endl;
  }
}
