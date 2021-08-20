#include<stdio.h>
int main (void)
{
    int s,t,temp,snum[9],anum[9],num[9] = {42,99,71,-10,33,17,101,77,56};
    for(s=0;s<9;s++)
    {
        anum[s] = snum[s] = num[s];
    }
    for(s=0;s<9-1;s++)
    {
        for(t=s+1;t<9;t++)
        {
            if(snum[s]>snum[t])
            {
                temp = snum[s];
                snum[s] = snum[t];
                snum[t] = temp;
            }
            if(anum[s]<anum[t])
            {
                temp = anum[s];
                anum[s] = anum[t];
                anum[t] = temp;
            }
        }
    }
    printf("O\tS1\ts2\n");
    for(s=0;s<9;s++)
    {
        printf("%d\t%d\t%d\n",num[s],snum[s],anum[s]);
    }
    return 0;
}
