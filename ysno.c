#include <stdio.h>
void main()
{
    int a[90],n,i;
    printf("enter the no\n");
    printf("enter the range\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]=='0'||a[i]=='1')
        {
        printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    
}
