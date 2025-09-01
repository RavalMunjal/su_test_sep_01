#include <stdio.h>

int main() {
    int n,  reversed = 0, v;

    printf("Enter a number: ");
    scanf("%d", &n); 
    while (n > 0) {
       v = n % 10;                 
        reversed = reversed * 10 + v; 
        n = n / 10;                         
    }
    if (n== reversed)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}

