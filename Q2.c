#include <stdio.h>
int main() {
    int units;
    int bill = 0;

    printf("Enter units: ");
    scanf("%d", &units);

    if (units <= 50) {
        bill = units * 2;
    } 
    else if (units <= 100 && units >=51) {
        bill = (50 * 2) + (units - 50) * 3;
    } 
    else if (units <= 200 && units >=101) {
        bill = (50 * 2) + (50 * 3) + (units - 100) * 4;
    } 
    else if (units <= 300 && units>=201) {
        bill = (50 * 2) + (50 * 3) + (100 *4)+(units - 200) * 5;
    } 
    else if (units <= 500 && units>=301) {
        bill=(50*2)+(50 * 3)+(100 * 4)+(100 * 5)+(units-300) * 6;
    }
    else if (units >500){
    bill =(50*2)+(50*3)+(100*4)+(100*5)+(100*6)+(units - 400)*7;

      }
        printf("Total Bill = ₹%d\n", bill);    
    return 0;
}