#include <iostream>

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    const int maxPrimes = 5;
    int primeArray[maxPrimes];
    int currentNumber = 2;
    int foundPrimes = 0;

    while (foundPrimes < maxPrimes) {
        if (isPrime(currentNumber)) {
            primeArray[foundPrimes] = currentNumber;
            foundPrimes++;
        }
        currentNumber++;
    }

    std::cout << "Stored prime numbers array: ";
    for (int i = 0; i < maxPrimes; i++) {
        std::cout << primeArray[i] << " ";
    }
    std::cout << std::endl;

}