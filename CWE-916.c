#include <iostream>
#include <cstring>

// CWE-916: Use of Password Hash With Insufficient Computational Effort
// Description:
// This code demonstrates the insecure practice of using a weak hash function (strlen)
// to hash passwords. The strlen function simply returns the length of a string,
// which is not suitable for secure password hashing due to its speed and predictability.
// Password hashes generated in this manner are vulnerable to brute-force attacks
// and can be easily cracked using precomputed hash tables (rainbow tables).

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
