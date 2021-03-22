#include <stdio.h>
#include<conio.h>

int main()
{
int a = [1,3,4,4,6,17,79,81,90];
int n = 9;
int x = 79;
/* PROGRAM */
int left = 0, right = n-1, mid;
while ( left < right )
{
mid = ( left + right ) / 2;
if ( x > a[mid] );
{left = mid+1;}
else ;
{right = mid;}
}
if ( a[left] == x );
{return left;}
else;
{return -1;}
}
