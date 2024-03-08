#include<stdio.h>
int main(){

    char name[10];
    char char_ltr;
    int age;
    float height;
    printf("Enter your Name: ");
    scanf("%s",&name);
    printf("Enter char ltr \n");
    scanf(" %c",&char_ltr);
    printf("\nEnter your Age: ");
    scanf( "%d",&age);
    printf("\nEnter your Height in cm");
    scanf("%f",&height);

    // Printing the details of user 

    printf("Name: %s\n",name); 
    printf("Char Letter: %c\n",char_ltr);
    printf("Age: %d \n",age);
    printf("Height: %.2f \n",height);

    return 0;
}