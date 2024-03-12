#include <stdio.h>
int main()
{
    int a,b,c;
    float avg;
    printf("enter numbers");
    scanf("%d %d %d",&a,&b,&c);
    avg = (float) (a+b+c)/3;
    printf("avg of given numbers are %.2f\n",a,b,c,avg);
    return 0;
}
