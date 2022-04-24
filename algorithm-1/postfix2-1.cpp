/**
 * @file postfix2-1.cpp
 * @author colson (dud3722000@naver.com)
 * @brief baekjoon - 1935
 * @version 0.1
 * @date 2022-03-27
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <stack>

double cal(double a, double b, char op)
{
    double res = 0.0;
    switch (op)
    {
    case '+':
        res = b + a;
        break;
    case '-':
        res = b - a;
        break;
    case '*':
        res = b * a;
        break;
    case '/':
        res = b / a;
        break;
    }
    return res;
}

int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;
    std::string str;
    std::cin >> str;

    std::stack<double> s;
    double alphabet[26];

    for (int i = 0; i < n; i++)
    {
        std::cin >> alphabet[i];
    }


    int size = str.size();

    for (int i = 0; i < size; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            s.push(alphabet[str[i] - 'A']);
        }
        else
        {
            double a = s.top();
            s.pop();
            double b = s.top();
            s.pop();
            s.push(cal(a, b, str[i]));
        }
    }

    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << s.top() << '\n';

    return 0;
}
