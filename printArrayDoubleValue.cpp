#include<iostream>
using namespace std;
int main() {
	int n=10;
	int arr[10];
	for(int i=0; i<n; i++){
		cout << "enter array values "<< i << ":";
		cin >> arr[i];
		
	}
	cout << " printing a double array :"<< endl;
	for(int i=0; i<n; i++){
		arr[i] = 2*arr[i];
		cout <<arr[i] <<" ";
		
	}
	return 0;
	
}
