#include<stdio.h>
#include<string.h>
void main()
{
    char a[90];
    int i,n=2;
    int count=0;
    scanf("%s",&a);
    for(i=0;i<n;i++)
    {
    if(a[i]=='a'||a[i]=='A')
    {
        count++;
    }
    if(count==1)
    {
    printf("vowel");
}
else
{
    printf("constant");
}

}}
