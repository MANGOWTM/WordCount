#include<bits/stdc++.h>
const int Maxn = 1e6+10;
using namespace std;
/*计算单词个数*/
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
/*计算英文字母个数*/
int get_character(char *str)
{
	int ans = 0;
	int len = strlen(str);
	for(int i=0;i<len;i++){
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')) ans++;
	}
	return ans;
}

char buff[Maxn];//用于储存一次性从文件读入的一行字符
char s[Maxn];//储存整个文件的字符 
int main(int argc,char **argv)
{
     FILE *fp = NULL;//文件指针
	 fp = fopen("E:\\Git\\input.txt","r");//argv[2]是绑定要读取的文件路径名，r只读操作
	 /*如果fp仍然为null，说明没有找到指定路径的文本，绑定失败*/
	 if(fp==NULL)
	 {
	 	printf("未找到指定文件!\n");
	 }
	 /*从文本开始读取信息*/
	 while(!feof(fp))//判断读取是否为空 
	 {
	 	 /*fgets读取字符串，第1，2，3个参数分别是字符串储存的字符数组
		  ，读取长度,以及文件指针,如果读取为空返回null*/   
	     if(fgets(buff,1000,fp)!=NULL)
	     {
	     	strcat(s,buff);//拼接到s后面 
		 }
	 }
	 printf("%s\n",s);//打印出s看看内容
	 if(argc!=3)//表示命令行输入参数个数有问题，也就是命令行有问题 
	 {
	 	printf("命令行参数不符合要求!\n");
	 	return 0;
	 }
	 /*第二个参数是-w,那么就是统计word个数*/
	 if(strcmp(argv[1],"-w")==0)
	 {
	 	printf("英文单词的个数是:%d\n",get_word(s));
	 }
	 else if(strcmp(argv[1],"-c")==0)
	 {
	 	printf("英文字母的个数是:%d\n",get_character(s));
	 }
	 else
	 {
	 	printf("命令行第二个参数不符合要求(只能是-w或者-c)\n");
	 	return 0;
	 } 
	 return 0;	
}
