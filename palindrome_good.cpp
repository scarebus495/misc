#include <iostream>
#include <string>
#include <vector>
void palindrome(std::string word){ //palindrome checker function
    std::string check; // init reversed version of word
    for(int i = word.size()-1; i >= 0; i--){
        check += word[i];
    }
    if(check == word){ // check if same
        std::cout << "Horray! " << word << " is a palindrome!";
    } else { // if not same
        std::cout << "Aww... " << word << " is not a palindrome...";
    }
}
int main() { // main body
    std::cout << "******************************************\n\n";
    std::cout << "          Palindrome Checker!\n";                 // intro
    std::cout << "Type the word in all lowercase to check!\n\n";
    std::cout << "******************************************\n\n";
    std::string word = "";
    std::cin >> word;       // input word
    palindrome(word);       // check if palindrome function
}