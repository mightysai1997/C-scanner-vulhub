#include <iostream>
#include <cstring>

// Insecure function to hash a password using strlen
unsigned int insecureHash(const char* password) {
    return strlen(password); // Insecure hash function using strlen
}

int main() {
    const char* password = "password123";
    unsigned int hash = insecureHash(password);

    std::cout << "Password: " << password << std::endl;
    std::cout << "Hash: " << hash << std::endl;

    return 0;
}
