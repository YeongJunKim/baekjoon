/**
 * @file alphabet_number-1.cpp
 * @author colson (dud3722000@naver.com)
 * @brief baekjoon - 10808
 * @version 0.1
 * @date 2022-04-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

int main(int argc, char *argv[])
{
    std::string str;
    std::cin >> str;

    int nums[26] = {0,};

    int size = str.size();
    
    for(int i = 0; i < size; i ++)
    {
        nums[str[i]-'a']++;
    }

    for(int i = 0; i < 26; i ++)
    {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}