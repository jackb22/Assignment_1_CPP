#include <iostream>

int main() {

    // Loop through all numbers from 1 to 10000
    for(int i = 1; i <= 10000; i++) {
        // Check if each number is prime
        for(int j = 2; j < i; j++) {
            // If i is divisible by j, it is not a prime number
            if(i % j == 0) {
                // Break out of inner loop
                break;
            }
            // If j has reached i-1 and there was no break, i is a prime number
            if(j == i - 1) {
                // Print the prime number
                std::cout << i << std::endl;
            }
        }
    }


}
