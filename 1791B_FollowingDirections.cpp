#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        int n;
        std::cin >> n;

        std::string input;
        std::cin >> input;
        int x = 0;
        int y = 0;
        int flag = 0;
        for (size_t j = 0; j < n; j++)
        {
            if (input.at(j) == 'L')
            {
                x--;
            }
            else if (input.at(j) == 'R')
            {
                x++;
            }
            else if (input.at(j) == 'U')
            {
                y++;
            }
            else if (input.at(j) == 'D')
            {
                y--;
            }
            
            if (x == 1 && y == 1)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }
}