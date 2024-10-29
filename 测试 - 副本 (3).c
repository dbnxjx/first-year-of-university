 #include<stdio.h>
#define zi 4

int main(void)
{
	int num_of_char = 0;
	int num_of_line = 0;
	int num_of_zi = 0;
	int c = '0';
	int form = '\0';
	
	int cnt = 0;
	
	while((c = getchar()) != EOF)
	{
		//判断是不是字符
		if((c < 127)&&(c != ' '&&c != '\n'&&c != '\t'))
		{
			num_of_char++;
		}
		//判断行
		if(c == '\n')
		{
			num_of_line++;
		}
		//是不是字
		if(((form != ' '&&form != '\n'&&form != '\t'&&form < 127)&&(c == ' '||c == '\t'||c == '\n'||c == '\0')))
		{
			num_of_zi ++;
		}
		//汉字单独判断
		if(c > 127)
		{
			cnt ++;
		}
		form = c;
//		printf("%d\n",c);
	}
	num_of_char+=cnt/3;
	num_of_zi += cnt/3;
	printf("字数 %d\n",num_of_zi);
	printf("字符数 %d\n",num_of_char);
	printf("行数 %d",num_of_line);
	return 0;
}
