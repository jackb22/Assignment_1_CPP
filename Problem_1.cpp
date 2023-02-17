/*
 * Title: Problem_1.cpp
 * Date: January 4th, 2023
 * Author: Jack Bennett
 * Version: 1.0
 */

/* Documentation
 *
 * Program Purpose: Generate a multiplication table that goes from 1x to 12x.
 *
 * Classes: None
 *
 * Notes: n/a
 *
 * Variables:
 * i: int i used as a loop counter to represent the rows of the multiplication table.
 *
 * j: int j used as a loop counter to represent columns of the multiplication table.
 *
 * num: int stores the current value of i during the generation of the multiplication table.
 *
 * multi: int - used to store the result of the multiplication of num and j.
 *
 *columns: int - used as a counter for the number of cells printed on the current row of the
 * multiplication table  to keep track of the remaining cells that need to be filled in.
 *
 */


/*
 * Test Plan:
 *
 * Normal Case:
 * Does the output from my program match the output provided in Problem 1?
 *
 * Bad Case:
 * Output does not match the provided output for problem 1.
 *
 */



#include <iostream>

int main() {

    int i, j, num, multi, columns; // Declaring variables

    // Adding header to the table
    for (i = 0; i <= 12; i++) {
        if (i == 0) {
            std::cout << "\t|\t"; // printing tab and '|' for first cell of header.
        }
        else {
            std::cout << i << "\t|\t"; // printing column #.
        }
        if (i == 12) {
            std::cout << std::endl; // printing new line after the header is done.
        }
    }

// Creating rows of table
    for (i = 1; i <= 12; i++){
        num = i;
        columns = 0; // Initialize column counter
        std::cout << i << "\t|\t"; // print row number

        // Creating columns of table
        for ( j = 1; j <= 12; j++) {
            multi = num * j; // multiplying num * j
            // formatting the table
            if (multi <= 9){
                std::cout << multi << "\t|\t"; // printing values
            }

            else if (multi <= 99) {
                std::cout << multi << "\t|\t"; // printing values
            }

            else if (multi >= 100) {
                std::cout << multi << "\t|\t"; // printing values
            }
            columns++; //incrementing column counter
        }

        // filling in remaining cells of row with empty spaces
        for (int k = columns; k < 12; k++) {
            std::cout << "\t|\t"; // printing tab and '|'
        }
        std::cout << std::endl; // new line to separate each row
    }

    return 0;
}
