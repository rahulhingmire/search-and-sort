//It takes string from user and arrange it in an alphabetical order
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[100],temp;
    int i,j,len;
    printf("Enter the string:");
    scanf("%s",a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            if(a[j]>=a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("sorted string by alphabetical order as following:");
    for(i=0;i<len;i++)
    {
      printf("\n%c",a[i]);
    }
    
}
