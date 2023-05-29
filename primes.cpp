#include <iostream>
#include <vector>

bool is_prime(int n) { // Checks every number from "counter" to 1
    for(int i = n/2; i > 1; i--) {
        if(n % i == 0 || n <= 1) {
            return false;
        }
    }
    return true;
}

std::vector<int> prime_generator(int counter) { // 
    std::vector<int> primes;
    int num = 2;
    while(primes.size() < counter) {
            if(is_prime(num)) {
                primes.push_back(num);
            }
        num++;
    }
    return primes;
}


int main() {
    int counter;
    std::cout << "--------------------------------------------";
    std::cout << "\n\n      PRIME GENERATOR";
    std::cout << "\n\nHOW MANY PRIMES WOULD YOU LIKE TO GENERATE?";
    std::cout << "\n\nEnter : ";
    std::cin >> counter;
    std::cout << "\n\n--------------------------------------------\n";
    std::vector<int> prime = prime_generator(counter);
    
    for(int num : prime) {
        std::cout << " " << num;
    }
}
