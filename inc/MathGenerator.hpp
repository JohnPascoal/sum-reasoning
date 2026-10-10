#pragma once
#include <ctime>
#include <cstdlib>

class MathGenerator
{
    public:
        MathGenerator();
        void generateOperands();
        int getOperand(int index) const;
        int getCorrectAnswer() const;
        void setDifficulty(int level);
    private:
        int difficulty;
        int operands[2];
};