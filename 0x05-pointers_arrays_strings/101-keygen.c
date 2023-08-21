#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 277

int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    int i;
    int randomValue;
    
    srand(time(0)); /* Seed the random number generator with the current time */
    
    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        /* Generate a random ASCII value between 33 and 126 (inclusive) */
        randomValue = rand() % 94 + 33;
        password[i] = (char)randomValue;
    }
    
    password[PASSWORD_LENGTH] = '\0'; /* Null-terminate the password */
    
    printf("%s\n", password);

    return 0;
}
