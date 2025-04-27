#include <iostream>
#include <memory>

#include <iostream>
#include <memory>

int main() {
    std::weak_ptr<std::string> weakName;
    {
        auto sharedName = std::make_shared<std::string>("�����");
        weakName = sharedName;

        if (auto temp = weakName.lock()) {
            std::cout << "���: " << *temp << std::endl;
        }
    } // sharedName ������

    if (weakName.expired()) {
        std::cout << "������ ������!" << std::endl;
    }
    return 0;
}