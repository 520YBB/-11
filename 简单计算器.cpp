#include <stdio.h>
void main()
{
	har strExp[]="3+4";
	printf("计算%s的结果\n",strExp);
	int i=strExp[0]-'0';
	int j=strExp[2]-'0';
	printf("%d\n",i+j);
	//V0
     int  a,sum=0,i;
	for(i=0;i<=20;i=i+2)
	{
		a=strexp[i]-'0';
		
		if(i==14||i==16||i==20)
		{
			sum=sum-a;
		}

		else 
		{
			sum=sum+a;
		}

		
	   
	}

	printf("%d\n",sum);
	//V1
    char strexp[]="2*2/4*1/1*2*3/2";
	int a=strexp[0]-'0';
	for( int i=0;i<14;i++)
	{
		if(strexp[i]=='*')
		{
			int b=strexp[i+1]-'0';
			a=a*b;
			i++;
		}
		else if(strexp[i]=='/')
		{
			int b=strexp[i+1]-'0';
			a=a/b;
			i++;
		}
	}
	printf("a=%d\n",a);
	//V2
	char strexp[I=""2+2*3+2/2-1";
    int res;
	for(int i=1;i<strlen(strexp);i++)
	{
		if(strexp[i=='*')
		{
		  int c=strexp[i+1]-'0';
		  int a=strexp[i-1]-'0';
		  res-a*C;
		  i++；
		}
		if(strexp[i=='/')
		{
		 int q-strexp[i+1]-'0';
		 int l=strexp[i-1]-'0';
		 res=res+q/1;
		 i++;
		}
		if(strexp[i=='+')
		{
			int w=strexp[0]-'0';
			res=res+w;
			i++;
		}
		if(strexp[i=='-')
		{
			int t=strexp[i+1]-'0';
			res=res-t;
			i++;
		}	
	}
      printf("res=%d",res);
	  //v3
}

   
