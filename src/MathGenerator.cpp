#include "MathGenerator.hpp"

MathGenerator::MathGenerator() : difficulty(1) {
    std::srand(static_cast<unsigned int>(std::time(NULL))); // Seed the random number generator
}

void MathGenerator::generateOperands() {
    operands[0] = difficulty + (std::rand() % 89);
    operands[1] = difficulty + (std::rand() % 89);
}

int MathGenerator::getOperand(int index) const {
    return operands[index];
}

int MathGenerator::getCorrectAnswer() const {
    return operands[0] + operands[1];
}

void MathGenerator::setDifficulty(int level) {
    difficulty = level;
}