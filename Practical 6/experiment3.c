//* Ayushi Kumari*/
/* ERP 10362 */
#include <stdio.h>

int main() {
    int pin, correctPin = 1234, attempts = 3;

    while (attempts > 0) {
        printf("Enter PIN (%d attempts left): ", attempts);
        scanf("%d", &pin);

        if (pin == correctPin) {
            printf("Access Granted!\n");
            return 0;
        } else {
            printf("Incorrect PIN.\n");
            attempts--;
        }
    }
    printf("Account Locked.\n");
    return 0;
}
/* Output:
   Enter PIN (3 attempts left): 1111
   Incorrect PIN.
   Enter PIN (2 attempts left): 1234
   Access Granted!
*/

