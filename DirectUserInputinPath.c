#include <iostream>
#include <fstream>
#include <string>

void readFile(const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
        file.close();
    } else {
        std::cerr << "Error: Unable to open file: " << filename << std::endl;
    }
}

int main() {
    std::string userFile;
    
    std::cout << "Enter the filename to read: ";
    std::cin >> userFile;  // User input directly used in file path

    // Calling function to read the file
    readFile(userFile);

    return 0;
}
