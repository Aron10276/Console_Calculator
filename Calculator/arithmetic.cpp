#include <iostream>
#include "arithmetic.hpp"

using namespace get;

std::string basicCalc() {
    std::string word{ "basics" };
    return word;
}

#ifdef GEO
std::string geoCalc() {
    std::string word{ "geometric" };
    return word;
}
#endif


    int get::num(std::string key) {
        if (key == "basics") {
            operate::messageOut(); // questions for arithmetic calculator
        }
        
        int getVal{};
        std::cin >> getVal;
        return getVal;
    }

    void operate::messageOut() {
        std::cout << "Please input the two numbers"
            << "\nthen select the operation you wish to use for those two numbers\n";
        std::cout << "select a key to input from '1, 2, 3, 4' to perform operation\n 1 -- addition \n 2 -- subtraction"
            "\n 3 -- multiplication \n 4 -- division" << "\n Enter: ";
    }

    float get::firstValue() {
        std::cout << "Enter the first number: ";
        float numOne{};
        std::cin >> numOne;
        return numOne;
    }

    float get::secondValue() {
        std::cout << "Enter the second number: ";
        float numTwo{};
        std::cin >> numTwo;
        return numTwo;
    }

    void operate::add() {
        std::cout << "This is addition" << std::endl;
        float sum{ get::firstValue() + get::secondValue() };
        std::cout << "The sum is: " << sum;
    }

    void operate::subtract() {
        std::cout << "This is subtraction" << std::endl;
        float difference{ get::firstValue() - get::secondValue() };
        std::cout << "The difference is: " << difference;
    }

    void operate::multiply() {
        std::cout << "This is Multiplication" << std::endl;
        float product{ get::firstValue() * get::secondValue() };
        std::cout << "The product is: " << product;
    }

    void operate::division() {
        std::cout << "This is Division" << std::endl;
        float quotient{ get::firstValue() / get::secondValue() };
        std::cout << "The quotient is: " << quotient;
    }

    void operate::exit() {
        using namespace std;
        cout << "\ndo you want to exit?\n" << "Yes or No?\n" << ": ";
            if (get::string() == "No")
            {
                cout << endl << endl;
                operate::cases(get::num(basicCalc()));
            }
            else
            {
                std::cout << "exited";
            }

        }

        
    

    std::string get::string() {
        std::string word{""};
        std::cin >> word;
        return word;
    }

    void operate::cases(int theVal){
        using namespace operate;
        switch (theVal)
        {
        case 1:
            add();
            return exit();
        case 2:
            subtract();
            return exit();
        case 3:
            multiply();
            return exit();
        case 4:
            division();
            return exit();
        default: std::cout << "your input is out of range, no calculations for you";
            return exit();
        }
    }


