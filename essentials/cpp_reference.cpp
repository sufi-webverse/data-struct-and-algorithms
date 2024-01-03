
// reference is like alias
// cpp feature
// should be assigned one line
// used in parameter passing
#include<iostream>

using namespace std;

int main(){

    int a = 10;
    int &r=a; // r is alias name to a. r is same as a
    r=25;
    cout << a << endl;
    cout << r << endl;
}
