#include <algorithm>
#include <vector>
#include <iostream>
#include <utility>

std::pair<int, int> kleinUndGross(std::vector<int> x)
{
    std::sort(x.begin(), x.end());
    std::pair<int, int> p1 = {x[0], x[x.size() - 1]};
    std::cout << "Der kleinste Wert ist " << p1.first << std::endl;
    std::cout << "Der größte Wert ist " << p1.second << std::endl;
    return p1;
}

int main()
{

    //Vector<int>
    std::vector<int> v1 = {1, 3, 200, 99, 10};
    kleinUndGross(v1);
}

/*
std::pair<std::string, std::string> kleinUndGross(std::vector<std::string> x)
{
    std::sort(x.begin(), x.end());
    std::pair<std::string, std::string> p1 = {x[0], x[x.size() - 1]};
    std::cout << "Der kleinste Wert ist " << p1.first << std::endl;
    std::cout << "Der größte Wert ist " << p1.second << std::endl;
    return p1;
}
int main()
{

    //Vector<std::string>
    std::vector<std::string> v2 = {"Berlin", "Heidelberg", "Jena", "Bonn"};
    kleinUndGross(v2);
    std::cout << "-----------------" << std::endl;
}
*/
