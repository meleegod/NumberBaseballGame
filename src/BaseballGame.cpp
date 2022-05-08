#include "../include/BaseballGame.h"
#include <iostream>
#include <random>
#include <time.h>

using namespace std;  

BaseballGame::BaseballGame()
{
    answerNumberString = "";
    userNumberString= "";
    numOfStrike = 0;
    numOfBall = 0;
    m_isGameDone = false;
}
bool BaseballGame::isGameDone()
{
    return m_isGameDone;
}
void BaseballGame::initialize()
{
    answerNumberString = "";
    userNumberString= "";
    numOfStrike = 0;
    srand(time(NULL));
    generate3DgitRandomNumber();
}
int BaseballGame::getNumOfStrike()
{
    return numOfStrike;
}
bool BaseballGame::isNumber(char ch)
{
    bool res = false;

    if(ch >='0' && ch <= '9')
    {
        res = true;
    }

    return res;
}

bool BaseballGame::isInputNumberWrong()
{
    bool res = false;
    //숫자를 입력했더라도 3자리인지 확인합니다.
    if(userNumberString.size() != 3)
    {
        res = true;
    }
    else 
    {
        for(int i = 0; i < 3; i++)
            if(!isNumber(userNumberString[i]))
            {
                res = true;
                break;
            }
    }
    return res;
}

void BaseballGame::input()
{
    //사용자가 숫자를 잘못 입력하게된 경우 
     userNumberString = "";
    while(isInputNumberWrong()) 
    {
        cout << "Enter 3 digit number" << endl;
        cin >> userNumberString;
    }
}
void BaseballGame::judge()
{
    numOfStrike = numOfBall = 0;
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(userNumberString[i] == answerNumberString[j])
            {
                if(i == j) 
                    numOfStrike++;
                else   
                    numOfBall++;
            }
        }
    }
}
void BaseballGame::output()
{
    cout << "Strike(";
    cout << numOfStrike;
    cout << "), ";
    cout << "Ball(";
    cout << numOfBall;
    cout << ")" << endl;

    char yesorno;
    if (numOfStrike == 3)
    {
        cout << "Correct Number!" << endl;
        cout << "Do you want to play again(Y/N)" << endl;
        cin >> yesorno;

        if(yesorno == 'Y' || yesorno == 'y')
            m_isGameDone = false;
        else if(yesorno == 'N' || yesorno == 'n')
            m_isGameDone = true;
    }
}

void BaseballGame::generate3DgitRandomNumber()
{
    bool hasNumber[10] = {
        false,
    };
    int number;

    number = rand() % 10;
    answerNumberString += to_string(number);
    hasNumber [number] = true;

    number = rand() % 10;
    while(hasNumber [number]) 
    {
        number = rand() % 10;
    }
    answerNumberString += to_string(number);
    hasNumber [number] = true;


    number = rand() % 10;
    while(hasNumber [number]) {
        number = rand() % 10;
    }
    answerNumberString += to_string(number);

    cout << answerNumberString << endl;
}
