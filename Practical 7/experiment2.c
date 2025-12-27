/* Ayushi Kumari*/
/* ERP 10362 */
#include <stdio.h>

int main() {
    int n = 3; 
    // Top Half
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++) printf("*");
        printf("\n");
    }
    // Bottom Half
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++) printf("*");
        printf("\n");
    }
    return 0;
}
/* Output:
*****
 ***
  *
 ***
*****
*/

