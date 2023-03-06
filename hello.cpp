#include <iostream>
#include <vector>

int main()
{
    std::vector<int> num {1, 2, 3, 4, 5};
    for (int i : num)
    {
        std::cout << i << ' ';
    }
    std::cout << '\n';
    return 0;
}