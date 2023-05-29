#include <iostream>
#include <string>
/*
***************RULES****************
      ROCK > SCISSORS
      PAPER > ROCK
      SCISSORS > PAPER
************************************
*/
int main() {
  //RNG
  srand(time(NULL));
  
  //init choices
  int human;
  int comp = (std::rand() % 3) +1;

  //CHOOSE
  std::cout << "--------------ROCK PAPER SCISSORS--------------\n";
  std::cout << "   1) Rock     2) Paper      3)Scissors\n";
  std::cout << "-----------------------------------------------\n";
  std::cin >> human;

  //MATCH SET
  //Human and Computer being named
    std::string human_choice;
    std::string comp_choice;
    if (human == 1) {
      human_choice = "Rock";
  } else if (human == 2) {
      human_choice = "Paper";
  } else if (human == 3) {
      human_choice = "Scissors";
  }
    if (comp == 1) {
      comp_choice = "Rock";
  } else if (comp == 2) {
      comp_choice = "Paper";
  } else if (comp == 3) {
      comp_choice = "Scissors";
  }

  //ANNOUNCMENT
  std::cout << "\n************* " << human_choice << " VS. " << comp_choice << " *************\n";

  //COMPUTE
  if (human == comp) {
    std::cout << "TIE\n";
    main();
  } else if (human == 1 && comp == 2) {
    std::cout << "Paper covers rock! You lose!\n";
  } else if (human == 1 && comp == 3) {
    std::cout << "Rock crushes Scissors! You win!\n";
  } else if (human == 2 && comp == 1) {
    std::cout << "Paper covers Rock! You win!\n";
  } else if (human == 2 && comp == 3) {
    std::cout << "Scissors cuts Paper! You lose!\n";
  } else if (human == 3 && comp == 1) {
    std::cout << "Rock crushes Scissors! You lose!\n";
  } else if (human == 3 && comp == 2) {
    std::cout << "Scissors cuts Paper! You win!\n";
  }
  
}