#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "bundledMath.h"

int main() {
    const unsigned int userInputLength = 100;
    //int i = 0;
    char userInput[userInputLength];
    while(true)
    {
        scanf("%s", userInput);
        printf("%i", charToInt(userInput[0])); //TESTING
        printf("\n%s\n", userInput);
        //i++;
    }
    
}
