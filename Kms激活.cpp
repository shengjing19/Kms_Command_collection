/*
*应用须知
* 使用Debug x86
* 属性必备设置
* 1.常规-平台工具集 ->C++14标准
* 2.高级-字符集 ->使用多字节字符集
* 3.C/C++->常规->SDL检测->否
* 4.C/C++->代码生成->多线程调试MTD
* 5.链接器->清单文件->UAC执行级别->requireAdministrator
*
*
* by shengjing19 in 2025/2/4
*
*/

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

//自定义功能组
#include "menu.h"      //主菜单
#include "function.h"  //功能(通用激活流程)
#include "xz.h"       //使用须知
#include "other.h"    //其他功能
#include "custom.h"   //用户自定义激活
#include "server.h"  //选择服务器
#include "ms.h"      //提供在线状态与延时
#include "kms.h"     //提供大部分KMS指令
#include "localkms.h"     //提供离线KMS激活功能
#include "color.h"     //提供颜色功能


//--------------------------正文------------------------------------
int main()
{
	system("title 笙箫旧景 系统激活(kms)");
	system("color 0B");
	menu(); //菜单函数
}



