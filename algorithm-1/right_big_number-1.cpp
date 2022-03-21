/**
 * @file right_big_number-1.cpp
 * @author colson (dud3722000@naver.com)
 * @brief baekjoon - 17298
 * @version 0.1
 * @date 2022-03-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <list>

std::list<int> li;
int main(int argc, char *argv[])
{
    int n, number;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> number;
        li.push_back(number);
    }
    for (auto it = li.begin(); it != li.end(); it++) {
        
    }
}