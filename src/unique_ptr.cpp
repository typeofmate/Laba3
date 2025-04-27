#include <iostream>
#include <memory>

void no_leak() 
{
    for (int i = 0; i < 100; ++i) 
    {
        auto ptr = std::make_unique<int[]>(100); // по факту добавил автоматическое освобождение
    }
}

int main() 
{
    no_leak();
    std::cout << "No leaks!" << std::endl;
    return 0;
}