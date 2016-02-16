/*************************************************************************
	> File Name: fly_head.h
	> Author: 梁惠涌
	> Addr:华清远见 
	> Created Time: 2015年04月12日 星期日 05时57分34秒
 ************************************************************************/
#ifndef _FLY_HEAD_H
#define _FLY_HEAD_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include "print.h"

typedef struct flydate{
    int  ID;               //航班号
    char staddress[18];    //起点站
    char arraddress[18];   //终点站
    char DATE[12];         //班期
    char TYPE[8];          //机型
    char stime[10];        //起飞时间
    char atime[10];        //到达时间
    int value;             //票价
    struct flydate *next;
}fly_list,*fly_plist;
volatile static fly_plist plist;
volatile static int flag = 1;
extern void linklist_new();
extern void DataToList(FILE *,fly_plist *);
extern void IS_load_file();
extern void show_list(char *);
extern void *show_main(void *);
extern void AddMation_list();
extern void Delete_List();
extern void save_ListToFile();
extern void show_beybey();
extern void linklist_plist();
extern void Reorder_list();
extern void delete_1();
extern void delete_2();
#endif
