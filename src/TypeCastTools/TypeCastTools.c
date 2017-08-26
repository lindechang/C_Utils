/**
 * Author : lindec
 * Email  : lindec@163.com
 * Create : 2017年8月26日 Created with Eclipse
 * FileName: TypeCastTools.c
 * Description: 类型转换工具类
 *
 */


/*******************************************************************************
* 函数名 : my_itoa
* 描述   : 数字转换为对应字符
* 输入   : value：欲转换的数据。radix：转换后的进制数，可以是10进制、16进制等。
* 输出   : string目标字符串的地址
* 返回   : 如radix=10 ,value=15 ——> string 为'15' 如radix=16 ,value=15 ——> string 为'F'
* 注意   : 返回的字符串定义，要以字符数组,如 char String[100] ，避免空指针
*******************************************************************************/
char *my_itoa(int value,char *string,int radix)
{
  char zm[16]="0123456789ABCDEF";
  char aa[100]={0};

  int sum=value;
  char *cp=string;
  int i=0;

  if(radix<2||radix>16)//TODO：增加了对错误的检测
  {
    return "error";
  }

  if(value<0)
  {
    return "error";
  }

  while(sum>0)
  {
    aa[i++]=zm[sum%radix];
    sum/=radix;
  }

  for(int j=i-1;j>=0;j--)
  {
    *cp++=aa[j];
  }
  *cp++='\0';
  return string;
}

/*******************************************************************************
* 函数名 : array2str
* 描述   : 数组 转 字符串
* 输入   : array：欲转换的数组。lenght：数组长度。radix：转换后的进制数，2，10，16进制等。
* 输出   : string目标字符串的地址
* 返回   : radix=16 , array[]={10,1,2,3}   --> srting[]=data:{"A","1","2","3"}
* 注意   :
*******************************************************************************/
char* array2str(char *srting,int array[] ,int lenght,int radix){

	char *str = srting;
	strcat(str,"data:{");
	for (int i=0;i<lenght;i++) {
		char temp[20];
		my_itoa(array[i],temp,radix);
	if (i<lenght-1) {
		strcat(str,"\"");
		strcat(str,temp);
		strcat(str,"\",");
	}
	else {
		strcat(str,"\"");
		strcat(str,temp);
	    strcat(str,"\"");
	}
	};
	strcat(str,"}");
	return srting;
}

