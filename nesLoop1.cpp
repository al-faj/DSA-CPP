#include<iostream>
using namespace std;
int main() {
    for(int i=0; i<5; i++){
        cout << "outer loop" << i <<endl;
        for(int j=0; j<3; j++){
            cout << "inner loop" << j<< endl;
        }
    }
}
