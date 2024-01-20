/*  
    CIS 3207 Section 02
    Terrell Heyward
    Jan 19 2024
*/

//  Code would not run without following include statement
#include <stdlib.h>

//  Function to return random character
char randchar() {

    /*  
        Set character to random number between 26 and 65, the ASCII range for uppercase letters A-Z
        using following equation :
    
        RANDOM NUMBER % (MAX + 1 - MIN) + MIN
    */

    char c = rand() % 26 + 65;

    return c;
}
