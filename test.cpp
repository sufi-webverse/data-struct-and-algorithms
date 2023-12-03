
#include<iostream>

using namespace std;

int main(){
    int i=0;
    cout << "Hello cpp";

    int arr[3]={1};
    cout << arr[10]; 

    for(int i=0; i<3; i++){
        cout << arr[i] << endl;
    }
    for(int x: arr){
        cout << x << endl;
    }
    cout << sizeof(arr);

    int n;
    int arr2[n] = {1};

    return 0;
}