#include <stdio.h>

int main() {
    // check if a number is even or odd
    int number;
    char choice[10];
    do {
        printf("Enter any Number: ");
        scanf("%d", &number);
if (number % 2 == 0) {
            printf("Even Number!\n");
        } else {
            printf("Odd Number!\n");
        }
        printf("\n Do you want to check another number? (yes/no: )");
        scanf(" %c",&choice);

    }
while(strcmp(choice,"tes")==0);
printf(" Thank you for using Program!");
return 0;
}