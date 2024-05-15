// Q.1) ->  Write A Program In C++ Returning Starting Locations Of A Sub String Using Pointers.

#include <iostream>
#include <cstring>
#include <vector>

std::vector<int> findSubstring(const char *str, const char *sub) {
    std::vector<int> positions;
    const char *p = str;
    while ((p = std::strstr(p, sub)) != NULL) {
        positions.push_back(p - str);
        p = p + std::strlen(sub); // Move p to the next character after the found substring
    }
    return positions;
}

int main() {
    const char *str = "Hello, Hello, Hello, World!";
    const char *sub = "Hello";

    std::vector<int> positions = findSubstring(str, sub);

    if (positions.empty()) {
        std::cout << "Substring not found.\n";
    } else {
        std::cout << "Substring found at positions: ";
        for (size_t i = 0; i < positions.size(); ++i) {
            std::cout << positions[i] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
