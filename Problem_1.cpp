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
        for ( j = 1; j <= 12; j++) {
            multi = num * j; // multiplying num * j

            if (multi <= 9) {
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





}
