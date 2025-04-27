#include <iostream>
#include <memory>

#include <iostream>
#include <memory>

int main() {
    std::weak_ptr<std::string> weakName;
    {
        auto sharedName = std::make_shared<std::string>("Алиса");
        weakName = sharedName;

        if (auto temp = weakName.lock()) {
            std::cout << "Имя: " << *temp << std::endl;
        }
    } // sharedName удален

    if (weakName.expired()) {
        std::cout << "Объект удален!" << std::endl;
    }
    return 0;
}