#include <stdio.h>
int main()
{
    int data[]={-2,45,0,11,19};
    int size=sizeof(data)/sizeof(data[0]);
    int step,i,j;
    for(step=1;step<=size;step++)
    {
        for(i=size-1;i>=1;i--)
        {
            if(data[i]<data[i-1])
            {
                int temp=data[i];
                data[i]=data[i-1];
                data[i-1]=temp;
            }
        }
    }
    for(j=0;j<size;j++)
    {
        printf("%d\n",data[j]);
       
    }
   
}