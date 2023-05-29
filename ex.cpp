#include <iostream>
#include <string>
#include <vector>

//BAD HANGMAN LMFAO
//HANGMAN DOESN'T WORK THIS WAY DUUUUHHHH
//NEW ONE SHOULD ASK FOR LETTER, CHECK FOR THOSE LETTERS IN WORD, IF YES, THEN REVEAL THEM, IF NOT THEN ADD TO MISSES COUNTER
int main() {
    std::vector<char> word = {'e','x','a','m','p','l','e'};
    std::vector<char> guess;
    char letter;
    int misses = 0;

        for(int i = 0; misses < 7; i++) {
            std::cin >> letter;
            guess.push_back(letter);
            if(guess[i] == word [i]) {
                misses--;
                std::cout << "correct\n";
            } else {
                guess.pop_back();
                misses++;
            }
        std::cout << "\n " << misses;
        if(guess == word) {
            std::cout << "\nCONGRATS\n";
            return 0;
        }
    }
    


    
}