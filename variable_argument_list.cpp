#include <iostream>
#include <cstdarg>

using namespace std;

double average (int num, ...){
    // num is the number of elements in the variable argument list
    // ... is the variable argument list
    va_list arguments;  // a place to store all arguments
    double sum = 0;

    va_start(arguments, num);   // initialize the storing process

    for(int x = 0; x < num; x++)
    {
        sum += va_arg(arguments, double);
    }
    va_end(arguments);  // clean up the argument list

    return sum/num;

}

int main(){
    cout << average(3,6.0,12.2,7.1) << endl;
    cout << average(4,5.0,9.0,10.0,11.0) << endl;
}
