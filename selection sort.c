#include<stdio.h>
void main()
{
    int data[]={12,25,10,15,2,20,34,5};
    int size=sizeof(data)/sizeof(data[0]);
    int i,j,k,a;
    for(i=0;i<size;i++)
    {
     k=i;
     for(j=i+1;j<size;j++)
     {
         if(data[j]<data[k])
            k=j;
     }
     a=data[i];
     data[i]=data[k];
     data[k]=a;
    }
     printf("the ascending order of data is as following\n");
     for(i=0;i<size;i++)
     {
         printf("%d\n",data[i]);
         
     }
}
