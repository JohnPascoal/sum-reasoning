#pragma once
#include "MathGenerator.hpp"
#include "Display.hpp"

class TestManager
{
    public:
        TestManager();
        TestManager(int totalQuestions);
        void startTest();
        void runQuestion();
        void endTest();
    private:
        MathGenerator mathGen;
        Display display;
        int correctAnswers;
        int wrongAnswers;
        int totalQuestions;
        double  startTime;
        double  endTime;
};