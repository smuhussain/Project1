#include<stdio.h>
int main (void)
{
    int cnt;
    int num[2],temp[2];
    num[0] = 5;
    num[1] = 10;

    temp[0] = num [0];
    temp[1] = num [1];

    int a,b;
    a = 10;
    b = a;



    for(cnt = 0;cnt < 2;cnt++)
    {
        printf("%d",num[cnt]);
        printf("\n");
    }
    //int x[size]={10,11,22,13,45,15,76,27,8,19};

    int size;

    printf("How many Numbers Your need to Store?");
    scanf("%d",&size);

    int x[size];

    for(cnt=0;cnt<size;cnt++)
    {

        printf("%d. Enter Number:",cnt+1);
        scanf("%d",&x[cnt]);
    }

    int min=x[0],max=x[0],sum=0;
    float avg;

    for(cnt=1;cnt<size;cnt++)
    {
        if(x[cnt]<min)
        {
            min = x[cnt];
        }
        if(x[cnt]>max)
        {
            max = x[cnt];
        }
        sum = sum + x[cnt];
    }

    avg = (float)sum / size;

    printf("min = %d and max = %d\n",min,max);
    printf("Avg = %0.2f and Sum = %d",avg,sum);


    return 0;
}
