#include <stdio.h>
#include <conio.h>
int main() {

    float principal, rate, time;
    principal = 50000;  
    rate = 4.5;       
    time = 2;         

    float simp_interest;
    simp_interest = (principal * rate * time) / 100;

    printf("Principal Amount: %.2f\n", principal);
    printf("Rate: %.2f%%\n", rate);
    printf("Time: %.2f years\n", time);
    printf("Simple Interest is: %.2f\n", simp_interest);
 
    return 0;
}