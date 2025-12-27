/* Ayushi Kumari*/
/* ERP 10362 */
#include <stdio.h>

int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n = 4123;
    printf("Sum of digits of %d is %d", n, sumOfDigits(n));
    return 0;
}
/* Output:
   Sum of digits of 4123 is 10
*/

