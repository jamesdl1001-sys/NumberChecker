#include <stdio.h>

int main() {
    // check if a number is even or odd
    int number;
    char choice[10];
    do {
        printf("Enter any Number: ");
        scanf("%d", &number);
if (number % 2 == 0) {
            printf("%d is an Even Number!",number);
        } else {
            printf("%d is ann Odd Number!",number);
        }
        printf("\n Do you want to check another number? (yes/no: )");
        scanf(" %s",&choice);

    }
while(strcmp(choice,"yes")==0);
printf(" Thank you for using Program!");
return 0;
}