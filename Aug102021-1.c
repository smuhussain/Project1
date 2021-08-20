#include<stdio.h>
#include<string.h>
int main (void)
{
    int i,c;
    int num[6]={723,770,700,712,699,1392};
    char name[10]="Murtaza";
    char names[4][11]={"Tooba","Noman","AbdulWasay","Umer"};
    float arr[3]={3.14,22.7,13.8};

    for(i=0;i<6;i++)
    {
        printf("%d",num[i]);
        printf("\n");
    }
    printf("\n%s\n",name);
    for(i=0;i<strlen(name);i++)
    {
        printf("%c",name[i]);
        printf("\n");
    }
    for(i=0;i<4;i++)
    {
        /*
        for(c=0;c<strlen(names[i]);c++){
            printf("%c\t",names[i][c]);
        }
        */
        printf("%s",names[i]);
        printf("\n");
    }

    return 0;
}
