#pragma once
#include <string>

using namespace std;

class BaseballGame
{
public:
    BaseballGame();
    bool isGameDone();
    void initialize();
    int getNumOfStrike();
    void input();
    void judge();
    void output();


private:
    void generate3DgitRandomNumber();
    bool isInputNumberWrong();
    bool isNumber(char ch);

private:
    string answerNumberString;
    string userNumberString;
    int numOfStrike;
    int numOfBall;
    bool m_isGameDone;
};
