#include <iostream>

using namespace std;

int mult (int a, int b);

int main(){
    int x = 0;
    int y = 0;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cin.ignore();
    int result = mult(x,y);
    cout << "Multiply these two numbers gets: " << result << endl;
}

int mult (int a, int b){
    return a*b;
}
