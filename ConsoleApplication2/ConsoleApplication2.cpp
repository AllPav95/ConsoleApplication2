#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm> 

int main() {
const int arraySize = 26;
char alphabetArray[arraySize];

for (int i = 0; i < arraySize; i++) {
    alphabetArray[i] = 'A' + i;
}
//for (int i = 0; i < arraySize; i++) {
//    std::cout << 'A' << i + 1 << ": " << alphabetArray[i] << std::endl;
//}
std::srand(static_cast<unsigned int>(std::time(nullptr)));

std::random_shuffle(std::begin(alphabetArray), std::end(alphabetArray));

int i = 0;
do {
    char currentChar = alphabetArray[i];
    if (currentChar == '_') {
        std::cout << "  A" << i + 1 << ": " << "_" << std::endl;
    }
    else {
        std::cout << "A" << i + 1 << ": " << currentChar << std::endl;
    }
    ++i;
} while (i < arraySize);

return 0;
}
