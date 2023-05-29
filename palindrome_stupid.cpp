#include <iostream>
#include <string>
#include <vector>
// Define is_palindrome() here:
void is_palindrome(std::string name) {
  std::vector<char> pal1;
  std::vector<char> pal2;
  // first half of the word
  for(int i = 0; i < (name.size()/2); i++){ 
    pal1.push_back(name[i]);
  }
  // last half of the word THIS ALREADY REVERSES IT LMFAO
  for(int i = name.size()-1; i > (name.size()/2); i--){ 
    pal2.push_back(name[i]);
  }
  //check for equality
  if(pal1 == pal2){
    std::cout << "YAY ";
    std::cout << name << " is a palindrome!\n";
  } else {
    std::cout << "Aww... " << name << " is not a palindrome...\n"; 
  }
  }
int main() {
     is_palindrome("madam");
    is_palindrome("broomfield");
    is_palindrome("asa");
    is_palindrome("racecar");
  }