// Title: Sum of Two Numbers
//Description: Write a program that asks the user to enter two numbers, and then prints the sum of those two numbers.

#include <iostream>

using namespace std;

int main() {
    
    int num1;
    int num2;
    int sum;

    std::cout << "Enter first number: ";
    std::cin >> num1; // first number input

    std::cout << "Enter second number: ";
    std::cin >> num2; // second number input

    sum = num1 + num2;

    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
    return 0;
}