#include <vector>
#include <iostream>


// Aufgabe 1a
int main()
{ // Ein leerer vector anlegen
    std::vector<double> v1;
    for (double value : v1)
    {
        std::cout << value << std::endl;
    }

    std::cout << "-----------------" << std::endl;

    /* Ein Vector mit fünf Einträgen, für diese Einträge habe ich keine expliziten Wert angegeben, sie sind null.*/

    std::vector<double> v2(5);
    for (double value : v2)
    {
        std::cout << value << std::endl;
    }

    std::cout << "-----------------" << std::endl;

    // Ein Vector mit Einträgen 3.1, 3.2, 3.3
    std::vector<double> v3 = {3.1, 3.2, 3.3};
    for (double value : v3)
    {
        std::cout << value << std::endl;
    }
}


