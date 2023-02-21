// Tutorial 022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int getDouble() 
{
    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;
    return x; 
}

char getOperator()
{
    std::cout << "Enter one of the following: +, -, /, or * : ";
    char mathoperator{};
    std::cin >> mathoperator;
    return mathoperator; 
}

void printResult(double x, double y, char operation)
{
    if (operation == '+')
        std::cout << "x " << " + " << " y is " << x + y;
    else if (operation == '-')
        std::cout << "x " << " - " << " y is " << x - y;
    else if (operation == '*')
        std::cout << "x " << " * " << " y is " << x * y;
    else if (operation == '/')
        std::cout << "x " << " / " << " y is " << x / y;
}

int main()
{
    int x{ getDouble() };
    int y{ getDouble() }; 

    char mathoperator{ getOperator() }; 

    printResult(x, y, mathoperator);

    return 0; 
    
}