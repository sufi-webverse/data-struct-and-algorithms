
#include <iostream>

using namespace std;

template<class T>
class Arithmatic {
    private:
        T a, b;

    public:
        Arithmatic<T>(T a, T b){
            this->a=a;
            this->b=b;
        }
        T getA();
        T getB();
        T sum(){
            return a+b;
        }
        T sub(){
            return a-b;
        }
};
template<class T>
T Arithmatic<T>::getA(){
    return a;
}
template<class T>
T Arithmatic<T>::getB(){
    return b;
}

int main(){

    Arithmatic<float> ar1(10.09, 5), ar2(3,4);
    cout << ar1.sum() << endl;
    cout << ar1.getA() << endl;
}