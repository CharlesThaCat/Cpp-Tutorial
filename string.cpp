#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char string[256];
    cout << "Please enter a long string: ";
    cin.getline(string, 256, '\n');
    cout << "Your long string is " << string << endl;
    int array[3] = {0,1,2};
    cout << array << endl;

    // string definition
    char first_name[50];
    char last_name[50];
    char full_name[100];
    char fullname[100];

    // user input and string manipulation
    cout << "Enter your first name: ";
    cin.getline(first_name, 50, '\n');
    if ( strcmp(first_name, "Zhuowen") == 0 )
        cout << "Same first name as me!" << endl;
    else
        cout << "Not my first name" << endl;
    // find the length of your first name
    int length = strlen(first_name);
    cout << "The length of your first name is " << length << endl;
    cout << "Enter your last name: ";
    cin.getline(last_name, 50, '\n');
    // string concatenation
    full_name[0] = '\0';
    strcat(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    cout << "Your full name is " << full_name << endl;
    strcpy(fullname, full_name);
    cout << fullname;
}
