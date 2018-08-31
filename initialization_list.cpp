#include <iostream>

using namespace std;

class Foo{
    public:
        Foo(int x){
            cout << "Foo's constructor called with " << x << endl;
        }
};

class Bar : public Foo{
    public:
        Bar() : Foo(10){
            cout << "Bar's constructor" << endl;
        }
};

int main(){
    Bar stool;
}
