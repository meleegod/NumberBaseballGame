# Program Requiremnets 

1. 3자리 random 숫자 생성
2. 3자리 숫자 입력 받기
3. Ball / Strike 판단
4. Message 출력


#TOD list

1. 3자리 random 숫자 생성
    - answerNumberString = generate3DigitRandoeNumber
        - Random함수 사용해서 3자리 숫자 생성
        - 숫자를 문자열로 변환
        - 3자리 문자열 숫자를 return 
2. 3자리 숫자 입력 받기
    - userNumberString = input3DigitNumber()
        - 문자열로 3자리 숫자 입력 받기
        - 3자리 문자열 숫자를 return 

3. Ball / Strike 판단
    - numOfStrike = countStrike()
        - 동일한 위치의 문자를 비교해서 strike를 판단
        - strike  개수를 숫자로 return 
        - 
    - numOfball = countBall()
        - 서로 다른 위치의 문자를 비교해서 ball 판단
        - ball 개수를 숫자로 return
4. Message 출력
    - output()
        -Strike(numOfStrike), Ball(numOfBall) 형식으로 출력# 
