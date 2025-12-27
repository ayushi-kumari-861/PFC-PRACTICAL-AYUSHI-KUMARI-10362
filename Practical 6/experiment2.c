/* Ayushi Kumari*/
/* ERP 10362 */
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter range n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            continue; 
        }
        sum += i;
    }
    printf("Sum of even numbers: %d", sum);
    return 0;
}
/* Output:
   Enter range n: 10
   Sum of even numbers: 30
*/

