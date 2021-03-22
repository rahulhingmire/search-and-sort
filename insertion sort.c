#include <stdio.h>
int main()
{
    int data[]={9,5,1,4,3};
    int size=sizeof(data)/sizeof(data[0]);
    printf("size of array is %d\n",size);
    int step,i,j;
    for(step=0;step<size;step++)
    {
        for(i=step;i>0;i--)
        {
            if(data[i]<data[i-1])
            {
                int temp=data[i];
                data[i]=data[i-1];
                data[i-1]=temp;
            }
            else
           {
                break;
           }
        }
    }
    for(j=0;j<size;j++)
    {
        printf("%d\n",data[j]);
       
    }
   
}
