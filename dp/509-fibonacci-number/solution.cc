#include <iostream>
#include <stdlib.h>

class Solution
{
public:
    int fib(int N)
    {
        if (N == 0 || N == 1)
        {
            return N;
        }
        int *pArray = (int *)malloc(sizeof(N) * (N + 1));
        pArray[0] = 0;
        pArray[1] = 1;
        for (int i = 2; i < N + 1; i++)
        {
            pArray[i] = pArray[i - 1] + pArray[i - 2];
        }
        return pArray[N];
    }
};

int main(int argc, char **argv)
{
    Solution solution;
    std::cout << solution.fib(46) << std::endl;
    return 0;
}