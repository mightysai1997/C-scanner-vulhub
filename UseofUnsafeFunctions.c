#include <iostream>
#include <cstdlib>
#include <cstdio>

int main() {
    std::string filename;
    
    std::cout << "Enter the filename to read: ";
    std::cin >> filename;  // User input directly used in file path

    // Using unsafe system call to read file
    std::string command = "cat " + filename;
    std::system(command.c_str());

    return 0;
}
