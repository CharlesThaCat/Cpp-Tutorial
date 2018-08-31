#include <iostream>

using namespace std;

int main(){
    // print out ASCII chart in C-style typecast
    for (int i=0; i<128; i++){
        cout << i << "\t" << (char)i;
        if (i%16 == 0){
            cout << "\n";
        }
    }
    cout << "\n";
    // print out ASCII chart in Cpp-style typecast
    for (int i=0; i<128; i++){
        cout << i << "\t" << char(i);
        if (i%16 == 0){
            cout << "\n";
        }
    }
    cout << "\n";
    // print out ASCII chart in Cpp-style typecast
    for (int i=0; i<128; i++){
        cout << i << "\t" << static_cast<char>(i);
        if (i%16 == 0){
            cout << "\n";
        }
    }
    cout << "\n";
    // typecast in mathematical division
    int a = 5;
    int b = 3;
    float c;
    c = a/b;
    cout << c << endl;
    c = (float)a/b;
    cout << c << endl;
    c = a/(float)b;
    cout << c << endl;
    c = (float)(a/b);
    cout << c << endl;
}
