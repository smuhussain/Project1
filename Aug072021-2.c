#include<stdio.h>
#include<string.h>
int main (void)
{   char Fname[10]="Syed",Mname[10]="Murtaza",Lname[10]="Hussain",FullName[30]="";
    strcat(FullName,Fname);
    strcat(FullName," ");
    strcat(FullName,Mname);
    strcat(FullName," ");
    strcat(FullName,Lname);
    printf("Hi, %s\n",FullName);
    //int i = strcmp("Zara","Zara");
    //printf("\n%d",i);
    char uid[10],upwd[10],id[10],pwd[10];
    strcpy(id,"smu123");
    strcpy(pwd,"pwd456");
    //printf("[%s]\t[%s]\n",id,pwd);
    printf("Enter ID:");
    gets(uid);
    printf("Enter Password:");
    gets(upwd);
    //printf("[%s]\t[%s]\n",uid,upwd);
    int x,y;
    x=strcmp(id,uid);
    y=strcmp(upwd,pwd);
    //printf("\n%d,%d\n",x,y);
    if(x==0 && y==0)
    {
        printf("Welcome to new World");
    }else{
        printf("Invalid ID or PWD");
    }
    return 0;
}
