#include <string>
#include <iostream>
#include <vector>
int main(void) {
    
    std::string word;
    std::cout << "PLEASE TYEP : ";
    std::cin >> word;
    std::vector<char> wordington(word.size()-1);

    for(int i = 0; i < word.size(); i++) {
        wordington[i] = word[i];
    }
    for(int i = 0; i < wordington.size(); i++) {
        std::cout << wordington[i];
    }
}