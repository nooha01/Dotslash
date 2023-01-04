#include <iostream>
#include <algorithm>

bool check_pattern(int nums[], int n)
{
    for (int i = 0; i < n - 2; i++)
    {
        if (nums[i] < nums[i + 1] && nums[i + 1] > nums[i + 2])
            return true;
    }
    return false;
}

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        int nums[n];
        for (int i = 0; i < n; i++)
            std::cin >> nums[i];
        if (check_pattern(nums, n))
            std::cout << "true" << std::endl;
        else
            std::cout << "false" << std::endl;
    }
    return 0;
}