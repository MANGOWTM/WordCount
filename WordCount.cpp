#include<bits/stdc++.h>
const int Maxn = 1e6+10;
using namespace std;
/*���㵥�ʸ���*/
int get_word(char *str)
{
	int ans = 0;
	int len = strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i]==' '||str[i]==',') ans++;
	}
	return ans;
}
/*����Ӣ����ĸ����*/
int get_character(char *str)
{
	int ans = 0;
	int len = strlen(str);
	for(int i=0;i<len;i++){
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')) ans++;
	}
	return ans;
}

char buff[Maxn];//���ڴ���һ���Դ��ļ������һ���ַ�
char s[Maxn];//���������ļ����ַ� 
int main(int argc,char **argv)
{
     FILE *fp = NULL;//�ļ�ָ��
	 fp = fopen("E:\\Git\\input.txt","r");//argv[2]�ǰ�Ҫ��ȡ���ļ�·������rֻ������
	 /*���fp��ȻΪnull��˵��û���ҵ�ָ��·�����ı�����ʧ��*/
	 if(fp==NULL)
	 {
	 	printf("δ�ҵ�ָ���ļ�!\n");
	 }
	 /*���ı���ʼ��ȡ��Ϣ*/
	 while(!feof(fp))//�ж϶�ȡ�Ƿ�Ϊ�� 
	 {
	 	 /*fgets��ȡ�ַ�������1��2��3�������ֱ����ַ���������ַ�����
		  ����ȡ����,�Լ��ļ�ָ��,�����ȡΪ�շ���null*/   
	     if(fgets(buff,1000,fp)!=NULL)
	     {
	     	strcat(s,buff);//ƴ�ӵ�s���� 
		 }
	 }
	 printf("%s\n",s);//��ӡ��s��������
	 if(argc!=3)//��ʾ����������������������⣬Ҳ���������������� 
	 {
	 	printf("�����в���������Ҫ��!\n");
	 	return 0;
	 }
	 /*�ڶ���������-w,��ô����ͳ��word����*/
	 if(strcmp(argv[1],"-w")==0)
	 {
	 	printf("Ӣ�ĵ��ʵĸ�����:%d\n",get_word(s));
	 }
	 else if(strcmp(argv[1],"-c")==0)
	 {
	 	printf("Ӣ����ĸ�ĸ�����:%d\n",get_character(s));
	 }
	 else
	 {
	 	printf("�����еڶ�������������Ҫ��(ֻ����-w����-c)\n");
	 	return 0;
	 } 
	 return 0;	
}
