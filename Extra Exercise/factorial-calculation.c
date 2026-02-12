#include <stdio.h>

int recursive_factorial(int n) {
  
    // Base Case:
    if (n == 1) {
        return 1;
    }
    return n * recursive_factorial(n - 1);
}


int iterative_factorial(int num) {
    int fact = 1, i;

    
    // Loop from 1 to N to get the factorial
    for (i = 1; i <= num; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int num;

    printf("Enter the Positive number:- ");
    scanf("%d",&num);

     if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\\n");
    } 
    else {
            int fact = iterative_factorial(num);
            printf("Iterative_factorial of %d is %d", num, fact);

            printf("\n Recursive_Factorial of %d is %d", num, recursive_factorial(num));
        }
    return 0;
}
