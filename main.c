#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    // Declare varaibles
    float numbera;
    float numberb;
    float result;
    char *endptr;

    
    // Checking for 3 arguments
    if (argc != 4) {
        printf("Usage: clicalc <number1> <operator> <number2>\n");
        return 1;
    }


    // Convert argument string to float
    numbera = strtof (argv[1], &endptr);
    
    if (endptr == argv[1]) {
        printf ("Error: Invalid input <number1>\n");
        return 1;
    }
    
    if (*endptr != '\0') {
        printf ("Error: Invalid input <number1>\n");
        return 1;
    }


    numberb = strtof (argv[3], &endptr);
    
    if (endptr == argv[3]) {
        printf ("Error: Invalid input <number2>\n");
        return 1;
    }
    
    if (*endptr != '\0') {
        printf ("Error: Invalid input <number2>\n");
        return 1;
    }


    // Do math
    switch (argv[2][0]) {
        case '+':
            result = (numbera + numberb);
            break;

        case '-':
            result = (numbera - numberb);
            break;

        case '*':
            result = (numbera * numberb);
            break;

        case '/':
            if (numberb == 0) {
                printf("Error: Cannot divide by 0!\n");
                return 1;
            }
            result = (numbera / numberb);
            break;

        default:
            printf("Error: Undefined operator\n");
            return 1;
            break;
    }

    // Print results
    printf("\n%.3f\n", result);


return 0;

}