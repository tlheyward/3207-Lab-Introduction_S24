/*  
    CIS 3207 Section 02
    Terrell Heyward
    Jan 19 2024
*/

//  Return random character
char randchar() {

    /*  
        Set character to random number between 65 and 90, the ASCII range for lowercase letters a-z
        using following equation :
    
        rand() % (MAX + 1 - MIN) + MIN
    */

    char c = rand() % 26 + 65;

    return c;
}
