#include "TestManager.hpp"

TestManager::TestManager() : correctAnswers(0), wrongAnswers(0), totalQuestions(5), startTime(0), endTime(0) {}

TestManager::TestManager(int totalQuestions) : correctAnswers(0), wrongAnswers(0), totalQuestions(totalQuestions), startTime(0), endTime(0) {

}

void TestManager::startTest()
{
    display.printWelcomeMessage();
    std:: cout << "You will be asked " << totalQuestions << " questions." << std::endl;
    mathGen.setDifficulty(10); // Set difficulty level to 1 for now
    startTime = static_cast<double>(std::time(NULL));
    const double timeLimit = 120.0;
    for (int i = 0; i < totalQuestions; ++i)
    {
        const double currentTime = static_cast<double>(std::time(NULL));
        if (currentTime - startTime >= timeLimit)
        {
            std::cout << "Time's up!" << std::endl;
            break;
        }
        runQuestion();
    }
    endTest();
}

void TestManager::runQuestion()
{
    mathGen.generateOperands();
    int op1 = mathGen.getOperand(0);
    int op2 = mathGen.getOperand(1);
    display.displayQuestion(op1, op2);
    int userAnswer = display.getUserInput();
    if (userAnswer == mathGen.getCorrectAnswer())
    {
        ++correctAnswers;
    }
    else
    {
        ++wrongAnswers;
    }
}

void TestManager::endTest()
{
    endTime = static_cast<double>(std::time(NULL));
    display.showResults(correctAnswers, wrongAnswers, endTime - startTime);
}