//c.biancheng.net/cpp/biancheng/view/192.html

#include <iostream>

using namespace std;

// The coding style is to define all the usable constructor, destructor, functions and variables in the definition of class.
// Then write the detailed implementation of them outside the definition of class.
class Computer{ // no parenthesis
    public:
        // means that all of the functions & variables below this are public
        Computer(int a);
        // constructor
        ~Computer();
        // destructor
        void setspeed(int p);
        // a function
        int readspeed();
        // a function
    protected:
        // means that all of the functions & variables below this are protected
        int processor_speed;
        // a variable
};  // semicolon

Computer::Computer(int a){
    // constructor
    // no return variable, class name :: constructor name
    processor_speed = a;
}   // no need a semicolon

Computer::~Computer(){
    // destructor
    // no return variable, class name :: destructor name
}

void Computer::setspeed(int p){
    // a function outside the class definition
    processor_speed = p;
}

int Computer::readspeed(){
    // a function outside the class definition
    return processor_speed;
}

int main(){
    Computer com(300);   // create an instance
    cout << com.readspeed() << endl;
    com.setspeed(100);  // call a function
    cout << com.readspeed();
}