#include <cstdlib>
#include <iostream>
#include <time.h>
#include <stdio.h>

using namespace std;

int main(){
    srand(time(NULL));  // time as seed
    int result = rand()%100 + 1;
    int guess = 0;
    do {
        cout << "Guess a number between 1 and 100: ";
        cin >> guess;
        cin.ignore();
        if (guess < result){
            cout << "Too small!\n";
        }
        else if (guess > result){
            cout << "Too large\n";
        }
    } while(guess != result);
    cout << "Congrats!";
}
