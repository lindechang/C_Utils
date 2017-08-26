/**
 * Author : lindec
 * Email  : lindec@163.com
 * Create : 2017年8月26日 Created with Eclipse
 * FileName: testMain.c
 * Description:
 *
 */



#include "user_all_header.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"




char string[80];
int data1[5]={15, 5, 3, 2, 5};


int main(void){


	array2str(string,data1,5,8);
	int cnt = 0;
//    while(*string != '\0'){
//    	string++;
//    	cnt++;
//    }
	printf(string);
//	printf(cnt);
	return 0;


}


