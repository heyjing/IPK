#include <cmath>
#include <iostream>
#include <vector>

void runden(std::vector<double> &x)
{
    for (double &value : x)
    {
        value = std::round(value);
    }
}

int main()
{
    //Testen mit Vector mit Einträgen 3.1, 3.11, 3.7
    std::vector<double> v1 = {3.1, 3.11, 3.7};
    runden(v1);
    for (double value : v1)
    {
        std::cout << value << ";";
    }

    std::cout << std::endl;

    //Testen mit Vector mit 2 Einträgen
    std::vector<double> v2(2);
    runden(v2);
    for (double value : v2)
    {
        std::cout << value << ";";
    }

    std::cout << std::endl;
}