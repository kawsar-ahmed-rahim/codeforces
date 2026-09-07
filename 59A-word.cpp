#include <iostream>
#include <string>
#include <cctype> // Required for std::isupper and std::islower

int main() {
    std::string word = "Programming101";
    
    // Initialize counters
    int capitalCount = 0;
    int smallCount = 0;
    int otherCount = 0; // For numbers, spaces, and symbols

    // Loop through every character
    for (char letter : word) {
        if (std::isupper(letter)) {
            capitalCount++;
        } else if (std::islower(letter)) {
            smallCount++;
        } else {
            otherCount++;
        }
    }

    // Print the results
    std::cout << "Word: " << word << "\n\n";
    std::cout << "Capital letters: " << capitalCount << "\n";
    std::cout << "Small letters:   " << smallCount << "\n";
    std::cout << "Other characters: " << otherCount << "\n";

    return 0;
}
