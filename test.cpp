#include <iostream>
#include <string>
#include <vector>

//===================FUNCTIONS GO HERE==========================================================


bool guess_function(std::vector<char> word, char guess){
    for(int i = 0; i < word.size(); i++) {
        if(word[i] == guess) {
            return true;
        }
    }
    return false;
}

void greet() {
    std::cout << "\n======================\n";
    std::cout << "UFO: THE GAME";
    std::cout << "\n======================\n";
    std::cout << "Instructions: Player One will type a word, Player two will guess the word\n";
    std::cout << "PLAYER ONE: CHOOSE A WORD (USE ALL CAPS) *PLAYER TWO LOOK AWAY* : ";
}

bool end_check(std::vector<char> reveal, std::vector<char> word) {
    if(reveal == word) {
        return true;
    }
    return false;
}

void end_good() {
    std::cout << "\nCONGRATS YOU WIN\n";
}

void end_bad() {
    std::cout << "\nYA FACKIN BLEW IT\n";
}

std::vector<char> replace(std::vector<char> word, std::vector<char> reveal, char guess) {
    for(int i = 0; i < word.size(); i++) {
        if(word[i] == guess) {
            reveal[i] = guess;
        }
        std::cout << " " << reveal[i];
    }
    return reveal;
}

std::vector<char> init_word(std::string word_init) {
    std::vector<char> word(word_init.size());
    for(int i = 0; i < word_init.size(); i++) {
        word[i] = word_init[i];
    }
    return word;
}

std::vector<char> init_reveal(std::vector<char> word) {
    std::vector<char> reveal(word.size());
    for(int i = 0; i < word.size(); i++) {
        reveal[i] = '_';
    }
}
//===============================================================================================
int main () {
    std::string word_init;
    int miss = 0;
    char guess;
    //INTRO
    greet();
    std::cin >> word_init; //PLAYER ONE INPUTS WORD    
    std::vector<char> word(word_init.size()); 
    std::vector<char> reveal(word_init.size());
    

    //CONVERTS ENTERED WORD INTO A VECTOR

    word = init_word(word_init);

    //CONVERTS WORD TO REVEAL WITH SPACES INSTEAD


    /*
    for(int i = 0; i < word.size(); i++) {
        reveal[i] = '_';
    }
    */
    //SEPERATES
    for(int i = 0; i < 200; i++) {
        std::cout << "\n";
    }
    //PRINT OUT REVEAL (SHOULD BE ALL '_')
    for(char reveal : reveal) {
        std::cout << reveal << " ";
    }

    std::cout << "\nPLAYER TWO GUESS A LETTER (CAPS) : ";
    while(miss < 7) {
        std::cout << "\n";
        std::cin >> guess;
        if(guess_function(word, guess)) {
            std::cout << "\nYUP\n";
            reveal = replace(word, reveal, guess);
        } else {
            miss++;
            std::cout << "NOPE\n";
        }
        if(end_check(reveal, word)) {
            end_good();
        }
    }
    end_bad();
}





//MOVE VARIOUS FUNCTIONS INTO THEIR OWN FUNCTIONS NOW