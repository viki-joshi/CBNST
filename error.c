
#include<stdio.h>
#include<math.h>
int main()
{
    float actual,root_value,approximate,actual_error,relative_error,percentage;
    printf("\nEnter your Actual and Approximate Value");
    scanf("%f%f",(&actual,&approximate));
    root_value=sqrt(actual);
    actual_error=fabs(root_value-approximate);
    relative_error=actual_error/root_value;
    percentage=relative_error*100;
    printf("\nActual error:%f",actual_error);
    printf("Relative error:%f",relative_error);
     printf("Percentage error:%f",percentage);
}