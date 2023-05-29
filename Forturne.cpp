#include <iostream>
#include <cstdlib>

int main () {
  //Random number from 0-19
  srand(time(NULL));
  int answer = std::rand() % 20;
  
  //Ask it a question!
  int question;
  std::cout << "Ask me a question.\n";
  std::cin >> question;

  //Answer
  switch (answer) {
    case(0):
      std::cout << "It is certain.\n";
      break;
    case(1):
      std::cout << "It is decidedly so.\n";
      break;
    default:
      std::cout << "I dun fuckin know dude, shit\n";
      break;
  }
  
}