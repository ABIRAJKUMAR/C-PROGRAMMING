#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE*fptr;
    fptr=fopen("BEEE.txt","r");
    char data[100];
    fgets(data,100,fptr);
    printf("%s",data);
}
