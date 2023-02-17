/*
 * Title: Problem_5.cpp
 * Date: January 8th, 2023
 * Author: Jack Bennett
 * Version: 1.0
 */

/* Documentation
 *
 * Program Purpose: Create and interactive help system for C++ programming.
 * Present information on: if statements, switch statements, for loops, while loops, and do-while loops.
 *
 * Classes: N/A
 *
 * Notes: N/A
 *
 * Variables:
 * i: integer  - counter variable in for loop
 * j: integer - counter variable in nested  for loop
 *
 */


/*
 * Test Plan:
 *
 * Normal Case:
 *  Presents all prime numbers from 1 to 10,000 correctly
 *
 *Bad case:
 * Presents all prime numbers from 1 to 10,000 incorrectly
 *
 */

#include <iostream>
int main() {

    // main for loop. starts at 2 goes to 10,000
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

return 0;
}
