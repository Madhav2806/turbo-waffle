#include<stdio.h>
int main()
{
    int x,y,z,f,k ;
    printf("Please give the number ");
    scanf("%d", &x);
    printf("Please give the number ");
    scanf("%d", &y);
    printf("Please give the number ");
    scanf("%d", &z);
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
