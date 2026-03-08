#include <math.h>
#include <string.h>
#include <stdlib.h>


int charToInt(char inputChar)
{
    int returnValue = 0;
    returnValue = inputChar - '0';
    return(returnValue);
}

int basicFunctionCheck(char* inputString)
{
    int returnValue = 0;
    for (size_t i = 0; i < 3; i++)
    {
        switch(inputString[i])
            case ('+'):
                returnValue = ((inputString[i-1] - '0') + (inputString[i+1] - '0')); //BUGGED, if number is NOT 0-9, fucks up, and IF + or - is first element, prog causes segfaults
                returnValue -= 48;
                break;
    }
    return(returnValue);
}
