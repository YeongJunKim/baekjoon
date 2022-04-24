/**
 * @file right_big_number-2.cpp
 * @author colson (dud3722000@naver.com)
 * @brief baekjoon - 17298
 * @version 0.1
 * @date 2022-03-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <stack>
#include <vector>

int n, number;

int main(int argc, char *argv[])
{
    std::cin >> n;
    std::vector<int> v(n);
    std::vector<int> ans(n, -1);
    std::stack<int> s;

    for (int i = 0; i < n; i++)
        std::cin >> v[i];

    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && v[s.top()] < v[i])
        {
            ans[s.top()] = v[i];
            s.pop();
        }
        s.push(i);
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << ans[i] << " ";
    }
}