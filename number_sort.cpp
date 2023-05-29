#include <vector>
#include <iostream>

int main() {
  //init vectors
  std::vector<int> num = {2, 4, 3, 6, 1, 9};
  std::vector<int> even;
  std::vector<int> odd;

  //init sums
  int even_total = 0;
  int odd_total = 0;

  //sorting time
  for(int i = 0; i < num.size(); i++) { //check even/odd
    if(num[i] % 2 == 0) {
      even.push_back(num[i]);
      even_total = even_total + num[i];
    } else {
      odd.push_back(num[i]);
      odd_total = odd_total + num[i];
    }
  }

  //print numbers EVEN
  std::cout << "\nList of even numbers...\n";
  for(int i = 0; i < even.size(); i++) {
    std::cout << even[i] << " ";
  }
  std::cout << "\nSum of all even numbers = " << even_total;
  std::cout << "\n-----------------------------";
  //print numbers ODD
  std::cout << "\nList of odd numbers...\n";
  for(int i = 0; i < odd.size(); i++) {
    std::cout << odd[i] << " ";
  }
  std::cout << "\nSum of all odd numbers = " << odd_total;


}