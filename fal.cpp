#include<bits/stdc++.h>
using namespace std;

void primeFactorization(int n) {
    std::vector<int> factors;

    // Divide by 2
    while (n % 2 == 0) {
        factors.push_back(2);
        n = n / 2;
    }

    // Divide by odd numbers starting from 3
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n = n / i;
        }
    }

    // If n is a prime number greater than 2
    if (n > 2) {
        factors.push_back(n);
    }

    // Display the prime factors
    std::cout << "Prime Factors: ";
    for (int factor : factors) {
        std::cout << factor << " ";
    }
    std::cout << std::endl;
}

int main() {
    int number;

    // Input the number to find its prime factors
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Perform prime factorization
    primeFactorization(number);

    return 0;
}
