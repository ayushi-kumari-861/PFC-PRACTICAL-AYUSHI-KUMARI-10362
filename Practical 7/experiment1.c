/* Ayushi Kumari*/
/* ERP 10362 */
#include <stdio.h>

int main() {
    int n = 3; // Length will be 2(3)-1 = 5 rows
    // Upper Half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++) printf("*");
        printf("\n");
    }
    // Lower Half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++) printf("*");
        printf("\n");
    }
    return 0;
}
/* Output:
  *
 ***
*****
 ***
  *
*/

