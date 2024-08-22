// positive or negative

#include <stdio.h>

int main() {
    int num;

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is positive or negative
    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}

//find smallest number ..

#include<stdio.h>
// header files - stdio.h

int main(){

    // find smallest number ...
    int a = 10;
    int b = 2;

    if(a < b){
        printf("Smallest number is %d\n", a);
    }else{
        printf("Smallest number is %d\n", b);
    }

    return 0;
}

//

#include<stdio.h>
// Find the Largest Among Three Numbers
int main(){

    int number1 = 90;
    int number2 = 10;
    int number3 = 80;

    if(number1 > number2 && number1 > number3){
        printf("The largest number is %d\n", number1);
    }else if (number2 > number1 && number2 > number3){
        printf("The largest number is %d\n", number2);
    }else{
        printf("The largest number is %d\n", number3);
    }




    return 0;
}

//find odd / even

#include<stdio.h>

int main(){

    // find odd / even
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num%2==0)
    {
        printf("%d is even\n", num);
    }else{
        printf("%d is odd\n", num);
    }
    


    return 0;
}
