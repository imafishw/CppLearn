#include <iostream>

float array_sum(const float arr[], int size) {
    float sum = 0.0f;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}
int main() {
    const int SIZE = 5;
    float myArray[SIZE] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    float result = array_sum(myArray, SIZE);
    std::cout << "The sum of the array is: " << result << std::endl;
    return 0;
}