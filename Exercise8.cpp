//Title: Palindrome
//Description: Write a program that asks the user to enter a string and then determines whether the string is a palindrome or not. 
//A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward.	

#include <iostream>

// Function to check if a string is a palindrome

bool isPalindrome(const std::string& str);


int main() {

    std::string input; 
    std::cout << "Enter a string, to verify if it is a Palindrome: ";
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << input << " is a Palindrome.";
    }
    else {
        std::cout << input << " is not a Palindrome.";
    }
    return 0;

}

std::string my_reverse(const std::string& str) {
    std::string new_str;

    for (int i = str.length() - 1; i >= 0; i--){
        new_str.push_back(str[i]);
    }
    return new_str;
}

bool isPalindrome(const std::string& str) {
    std::string reversed = my_reverse(str); 

    if (str == reversed) {
        return true;
    }
    
    return false;
}