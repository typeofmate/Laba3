#include <memory>
#include <fstream>

class FileHandler 
{
    std::unique_ptr<std::ofstream> file;
public:
    FileHandler(const std::string& name) 
    {
        file = std::make_unique<std::ofstream>(name);
        *file << "RAII";
    }
};

int raii() 
{
    FileHandler fh("test.txt"); // Файл доожен закрыться автоматически
    return 0;
}