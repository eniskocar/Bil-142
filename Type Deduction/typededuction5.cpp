#include <iostream>

int main()
{
    int a[] = {10, 20, 30, 40};
    auto p = a;
    auto& r = p;
    ++r;
    ++p;
    std::cout << *r << "\n";
}
