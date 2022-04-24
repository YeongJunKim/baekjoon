/**
 * @file steal_stick-1.cpp
 * @author colson (dud3722000@naver.com)
 * @brief baekjoon - 10799
 * @version 0.1
 * @date 2022-03-27
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <stack>
#include <vector>

int main(int argc, char *argv[])
{
    std::string str;
    std::getline(std::cin, str);
    //추가되는 라인 // 라인에서 잘리는 갯수 만약 2개 레이져면 3개로 잘림
    // 현재의 갯수 + 레이져가 짤리는지 + 막대기가 끝났는지
    std::vector<std::vector<int>> container;

    int sticks;

    char before = '(';
    for (int i = 0; i < str.size(); i++) {
        char now  = str[i];
        
        //laser check
        if(before == '(' && now == ')')
        {
            
        }
        else
        {
            // Check is stick done?
            
        }
    }
    return 0;
}