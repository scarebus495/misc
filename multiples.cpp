#include <iostream>
#include <vector>


    
// Multiple Finder Function that asks for a number, and how many of it's multiples
std::vector<int> multiple_finder(int num, int mult) {
  std::vector<int> multiples; // setting up an array of multiples (empty now)
  for(int i = 1; i <= mult; i++){ // loop to go through and add each multiple
    int answer = i*num;
    multiples.push_back(answer);
  }
  return multiples; // array now complete
}


int main() {

    int x; // number
    int y; // multiples for that number
    std::cout << "*********************************************************";
    std::cout << "\n\n                    MULTIPLE FINDER\n\n";
    std::cout << "*********************************************************";
    std::cout << "\nWhat number? : ";
    std::cin >> x;
    std::cout << "\nAnd how many multples of " << x << "? : ";
    std::cin >> y;
    std::cout << "\n\n";


    for(int element : multiple_finder(x,y)) { // this kind of for loop goes through a function and returns one value at a time, kind of like int "i = 0; i < whatever...."
        std::cout << element << "\n";
    }
  
}