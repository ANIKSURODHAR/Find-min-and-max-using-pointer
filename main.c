#include <stdio.h>
#include <stdlib.h>
void min_max(int a[],int len,int *min,int *max)
{
 *min = *max= a[0];
  int i;
 for(i=1;i<len;i++)
 {
 if(*max<a[i])
 *max=a[i];
 if(*min>a[i])
 *min=a[i];
 }
}


int main()
{
int a[]={1,3,6,2,8,385,38},len,max,min;

len=sizeof(a)/sizeof(a[0]);
 min_max(a,len,&min,&max);

    printf("min=%d\n max=%d\n",min,max);
    return 0;
}
