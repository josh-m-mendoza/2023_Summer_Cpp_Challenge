//Title: Factorial
//Description: Write a program that calculates the factorial of a given number.
//The factorial of a non-negative integer n is the product of all positive integers less than or equal to n.	


#include <iostream>

 int factorial(int n){
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
 }

 int factorial2 (int n){
    int result = 1; 
    for (int i = 2; i <= n; ++i){
        result *= i;
    }
    return result;
 }


 int main() {
    int num_to_find_factorial;

    std::cout << "Enter a non-negative integer: ";
    std:: cin >> num_to_find_factorial;

    if (num_to_find_factorial < 0) {
        std::cout << "Factorial is not defineed for negative numbers." << std::endl;
    }
    else {
        int result = factorial2(num_to_find_factorial);
        std::cout << "Factorial of " << num_to_find_factorial << " is " << result << std::endl;
    }
    return 0;
    }