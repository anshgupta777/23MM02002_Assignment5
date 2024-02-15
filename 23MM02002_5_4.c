#include<stdio.h>
void main()
{
    int ch,i,j,k,sp;
    printf("Enter the rows of the pattern :\n");
    scanf("%d",&ch);
    for(i=1;i<=ch;i++)
    {
        for(sp=1;sp<=ch-i;sp++)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("* ");
        printf("\n");
    }
}