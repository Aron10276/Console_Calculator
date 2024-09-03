#include <iostream>
#include "arithmetic.hpp"

#include <iostream>

void ARITHMETIC_CALCULATOR() {
    std::cout << "choose your operation: '+', '-', '*', '%' \n" << "choose: ";
    char option{ };
    std::cin >> option;
    float first{ };
    std::cin >> first;
    float second{ };
    std::cin >> second;

    switch(option){
        case '+': {
            std::cout << "The Sum is: " << first + second;
        } break;
        case '-': {
            std::cout << "The Difference is: " << first - second;
        } break;
        case '*': {
            std::cout << "The Product is: " << first * second;
        } break;
        case '/': {
            if (second != 0){
            std::cout << "The Quotient is: " << first / second;}
            else {
                std::cout << "undefined";
            }
        } break;
    }
}

