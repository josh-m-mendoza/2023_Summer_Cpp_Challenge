//Title: Prime Number
//Description: Write a program that asks the user to enter a number and then determines whether the number is prime or not.
//A prime number is a positive integer greater than 1 that has no positive divisors other than 1 and itself.	

#include <iostream>
// function to check if a number is prime

bool is_prime(int n) {
    for (int i = 2; i*i <= n; ++i){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}


// main function to get user input and display result

int main() {
    int num_to_check; 
    
    std::cout << "Enter a positive integer: ";
    std::cin >> num_to_check;
    if (num_to_check <= 1) {
        std::cout << num_to_check << " is not a prime number." << std::endl;
    }
    else{
        bool result = is_prime(num_to_check);

        if (result){
            std::cout << num_to_check << " is a prime number." << std::endl;
        }
        else {
            std::cout << num_to_check << " is not a prime number." << std::endl;
        }
    }
    return 0;
}