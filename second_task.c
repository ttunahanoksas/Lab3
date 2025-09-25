/*Calculate the sum of divisors for a number entered by the user. (e.g. for 6: 1+2+3+6 = 12.) Modify your algorithm to exclude the number itself from the summation. What should be changed in the program?

Perfect number is an integer that equals to this sum (so the sum of divisors, including 1, excluding the number itself). The first perfect number is 6 as 1+2+3=6. 
The next two are 28 and 496. Print out if the number entered by the user is a perfect number or not.

Hint: Sum of divisors implies applying summation: a loop, and summing in the accumulator. In our case not all numbers in the loop qualify for being a divisor. */

#include <stdio.h>

int main(){
int a, n;
n=0;
printf("Please enter a number :\n");
scanf("%d", &a);
for(int i=1; i<a-1; i++){
    if((a % i) == 0){
        n+=i;  
        if (a == n){
        printf("%d",n);
        }
    }
}

}
