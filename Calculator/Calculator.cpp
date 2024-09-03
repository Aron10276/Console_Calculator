#include <iostream>
#include <arithmetic.hpp>

float getValue(){
    float val{ };
    std::cin >> val;
    return val;
}

int main() {
    std::cout << "choose your operation: '+', '-', '*', '%'";
    char option{ };
    std::cin >> option;

    if (option == '+'){
                  float addFirst{ getValue() };
                  std::cout << " + ";
                  float addSecond{ getValue() };
                  std::cout << "\n" << "The sum is: " << addFirst + addSecond;
       }
}



