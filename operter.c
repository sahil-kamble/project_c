#include<stdio.h>

int main(){ 

    // Operator

    int number1 = 563;
    int number2 = 7;
    int result = number1 + number2;
    printf("%d\n",result);
    
    result = number1 - number2;
    printf("%d\n",result);

    result = number1 * number2;
    printf("%d\n",result);

    result = number1 / number2;
    printf("%d\n",result);

    result = number1 % number2;
    printf("%d\n",result);


    // 0 = f
    // 1 = t
    //Relational Operators:
    result = number1 < number2;
    printf("%d\n",result);

    result = number1 > number2;
    printf("%d\n",result);

    result = number1 == number2;
    printf("%d\n",result);

    result = number1 != number2;
    printf("%d\n",result);

    result = number1 <= number2;
    printf("%d\n",result);


    result = number1 >= number2;
    printf("%d\n",result);

    //Assignment Operator:

    int data = 100;
    printf("%d\n",data);

    //data = data + 20;
    data +=20;
    printf("%d\n",data);
    data *=20;
    printf("%d\n",data);
    data /=20;
    printf("%d\n",data);
    data -=20;
    printf("%d\n",data);
    //Increment and Decrement Operators:

    int num = 900;

    num++;

    printf("%d\n",num);

    num--;

    printf("%d\n",num);

    // Logical Operators:
    // and &&
    // left side | right side | result
    //    T      |    T       |   T
    //    T      |    F       |   F
    //    F      |    T       |   F
    //    F      |    F       |   F 
    
    printf("%d\n",(34 < 89 && 90 == 19 ));
    
    // or ||
    // left side | right side | result
    //    T      |    T       |   T
    //    T      |    F       |   T
    //    F      |    T       |   T
    //    F      |    F       |   F 
    
    printf("%d\n",(34 < 89 || 90 == 19 ));
    // not !

    printf("%d\n",(90 != 19));

    printf("%d\n",!(90==90));



    return 0;
}