#include <iostream>

using namespace std;


void process(int* data){
    *data = 10;
    cout << *data << endl;
}

int main()
{

    int* num = new int(5);
    process(num);

    cout << *num << endl;
    return 0;
}
