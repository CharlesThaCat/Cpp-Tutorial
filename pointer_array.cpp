// http://www.runoob.com/cplusplus/cpp-pointer-to-an-array.html
// https://blog.csdn.net/zhouxuguang236/article/details/12256321

#include <iostream>

using namespace std;

int main(){
    // create and fill an 2-D array
    int array[2][3];

    for (int index1=0; index1<2; index1++){
        for (int index2=0; index2<3; index2++){
            array[index1][index2] = (index1+1)*(index2+1);
        }
    }

    for (int index1=0; index1<2; index1++){
        for (int index2=0; index2<3; index2++){
            cout << array[index1][index2] << " ";
        }
        cout << "\n";
    }

    // pointer and 1-D array
    int array2[5] = {0, 1, 2, 3, 4};
    int *pointer;
    pointer = array2;
    cout << *pointer << endl;
    cout << *array2 << endl;
    cout << *(pointer+1) << endl;
    cout << *(array2+1) << endl;
    cout << endl;

    // pointer and 2-D array
    int *pointer1;
    pointer1 = array[0];
    cout << *pointer1 << endl;
    cout << *array[0] << endl;
    cout << *(pointer1+3) << endl;
    cout << *(array[0]+3) << endl;

    int (*pointer2)[3] = array;
    cout << *(*(array+1)+2) << endl;
    cout << *(*(pointer2+1)+2) << endl;
}
