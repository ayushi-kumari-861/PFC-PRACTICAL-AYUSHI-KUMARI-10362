/* Ayushi Kumari*/
/* ERP 10362 */
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    swap(&x, &y);
    printf("Swapped: x = %d, y = %d", x, y);
    return 0;
}
/* Output:
   Swapped: x = 20, y = 10
*/

