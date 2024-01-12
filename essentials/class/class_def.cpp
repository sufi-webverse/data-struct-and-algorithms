
#include <iostream>

using namespace std;

class Arithmatic {
    private:
        int a, b;

    public:
        Arithmatic(int a, int b){
            this->a=a;
            this->b=b;
        }
        int getA();
        int getB();
        int sum(){
            return a+b;
        }
        int sub(){
            return a-b;
        }
};
int Arithmatic::getA(){
    return a;
}
int Arithmatic::getB(){
    return b;
}

int main(){

    Arithmatic ar1(10, 5), ar2(3,4);
    cout << ar1.sum() << endl;
    cout << ar1.getA() << endl;
}