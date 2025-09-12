#include<iostream>
using namespace std;
int main() {
	int n=5;
	int arr[5];
	for(int i=0; i<5; i++){
		cout << "Enter the values of index : " << i << ":";
		cin >> arr[i];
		cout << endl;
		
	}
	cout << "print the array :" << endl;
	for(int i=0; i<5; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
