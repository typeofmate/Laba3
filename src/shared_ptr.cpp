#include <iostream>
#include <memory>

int main() 
{
    auto cat = std::make_shared<std::string>("Гарик");
    {
        auto catCopy = cat; // Счетчик: 2
        std::cout << *catCopy << " и " << *cat << std::endl;
    } // 1
    std::cout << *cat << " остался" << std::endl;
    return 0; // 0 получается объект удален
}