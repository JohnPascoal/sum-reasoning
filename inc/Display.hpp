#pragma once
#include <iostream>

class Display 
{
    public:
        Display();
        void printWelcomeMessage() const;
        void displayQuestion(int op1, int op2);
        int getUserInput() const;
        void showResults(int correct, int wrong, double timeElapsed) const;
    private:
};