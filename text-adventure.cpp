#include <iostream>
//BRAUM'S TEXT ADVENTURE


//ENDING TEXTS
void neutral_ending() {
        std::cout << "\n##########################################################\n\n";
        std::cout << "                  NEUTRAL ENDING\n\n";
        std::cout << "          At least it's finally over...\n";
        std::cout << "\n##########################################################\n";
}

void bad_ending() {
    std::cout << "\n##########################################################\n\n";
    std::cout << "                      BAD ENDING\n\n";
    std::cout << "      You accept your fate and live a misserable life...\n";
    std::cout << "\n##########################################################\n";
}

void good_ending() {
    std::cout << "\n##########################################################\n\n";
    std::cout << "                  GOOD ENDING\n\n";
    std::cout << "     You finally give up this awful life you became so complacent with\n      and move on to better things!";
    std::cout << "\n\n          CONGRATS!!!\n\n";
    std::cout << "##########################################################\n\n";
}

//MAIN BODY
int main(void) {

    

    int input;
    //INTRO
    std::cout << "******************************************************\n";
    std::cout << "\n    WELCOME TO THE BRAUM'S TEXT ADVENTURE\n\n";
    std::cout << "******************************************************\n\n";
    

    //FIRST QUESTION
    
    std::cout << "\n-------------------------------------------------------\n";
    std::cout << "  You wake up in your cockroach infested apartment. Your\n  shift starts in 30 minutes.\n--What do you do?--\n\n";
    std::cout << "  1) Stay in bed      2) Get up       3) Kill yourself";
    std::cout << "\n-------------------------------------------------------\n";
    
    std::cin >> input;  //answer first question

    //RESPONSE first question
    if(input == 1){
        std::cout << "\n  You sleep in and die of a brain aneruism\n";
        neutral_ending();
        return 0;
    } else if(input == 3) {
        std::cout << "\nYou decide enough is enough and take out your gun and \nshoot yourself in the head.\n";
        neutral_ending();
        return 0;
    }

    //SECOND QUESTION
    std::cout << "\n-------------------------------------------------------\n";
    std::cout << "  You get up and arrive at work just in time.\n";
    std::cout << "  It's a total shit show with only Ruben in the kitchen.\n--What do you do?--\n\n";
    std::cout << "  1) Start working and hope the day will get better\n\n  2) Throw your apron on the floor and scream 'FUCK IT I QUIT!' ";
    std::cout << "\n-------------------------------------------------------\n";
    
    std::cin >> input;  //answer second question

    //RESPONSE second question
    if(input == 1) {    //choice 1, leads to last question
        std::cout << "\n-------------------------------------------------------\n";
        std::cout << "  It seems it just keeps getting worse, and you finally\nget an order of 5 bags of burgers.\n--What do you do?--\n";
        std::cout << "  1) Keep working and accept your fate as a shift supervisor for Braum's for the rest of your life...\n";
        std::cout << "  2) Throw your apron on the floor and scream 'FUCK IT I QUIT!'.";
        std::cout << "\n-------------------------------------------------------\n";
        
        std::cin >> input; //answer last question

        //RESPONSE to last question
        if(input == 1) {
            bad_ending();
            return 0;
        }
        else {
            good_ending();
            return 0;
        }
    }
    else {  //RESPONSE to second question choice 2
        good_ending();
        return 0;
    }
}