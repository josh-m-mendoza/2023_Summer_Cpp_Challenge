//Title: Fibonacci Sequence
//Description: Write a program that prints the Fibonacci sequence up to a given number. 
//The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones. 
//The sequence starts with 0 and 1.

#include <iostream>

using namespace std;

int main () {
    int limit;

    cout<<"Enter a positive integer to generate Fibonacci sequence up to: ";
    cin>> limit;

    // first two fibonacci numbers
    int f1;
    int f2;

    // assignment

    f1 = 0;
    f2 = 1;

    cout << "Fibonacci Sequence up to " << limit << " :" << endl;

    while (f1 <= limit) {
        cout << f1 << " ";
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }

    return 0;
}