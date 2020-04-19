#include<stdio.h>
#include<math.h>
int main()
{
	int t,q;
	scanf("%d",&t);
	for(q=0;q<t;q++)
	{
		 int i,n,m,y,a[16],temp1,temp2,no=0;
		char c;
		scanf("%d %d %c",&n,&m,&c);
		for( i=15;i>0;i--)
		{
			a[i]=n%2;
			n/=2;
		}
		a[0]=n;
		i=0;
		if(c=='L')
		{
			for(int j=0;j<m;j++)
			{
				int temp1=a[0];
				for(int x=0;x<16;x++)
				{
					if(x!=15)
					{
						a[x]=a[x+1];
					}
					else
					{
						a[x]=temp1;
					}
				}
			
			}
		}
		else{
			for(int j=0;j<m;j++)
			{
				temp2=a[15];
				for(int x=15;x>=0;x--)
				{
					if(x==0)
					{
						a[x]=temp2;
					}
					else{
						a[x]=a[x-1];
					}
				}
			}
		}
	    int t=0;
		for( y=15;y>=0;y--)
		{
			no+=a[y]*pow(2,t);
			t++;
			
		}
		printf("%d\n",no);
		
}
return 0;
}