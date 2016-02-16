/*************************************************************************
	> File Name: 项目：航班查询系统
	> Author: 梁惠涌
	> Addr:华清远见 
	> Created Time: 2015年04月12日 星期日 05时32分24秒
 ************************************************************************/

#include "fly_head.h"
int main(){
    int choice_num;

    //给全局变量plist初始化
    linklist_plist();
    
    show_list("|                                 欢迎使用航班查询系统!                                      |\n");
    //判断本地文件是否有内容
    IS_load_file();

/*----------------线程(航班信息显示)-------------------------*/
    static pthread_t thread_tid1;              //定义线程标识符
    
    //创建线程显示航班信息
    if(pthread_create(&thread_tid1, NULL, show_main, NULL)< 0){
        perror("创建线程失败！\n");
        exit(-1);
    }
/*------------------------------------------------------*/

    while(1){
        scanf("%d",&choice_num);
        switch(choice_num){
            case 1: AddMation_list(); break;  //增加航班信息
            case 2: Reorder_list(); break;    //航班信息排序并保存本地
            case 3: Delete_List(); break;     //删除航班信息
            case 4: show_beybey();break;      //退出系统
            default: while(getchar()!='\n');break;  //清除输入其他字符的缓存
        }

    }
	pthread_join(thread_tid1, NULL);
	return 0;
}

