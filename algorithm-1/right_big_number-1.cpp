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
#include <vector>

int n, number;

int main(int argc, char *argv[])
{
    std::cin >> n;
    std::vector<int> li(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> li[i];
    }

    for (auto it = li.begin(); it != li.end(); it++)
    {
        auto jt = ++it;
        it--;
        int big = -1;
        while (jt != li.end())
        {
            if (*jt > *it)
            {
                big = *jt;
                break;
            }
            jt++;
        }
        std::cout << big << " ";
    }
    std::cout << std::endl;
}