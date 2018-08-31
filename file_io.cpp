//ttps://blog.csdn.net/lz20120808/article/details/49622787

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    // open / create a text file and write text into it
    ofstream file_a ("example.txt", ios::trunc);
    file_a << "This is an example text.";
    file_a.close();

    // open a file and store the first line of it in a string array and print it
    ifstream file_b ("example.txt");
    // only print out "This". Because spaces between words will terminate the reading process of operator >>
    char string1[256];
    file_b >> string1;
    cout << string1 << endl;
    file_b.close();

    // open a file and store the first line of it in a string array and print it
    ifstream file_c ("example.txt");
    // print out the whole line of sentence. Use file_b as cin
    char string2[256];
    file_c.getline(string2,256);
    cout << string2 << endl;
    file_c.close();

    // read text file and append text to it
    ofstream file_d ("example.txt", ios::app);
    file_d << "\nThis is another example text.";
    file_d.close();

    // check if the file is opened successfully
    ifstream file_e ("example.txt");
    if (!file_e.is_open()){
        cout << "The file cannot be opened";
    }
    else {
        cout << "The file can be opened";
    }

}
