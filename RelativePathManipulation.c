#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

namespace fs = std::filesystem;

void readFile(const std::string& filename) {
    std::string basePath = "/var/data/";
    std::string fullPath = basePath + filename;  // Concatenating user input with base path

    if (fs::exists(fullPath) && fs::is_regular_file(fullPath)) {
        std::ifstream file(fullPath);
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
        file.close();
    } else {
        std::cerr << "Error: File does not exist or is not a regular file: " << filename << std::endl;
    }
}

int main() {
    std::string userFile;
    
    std::cout << "Enter the filename to read: ";
    std::cin >> userFile;  // User input directly used in file path concatenation

    // Calling function to read the file
    readFile(userFile);

    return 0;
}
