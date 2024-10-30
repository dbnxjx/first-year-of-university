#include<stdio.h>

int main(void)
{
	int k = 0;
	char buf[100];
	gets(buf);
	scanf("%d",&k);
	for(int i = 0;buf[i] != '\0';i++)
	{
		if(buf[i]>='A'&&buf[i]<='Z')
		{
			if(buf[i]+k-1>'Z')
			{
				buf[i] = k - 'Z' + buf[i] + 'A' -2; 
			}else{
				buf[i] = buf[i] + k -1 ;
			}
		}
		
	}
//	puts(buf);
	//换位
	int j = 0;
	while(buf[j] != '\0'&&buf[j+1] != '\0')
	{
		char temp = buf[j];
		buf[j] = buf[j+1];
		buf[j+1] = temp;
		j+=2;
	}
	puts(buf);
	
	return 0;
}
