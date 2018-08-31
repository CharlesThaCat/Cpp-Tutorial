#include <iostream>

using namespace std;

inline int Hello(){
    cout << "hello" << endl;
    return 1;
}

int main(){
    cout << Hello();
}