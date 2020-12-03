#include <iostream>
#include <vector>
#include <algorithm>
std::vector<double> reversed(const std::vector<double> &v)
{
    std::vector<double> vectornew;
    int size = v.size();
    for (int i = size - 1; i >= 0; i--)
    {
        vectornew.push_back(v[i]);
    }
    for (double value : vectornew)
    {
        std::cout << value << ";";
    }
    std::cout << std::endl;
    return vectornew;
}

int main()
{
    std::vector<double> a = {1, 100, 22, 99};
    reversed(a);

    std::cout << "----Original-Variable bleibt unverändert-----" << std::endl;
    for (double value : a)
    {
        std::cout << value << ";";
    }
    std::cout << std::endl;
}