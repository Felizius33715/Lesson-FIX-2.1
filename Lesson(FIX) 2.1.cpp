#include <iostream>

class Calculator {
public:
    double num1 = 0;
    double num2 = 0;
    double add() { return num1 + num2; }
    double multiply() { return num1 * num2; }
    double subtract_1_2() { return num1 - num2; }
    double subtract_2_1() { return num2 - num1; }
    double divide_1_2() { return num1 / num2; }
    double divide_2_1() { return num2 / num1; }
    bool set_num1(double n)
    {
        if (n != 0) { num1 = n; return true;}
        else return false;
    }
    bool set_num2(double n)
    {
        if (n != 0) { num2 = n; return true; }
        else return false;
    }
};
int main()
{
    double num, num0;
    Calculator test;
    while (true) {
        std::cin >> num;
        while (!test.set_num1(num)) {
            std::cout << "! ERROR ! TRY ANOTHER NUMBER! " << std::endl;
            std::cin >> num;
        }
        std::cin >> num0;
        while (!test.set_num2(num0)) {
            std::cout << "! ERROR ! TRY ANOTHER NUMBER! " << std::endl;
            std::cin >> num0;
        }
        std::cout << "add:" << test.add() << std::endl;
        std::cout << "multiply:" << test.multiply() << std::endl;
        std::cout << "subtract first num on second num:" << test.subtract_1_2() << std::endl;
        std::cout << "subtract second num on first num:" << test.subtract_2_1() << std::endl;
        std::cout << "divide first num on second num:" << test.divide_1_2() << std::endl;
        std::cout << "divide second num on first num:" << test.divide_2_1() << std::endl;
    }
}