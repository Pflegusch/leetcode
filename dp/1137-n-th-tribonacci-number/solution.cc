#include <iostream>
#include <stdlib.h>
#include <vector>

class Solution
{
public:
    int tribonacci(int n)
    {
        std::vector<int> array(n + 3, 0);
        array[0] = 0;
        array[1] = 1;
        array[2] = 1;

        for (int i = 0; i <= n - 3; i++)
        {
            array[i + 3] = array[i] + array[i + 1] + array[i + 2];
        }

        return array[n];
    }
};

int main(int argc, char **argv)
{
    Solution solution;
    for (int i = 0; i <= 37; i++)
    {
        std::cout << solution.tribonacci(i) << std::endl;
    }
    return 0;
}