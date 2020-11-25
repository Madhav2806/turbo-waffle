#include<stdio.h>
int main()
{
    int x,y,z,f,k ;
    printf("Please enter the numbers ");
    scanf("%d %d %d", &x, &y, &z);
    
    f=y+z;
    k=0;
    for (int i=y ; i <= f; i++)
    {
    if(i%x==0)
    {
        k=1;
    }
    }
    if(k==1)
    {
        printf ("Yes");
    }
    else
    { 
        printf ("No");
    }
    
    
return 0;    
}
