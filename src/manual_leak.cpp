#include <iostream>

void create_leak() 
{
    for (int i = 0; i < 100; ++i) 
    {
        int* ptr = new int[100]; // Утечка не добавил delete
    }
}

int main() 
{
    create_leak();
    std::cout << "Memory leaked" << std::endl;
    return 0;
}