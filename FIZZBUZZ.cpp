//FIZZ BUZZ 1-100
#include <iostream>

int main(void) {
  //Loopy loop 
  for(int i = 1; i <= 100; i++) {
      if(i % 15 == 0) { //Divis by both 3 and 5 prints fizzbuzz
      std::cout << "FizzBuzz\n";
    } else if(i % 3 == 0) { //Divis by 3 prints fizz
      std::cout << "Fizz\n";
    } else if(i % 5 == 0) { //Divis by 5 prints buzz
      std::cout << "Buzz\n";
    } else { //otherwise just prints the number
        std::cout << i << "\n"; 
    }
  }
}