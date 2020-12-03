#include <iostream>
#include <vector>
#include <algorithm>



void reverseVector(std::vector<double> & v)
{
    int size = v.size();
    for (int i = 1; i < size; i++)
    {
        for (int n = 0; n < size - i; n++)
        {
            std::swap(v[n], v[n + 1]);
        }
    }
}

int main()
{
    
    std::vector<double> v1 = {2, 100, 40, 200, 88};
    reverseVector(v1);
    
    for (double value : v1)
    {
        std::cout << value << ";";
    }
    std::cout<<std::endl;
   
}