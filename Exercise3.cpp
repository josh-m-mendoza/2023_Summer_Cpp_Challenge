//Title: Even or Odd
//Description: Write a program that asks the user to enter a number and then determines whether the number is even or odd. 
//Print an appropriate message to the console.

#include <iostream>

using namespace std;

int main () {
    int number;

    // user inputs a number

    cout << "Enter an integer: "; 
    cin >> number;

    // check if number is even or odd

    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    }
    else {
        cout << number << " is odd." << endl;
    }

    return 0;

    }
