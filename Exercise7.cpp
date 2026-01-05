//Title: Reverse a String
//Description: 	Write a program that asks the user to enter a string and then prints the reverse of that string.	

#include <iostream>

std::string my_reverse(std::string string_to_reverse);

int main(){

    // variables used

    std::string str;

    std::cout << "Enter a string to reverse: \n";
    std::getline(std::cin, str);

    std::string result; 
    
    // how can I validate string input??

    result = my_reverse(str);
    std::cout << "The reverse of " << str << " is " << result << std::endl;
    return 0;
}

std::string my_reverse(std::string string_to_reverse){
    std::string new_str;

    for (int i = string_to_reverse.length(); i >= 0; i--) {
        new_str.push_back(string_to_reverse[i]);
    }
    return new_str;
}