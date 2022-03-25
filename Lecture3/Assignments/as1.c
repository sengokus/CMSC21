#include <stdio.h>
#include <stdbool.h>

int main(void) {

    /* Initializing data types for variables. 
        age is a test variable.*/
    int age = 5; bool teenager;

    /* Sets range for variable teenager. */
    teenager = (age >= 13 && age <= 19);

    /* Uses a ternary operator to determine if variable age is within the set range of variable teenager. 
        expressionOne = TRUE
        expressionTwo = FALSE*/
    printf("%s", teenager ? "You are a teenager." : "You are not a teenager.");
}