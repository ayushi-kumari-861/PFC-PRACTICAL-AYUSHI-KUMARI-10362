/* Ayushi Kumari*/
/* ERP 10362 */
#include <stdio.h>

int main() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}
/* Output:
A
AB
ABC
ABCD
*/

