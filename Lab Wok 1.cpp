#include <iostream>

int main() {
    const float x = 9.0;
    const float y = 8.3;
    const float z = 2.2;

    const float result = ((13 * z) - (1.5 * fmod(x, 4)) + ((13 * z) / (y * x) - 13)) / ((2.54 * z) + (12 * (y / z)));

    std::cout << "Result = " << result;
}