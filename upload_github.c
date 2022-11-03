#include <stdio.h>

int main(void) {
	int t,n,x,y,z,count,temp=0,i,j,a,b,c;
	scanf("%d",&t);
	while(t--)
	{
	  scanf("%d",&x);
    while(x!=0)
      {
        n=x%10;
        temp=temp*10+n;
        x=x/10;
      }
    printf("%d\n",temp);
    temp=0;
	}
	return 0;
}
