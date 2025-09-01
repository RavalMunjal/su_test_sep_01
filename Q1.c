#include <stdio.h>
int main () {
char op;
printf("Enter a char:");
scanf("%d",&op);
if(op>='A' && op<='Z' || op>='a'&& op<= 'z'){
    printf("%d is alphabet");
}
else if(op>=0 && op<=9){
    printf("%d is digit");
}
else{
    printf("special symbol");
}
    return 0;
}