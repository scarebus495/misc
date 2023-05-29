#include <iostream>
#include <string>
#include <vector>

//===================FUNCTIONS GO HERE==========================================================


bool guess_function(std::vector<char> word, std::vector<char> reveal, char guess){
    for(int i = 0; i < word.size(); i++) {
        if(word[i] == guess) {
            return true;
        }
    }
    return false;
}





//===============================================================================================
int main () {
    std::string word_init;
    int miss = 0;
    char guess;
    std::cout << "PLAYER ONE: CHOOSE A WORD (USE ALL CAPS) *PLAYER TWO LOOK AWAY* : ";
    std::cin >> word_init;
    
    std::vector<char> word(word_init.size());
    std::vector <char> reveal(word_init.size());
    
    //CONVERTS ENTERED WORD INTO A VECTOR
    if(word_init.size() > 1) {
        for(int i = 0; i < word_init.size(); i++) {
            word[i] = word_init[i];
        }
    
        //CONVERTS WORD TO REVEAL WITH SPACES INSTEAD
        for(int i = 0; i < word.size(); i++) {
            reveal[i] = '_';
        }
        //SEPERATES
        std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        //PRINT OUT REVEAL (SHOULD BE ALL '_')
        for(char reveal : reveal) {
            std::cout << reveal << " ";
        }
        std::cout << "\nPLAYER TWO GUESS A LETTER (CAPS) : ";
    }
    
while(miss < 7) {
    

    std::cin >> guess;

    if(guess_function(word, reveal, guess)) {
        std::cout << "\nYUP\n";
        //replace function here
        for(int i = 0; i < word.size(); i++) {
            if(word[i] == guess) {
                reveal[i] = guess;
            }
        }
        //reveal function here
        for(char reveal : reveal) {
            std::cout << reveal << " ";
        }
    } else {
            miss++;
            std::cout << "NOPE\n";
        }
    //check function
    if(reveal == word) {
        //PLAY CONGRATS 
        std::cout << "\nCONGRATS YOU WIN\n";
        return 0;
    }
}
std::cout << "\nYA BLEW IT\n";
}





//MOVE VARIOUS FUNCTIONS INTO THEIR OWN FUNCTIONS NOW