// Q.2) -> Write a program to read content from text file and display it on console window
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("example.txt"); // Open the file

    if (!file.is_open()) { // Check if the file is opened successfully
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) { // Read file line by line
        std::cout << line << std::endl; // Display each line on console
    }

    file.close(); // Close the file
    return 0;
}
