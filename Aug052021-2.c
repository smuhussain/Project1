#include<stdio.h>
void main (void)
{
    int row,col;
/*    char names[12][25];

    for(row=0;row<12;row++)
    {
        printf("%d. Enter Your name:",row+1);
        scanf("%s",names[row]);

    }
    for(row=0;row<12;row++)
        printf("Hi, %s\n",names[row]);
*/
    int mat[3][4];

    for(row=0;row<3;row++)
    {
        for(col=0;col<4;col++)
        {
            printf("(%d,%d)Enter Number:",row,col);
            scanf("%d",&mat[row][col]);
        }
    }
    for(row=0;row<3;row++)
    {
        printf("\n");
        for(col=0;col<4;col++)
        {
            printf("%d\t",mat[row][col]);
        }
    }

}
