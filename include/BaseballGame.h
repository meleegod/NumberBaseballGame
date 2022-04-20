#pragma once
#include <string>

using namespace std;

class BaseballGame
{
public:
    bool isGameDone();
    void initialize();
    int getNumOFstrike();
    void input();
    void judge();
    void output();


private:
    void generate3DgitRandomNumber();

private:
    string answerNumberString;
    string userNumberString;
    int numOfStrike;
    int numOfball;
    bool isGameDone;
};