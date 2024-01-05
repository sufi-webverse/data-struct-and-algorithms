#include<iostream>
using namespace std;

int sum_pass_address(int *p, int n){ // or int []
    int sum=0;
    for(int i=0; i< n; i++)
    {
        cout << (p[i]) << " ";
        sum += p[i];
    }
    return sum;
}

int main(){

    int arr[5]={3,4,2,1,4};
    int sum = sum_pass_address(arr, sizeof(arr)/sizeof(arr[0]));
    cout << sum << endl;

    int add1[7]={7,7,72,2,1,1,9};
    int *p1=add1;

    cout << sizeof(add1) << endl;
    cout << sizeof(*p1) << endl;
}