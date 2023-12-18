// In this example, we will use 2 functions (one of them will call the other one) and this program will find the biggest one among the 3 of them.
// Created by Mehmet Akif Duran.

#include <stdio.h>

// Function Definition(s)
int maxOf(int a1, int a2){

int max;

    // Finding the bigger value with a small function:
    
        if(a1<a2){
            max = a2;
        } else {
            max = a1;
        }

    return max;
}

int biggestOne(int number1, int  number2, int number3){
    
    // Variable Decleration(s).
    int biggest_one;
    
    // Finding the biggest value among the inputs.
    biggest_one = maxOf(number1,number2);
    biggest_one = maxOf(maxOf(number1,number2), number3);
        
    
    return biggest_one;
}




int main(void){ // Beginnig of the main function
            
    // Variable Decleration(s).
    
    int number1, number2, number3;
    
    // Executable Statement(s).
        
        // Explaning the program to the user.
    
    printf("Welcome, This program will find the biggest integer among the three inputs that you enter. \n");
    
     
        // Taking inputs.
 
    printf("Enter three integers \n");
        scanf("%d%d%d", &number1, &number2, &number3);
    
    printf("------------------------\n");
    
    // Printing the answer.
    printf("The biggest number among  %d, %d, %d is = %d\n", number1,number2,number3, biggestOne(number1,number2,number3));
    
    printf("! ! ! THE PROGRAM ENDS ! ! !\n");
    
    return 0;
} // Ending of the main function. 

