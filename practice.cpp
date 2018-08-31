#include <iostream>

using namespace std;

template <class A_Type> class calc{
    public:
        A_Type multiply(A_Type x, A_Type y);
        A_Type add(A_Type x, A_Type y);
};

template  <class A_Type> A_Type calc<A_Type>::multiply(A_Type x, A_Type y){
    return x*y;
}

template  <class A_Type> A_Type calc<A_Type>::add(A_Type x, A_Type y){
    return x+y;
}

int main(){
    calc<double> a_calc_class;  // create instance
    cout << a_calc_class.add(3.3, 5.5) << endl;
    cout << a_calc_class.multiply(1.2, 1.2) << endl;
}