
#include<iostream>

using namespace std;

int main(){
    int i=0;
    cout << "Hello cpp" << endl;

    int arr[3]={17};
    cout << "arr[" << 10 << "]" << arr[10] << endl; 

    for(int i=0; i<4; i++){
        cout << "arr[" << i << "]"  << arr[i] << endl;
    }
    for(int x: arr){
        cout << "x=" << x << endl;
    }
    cout << sizeof(arr);

    int n;
    int arr2[n] = {1};

    return 0;
}