#include <iostream>

int main() {

// declaring variables
char input; // variable to hold user input


// if statement
// https://www.w3schools.com/cpp/cpp_conditions.asp
//switch statement
//https://www.w3schools.com/cpp/cpp_switch.asp
// for loop
// https://www.w3schools.com/cpp/cpp_for_loop.asp
// while loop
//https://www.w3schools.com/cpp/cpp_while_loop.asp
// do while loop
// https://www.w3schools.com/cpp/cpp_do_while_loop.asp






    // do while loop to allow user to select menu options until they exit
    do{
        // outputting menu options to user
        std::cout<<std::endl; // adding space between menu and previous output
        std::cout<< "C++ Help Menu" << std::endl;
        std::cout<<"Select Help on: "<<std::endl;
        std::cout<<"1. If"<<std::endl;
        std::cout<<"2. Switch"<<std::endl;
        std::cout<<"3. For"<<std::endl;
        std::cout<<"4. While"<<std::endl;
        std::cout<<"5. Do-while"<<std::endl;
        std::cout<<"x. Exit"<<std::endl;
        std::cout<<std::endl; // adding space between menu and previous output

        // taking input from user
        std::cout <<"Selection: ";
        std::cin>>input;

        //Switch statement to handle output
        switch(input){
        case '1':
            std::cout<<std::endl;
            std::cout<<"A if statement is used to test a condition and execute a block of code if the evaluation of the boolean expression is true."<<std::endl;
            std::cout<<std::endl;
            break;
        case '2':
            std::cout<<std::endl;
            std::cout<<"A switch statement allows a program to execute different blocks of code based on a value of a variable that is passed through." <<std::endl;
            std::cout<<"It is comprised of multiple cases (each of which represents a possible value of the variable) and a default case"<<std::endl;
            std::cout<<"(which is executed if none of the cases match the variable value). "<<std::endl;
            std::cout<<"The case values are hardcoded, and a break statement is used to terminate each case and prevent the execution of subsequent code blocks." <<std::endl;
            std::cout<<std::endl;
            break;
        case '3':
            std::cout<<std::endl;
            std::cout<<"A for loop allows a program to execute a block of code repeatedly for a fixed number of times, based on a counter or condition in the loop."<<std::endl;
            std::cout<<"A for loop has three statements within it. A initialization statement which is executed once to initialize the loop counter or variable. "<<std::endl;
            std::cout<<"The  second statement is the condition. This is a boolean expression that gets evaluated before each iteration of the loop."<<std::endl;
            std::cout<<"Once the condition becomes false the loop terminates. The third statement is executed at the end of each iteration and is used to update the loop counter or variable. "<<std::endl;
            break;
        case '4':
            std::cout<<std::endl;
            std::cout<<"A while statement  evaluates  a condition and executes a block of code repeatedly until the evaluation of the boolean expression is false."<<std::endl;
            std::cout<<std::endl;
            break;
        case '5':
            std::cout<<std::endl;
            std::cout<<"A do-while loop allows a program to execute a block of code at least once, and then repeatedly as long as the condition is true. "<<std::endl;
            std::cout<<"The code inside the 'do' block is executed once and then condition is evaluated."<<std::endl;
            std::cout<<"The difference between a do-while and a while loop is that the block of code is executed at least once, "<<std::endl;
            std::cout<<"and then the condition is evaluated, where as the while loop the block of code only runs if the condition is true. "<<std::endl;
            std::cout<<std::endl;
            break;
        case 'x':
            std::cout<<std::endl;
            std::cout<<"Thank you. Goodbye."<<std::endl;
            break;
        default: // setting default case to handle invalid input
            std::cout<<std::endl;
            std::cout<<"Invalid input."<<std::endl;
            break;
    }
    }while(input != 'x'); // loop will continue until user enters 'x' to exit

}

