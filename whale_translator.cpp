#include <iostream>
#include <vector>
#include <string>

int main() {

    //init vectors
    std::string human = "What the fuck did you just say about me you little shit. I'll have you know I was top of my class\nat the navy seals. I have over 300 confirmed kills.";
    std::vector<char> whale;

    //init vowels
    std::vector<char> vowels = {'a','e','i','o','u'};

    //translate time
    for(int i = 0; i < human.size(); i++) {
        for(int o = 0; o < vowels.size(); o++) {
            if(human[i] == vowels[o]) {
                whale.push_back(human[i]);
                    if(human[i] == 'o' || human[i] == 'u') {
                        whale.push_back(human[i]);
                    }
            }
        }
    }
    
    //print time
    std::cout << human << "\n\n-Roughly translates to-\n\n";
    for(int i = 0; i < whale.size(); i++) {
        std::cout << whale[i];
    }
    std::cout << "\n";













}