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
		//�ж��ǲ����ַ�
		if((c < 127)&&(c != ' '&&c != '\n'&&c != '\t'))
		{
			num_of_char++;
		}
		//�ж���
		if(c == '\n')
		{
			num_of_line++;
		}
		//�ǲ�����
		if(((form != ' '&&form != '\n'&&form != '\t'&&form < 127)&&(c == ' '||c == '\t'||c == '\n'||c == '\0')))
		{
			num_of_zi ++;
		}
		//���ֵ����ж�
		if(c > 127)
		{
			cnt ++;
		}
		form = c;
//		printf("%d\n",c);
	}
	num_of_char+=cnt/3;
	num_of_zi += cnt/3;
	printf("���� %d\n",num_of_zi);
	printf("�ַ��� %d\n",num_of_char);
	printf("���� %d",num_of_line);
	return 0;
}
