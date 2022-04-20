#include "../include/BaseballGame.h"
#include <iostream>

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
    numOfStrike;
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
    while(isInputNumberWrong()) 
    {
    cout << "3자리 숫자를 입력해주세요" << endl;
    cin >> userNumberString;
    }
}
void BaseballGame::judge()
{
}
void BaseballGame::output()
{
    cout << "Strike(";
    cout << numOfStrike;
    cout << "), ";
    cout << "Ball(";
    cout << numOfBall;
    cout << ")" << endl;

    if(numOfStrike == 3)
    {
        cout << "숫자를 맞추셨습니다." << endl;
    }
}

void BaseballGame::generate3DgitRandomNumber()
{

}
