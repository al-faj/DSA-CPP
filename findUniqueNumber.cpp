#include<iostream>
using namespace std;
int uniqueNum(int arr[], int n) {
  int ans=0;
  for(int i=0; i<n; i++){
    ans = ans^arr[i];

  }
  return ans;
}
int main() {
  int arr[] ={2,5,9,7,2,5,7,9,6};
  int n=9;
  int finalAns = uniqueNum(arr, n);
  cout << "final Answer :"<<finalAns << endl;
  return 0;
}
