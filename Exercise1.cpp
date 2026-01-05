//Title: Hello World
//Description: Write a C++ program that prints "Hello, World!" to the console.

#include <iostream>
using namespace std;

int main(){
  string word1;
  word1 = "Hello";

  string word2;
  word2 = "World";

  string sentence;
  sentence = word1 + " " + word2;

  cout<<sentence<<endl;
  
  return 0;
}
