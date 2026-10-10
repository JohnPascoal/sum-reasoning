#include "Display.hpp"

Display::Display() {}

void Display::printWelcomeMessage() const
{
    std::cout << "Welcome to the Math Quiz!" << std::endl;
}

void Display::displayQuestion(int op1, int op2)
{
    std::cout << "What is " << op1 << " + " << op2 << "? ";
}

int Display::getUserInput() const
{
    int answer;
    std::cin >> answer;
    return answer;
}

void Display::showResults(int correct, int wrong, double timeElapsed) const
{
    std::cout << "Results:" << std::endl;
    std::cout << "Correct: " << correct << std::endl;
    std::cout << "Wrong: " << wrong << std::endl;
    std::cout << "Time: " << timeElapsed << " seconds" << std::endl;
}