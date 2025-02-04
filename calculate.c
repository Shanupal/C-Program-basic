#include<stdio.h>
void main(){
    float a,b,c;
    int input;
    printf("process 1 for add,2 for sub, 3 for mul,4 for div\n");
    scanf("%d",&input);
    printf("enter the first number AND secon number\n");
    scanf("%f %f",&a,&b);
    switch (input)
    {
    case 1;
        printf("sum =%f", a+b);
        break;
    case 2;
    printf("sub= %f",a-b);
    break;
    case 3;
    printf("mul =%f", a*b);
    break;
    case 4;
    printf("div =%f", a/b);

    }
    break;
    default:
        printf("wrong choice")
    }
}
