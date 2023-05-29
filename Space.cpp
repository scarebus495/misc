#include <iostream>
#include <string>

int main() {
  
  //init variables
  double weight;
  double new_weight;
  int sel;
  std::string planet;

  //Ask Earth Weight
  std::cout << "What is your weight on Earth? ";
  std::cin >> weight;

  //Ask which planet
  std::cout << "Here are the selections, type and hit enter for the corresponding number\n";
  std::cout << "*************************************************************************\n";
  std::cout << "1 : Mercury       2 : Venus       3 : Mars        4 : Jupiter\n";
  std::cout << "5 : Saturn        6 : Uranus      7 : Neptune\n";
  std::cout << "*************************************************************************\n";
  std::cin >> sel;
  
  //Convert Earth weight to new weight
  switch(sel) {
    case(1) :
      new_weight = weight * 0.38;
      planet = "Mercury";
      break;
    case(2) : 
      new_weight = weight * .91;
      planet = "Venus";
      break;
    case(3) : 
      new_weight = weight * .38;
      planet = "Mars";
      break;
    case(4) :
      new_weight = weight * 2.34;
      planet = "Jupiter";
      break;
    case(5) :
      new_weight = weight * 1.06;
      planet = "Saturn";
      break;
    case(6) :
      new_weight = weight * .92;
      planet = "Uranus";
      break;
    case(7) :
      new_weight = weight * 1.19;
      planet = "Neptune";
      break;
  }

  //Output desired weight
  std::cout << "Your weight will be " << new_weight << "lbs on the planet, " << planet << ".\n";
  
  return 0;
  
}