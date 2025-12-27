/* Ayushi Kumari*/
/* ERP 10362 */
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter start (a) and end (b): ");
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        printf("%d ", i);
    }
    return 0;
}
/* Output:
   Enter start (a) and end (b): 5 10
   5 6 7 8 9 10 
*/

