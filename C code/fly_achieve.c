/*************************************************************************
> File Name: 功能实现函数
> Author: 梁惠涌
> Addr:华清远见 
> Created Time: 2015年04月12日 星期日 06时00分56秒
************************************************************************/

#include "fly_head.h"

//加载界面
void show_list(char *str){
    system("clear");

    system("clear");
    printf("|--------------------------------------------------------------------------------------------|\n");
    printf("|--------------------------------------------------------------------------------------------|\n");
    printf("|                                        航班查询系统                                        |\n");
    printf("|--------------------------------------------------------------------------------------------|\n");
    printf("|--------------------------------------------------------------------------------------------|\n");
    printf("|                                                                                            |\n");
    printf("|                                                                                            |\n");
    printf("|                                                                                            |\n");
    printf("%s",str);
    printf("|                                                                                            |\n");
    printf("|                                                                                            |\n");
    printf("|                                                                                            |\n");
    printf("|--------------------------------------------------------------------------------------------|\n");
    printf("|--------------------------------------------------------------------------------------------|\n");
    sleep(1.5); 
}

//显示航班信息界面
void *show_main(void *arg){
    fly_plist p, p1, p2, p3, p4, p5;
    while(1){
        if( flag == -1 ){
            exit(-1);
        }
        while(flag==1){
            system("clear");
            printf("|--------------------------------------------------------------------------------------------|\n");
            printf("|                                         航班查询系统                                       |\n");
            printf("|--------------------------------------------------------------------------------------------|\n");
            printf("|   航班号   |   起点站   |   终点站   |   班期   |   机型   |   起飞   |   到达   |   票价  |\n");
            printf("|--------------------------------------------------------------------------------------------|\n");
            if(p!= NULL){
                printf("| %7d    |   %8s   |   %8s   |  %5s   |  %8s  |%8s  |%8s  | ￥%5d |\n",p->ID,p->staddress,p->arraddress,p->DATE,p->TYPE,p->stime,p->atime,p->value);
            }else
            printf("|            |            |            |          |          |          |          |         |\n");

            if((p!=NULL) && (p->next != NULL)){
                p1=p->next;
                printf("| %7d    |   %8s   |   %8s   |  %5s   |  %8s  |%8s  |%8s  | ￥%5d |\n",p1->ID,p1->staddress,p1->arraddress,p1->DATE,p1->TYPE,p1->stime,p1->atime,p1->value);
            }else
            printf("|            |            |            |          |          |          |          |         |\n");

            if( (p!=NULL) && (p->next != NULL) && (p->next->next != NULL)){
                p2=p->next->next;
                printf("| %7d    |   %8s   |   %8s   |  %5s   |  %8s  |%8s  |%8s  | ￥%5d |\n",p2->ID,p2->staddress,p2->arraddress,p2->DATE,p2->TYPE,p2->stime,p2->atime,p2->value);
            }else
            printf("|            |            |            |          |          |          |          |         |\n");

            if((p!=NULL) && (p->next != NULL) && (p->next->next != NULL) && (p->next->next->next != NULL)){
                p3=p->next->next->next;
                printf("| %7d    |   %8s   |   %8s   |  %5s   |  %8s  |%8s  |%8s  | ￥%5d |\n",p3->ID,p3->staddress,p3->arraddress,p3->DATE,p3->TYPE,p3->stime,p3->atime,p3->value);
            }else
            printf("|            |            |            |          |          |          |          |         |\n");

            if((p!=NULL) && (p->next != NULL) && (p->next->next != NULL) && (p->next->next->next != NULL)&&(p->next->next->next->next!=NULL)){
                p4=p->next->next->next->next;
                printf("| %7d    |   %8s   |   %8s   |  %5s   |  %8s  |%8s  |%8s  | ￥%5d |\n",p4->ID,p4->staddress,p4->arraddress,p4->DATE,p4->TYPE,p4->stime,p4->atime,p4->value);
            }else
            printf("|            |            |            |          |          |          |          |         |\n");

            if((p!=NULL) && (p->next != NULL) && (p->next->next != NULL) && (p->next->next->next != NULL)&&(p->next->next->next->next!=NULL)&&(p->next->next->next->next->next != NULL)){
                p5=p->next->next->next->next->next;
                printf("| %7d    |   %8s   |   %8s   |  %5s   |  %8s  |%8s  |%8s  | ￥%5d |\n",p5->ID,p5->staddress,p5->arraddress,p5->DATE,p5->TYPE,p5->stime,p5->atime,p5->value);
            }else
            printf("|            |            |            |          |          |          |          |         |\n");

            if(p!=NULL)
            p=p->next;
            if(p == NULL){
                p=plist->next;
            }
            printf("|--------------------------------------------------------------------------------------------|\n");
            printf("|                                            功能键                                          |\n");
            printf("|--------------------------------------------------------------------------------------------|\n");
            printf("|                 1-增加航班信息               |                2-快速一键排序               |\n");
printf("|--------------------------------------------------------------------------------------------|\n");
printf("|                 3-删除航班信息               |                4-退出航班系统               |\n");
printf("|--------------------------------------------------------------------------------------------|\n");
sleep(1.5);
}
}
}

//增加航班数据  KO
void AddMation_list(){
    flag = 0;
    fly_plist new, h=plist;
    linklist_new(&new);

    system("clear");
    printf("|--------------------------------------------------------------------------------------------|\n");
    printf("|--------------------------------------------------------------------------------------------|\n");
    printf("|                                     增加航班数据(空格隔开)                                 |\n");
    printf("|--------------------------------------------------------------------------------------------|\n");
    printf("|   航班号   |   起点站   |   终点站   |   班期   |   机型   |   起飞   |   到达   |   票价  |\n");
    printf("|--------------------------------------------------------------------------------------------|\n");
    printf("请输入航班号：");
    scanf("%d",&(new->ID));
    printf("请输入起点站：");
    scanf("%s", new->staddress);
    printf("请输入终点站：");
    scanf("%s",new->arraddress);
    printf("请输入班期：");
    scanf("%s",new->DATE);
    printf("请输入机型：");
    scanf("%s",new->TYPE);
    printf("请输入起飞时间：");
    scanf("%s", new->stime);
    printf("请输入到达时间：");
    scanf("%s", new->atime);
    printf("请输入票价：");
    scanf("%d",&(new->value));
    while( getchar()!= '\n');
    while((h->next) != NULL){
        h = h->next;
    }
    h->next = new;
    save_ListToFile();
    sleep(1);
    flag = 1;
}

//单链表从小到大排序
//第一个for（外循环）
//f1，外循环指向链表第一个有数据的结点（plist结点内是无数据的）
//last_f1,指向f1的前一个节点
//
//第二个for（内循环）
//f1指向比较的第一个结点，比较往后，last_f1往后移一位，f1再继续指向last_f1->next，
//lenght，统计有数据的节点的长度
void Reorder_list(){
    flag = 0;     

    int list_flag = 0;
    int i, j, lenght=0;
    fly_plist p=plist->next;
    fly_plist f1, last_f1, swap;

    while(p != NULL){
        p=p->next;
        lenght++;
    }

    for(i=lenght; i>1; i--){
        last_f1 = plist;          //外循环，last_f1，f1重新指向
        f1=plist->next;
        for(j=i; j>1; j--){
            //if(f1->ID > f1->next->ID){
            if(strcmp(f1->stime,f1->next->stime)>0){
                list_flag = 1;
                swap = f1->next;            //保存f1->next的值
                f1->next = f1->next->next;  //将f1->next从链表里断开

                last_f1->next = swap;       //将swap的节点接在f1前面
                last_f1->next->next = f1;
            }
            last_f1 = last_f1->next;        //last_f1 往后移一位
            f1 = last_f1->next;             //内循环，f1指向last_f1的后一个节点 
        }
        if(list_flag == 0){
            break;
        }
    }
    
    show_list("|                                        排序完成!!!                                         |\n");
    save_ListToFile(); //将链表内数据存入本地
    flag = 1;
}

//删除航班数据主界面 KO
void Delete_List(){
    flag = 0;
    int num;
    int flag_delete=1;
    while(flag_delete==1){
        system("clear");
        printf("|--------------------------------------------------------------------------------------------|\n");
        printf("|--------------------------------------------------------------------------------------------|\n");
        printf("|                                        删除航班数据                                        |\n");
        printf("|--------------------------------------------------------------------------------------------|\n");
        printf("|        1-按航班号删除         |        2-按班期删除        |       3-退出删除操作          |\n");
        printf("|--------------------------------------------------------------------------------------------|\n");
        printf("|                          提示：比如按航班号删除，相同的航班号都会被删除                    |\n");
        printf("|--------------------------------------------------------------------------------------------|\n");
        printf(">>请输入选项:");
        scanf("%d",&num);
        switch(num){
            case 1: delete_1(); break;
            case 2: delete_2(); break;
            case 3: flag_delete = 0 ;break;
            default: while(getchar()!='\n'); break;
        }
    }
    flag = 1;
}

//按航班号删除数据 KO
void delete_1(){
    int id_num, id_flag=0;
    system("clear");
    printf("|--------------------------------------------------------------------------------------------|\n");
    printf("|--------------------------------------------------------------------------------------------|\n");
    printf("|                                         按航班号删除                                       |\n");
    printf("|--------------------------------------------------------------------------------------------|\n");
    printf("|                                   提示：相同的航班号都会被删除                             |\n");
    printf("|--------------------------------------------------------------------------------------------|\n");
    fly_plist p3=plist->next;
    printf("航班号： ");
    while(p3 != NULL){
        printf("%d\t",p3->ID);
        p3 = p3->next;
    }
    printf("\n>>请输入删除航班号:");
    scanf("%d",&id_num);
    fly_plist p1,p2;
    p1=plist;
    p2=p1->next;
    while(p2!=NULL){
        if(p2->ID==id_num){
            free(p2);
            p2=p2->next;
            p1->next=p1->next->next;
            id_flag = 1;
            printf("执行->删除航班ID:%d ...\n", id_num);
        }else{
            p1=p1->next;
            p2=p2->next;
        }
    }
    if(id_flag==0){
        printf("没有找到该航班号!!!\n");
    }
    if(id_flag == 1){
        save_ListToFile();
    }
    while(getchar() != '\n');   //清除其他字符的缓存
    sleep(1.5);
}

//按班期删除航班数据 KO
void delete_2(){
    int data_flag = 0;
    char data[12];
    system("clear");
    printf("|----------------------------------------------------------------------------|\n");
    printf("|                                 按班期数据                                 |\n");
    printf("|----------------------------------------------------------------------------|\n");
    printf("|                     提示：相同的班期号航班都会被删除                       |\n");
    printf("|----------------------------------------------------------------------------|\n");
    fly_plist p3=plist->next;
    printf("班期： ");
    while(p3 != NULL){
        printf("%s\t",p3->DATE);
        p3 = p3->next;
    }
    printf("\n>>请输入删除班期：");
    scanf("%s", data);
    fly_plist p1,p2;
    p1=plist;
    p2=p1->next;
    while(p2!=NULL){
        if(strcmp(p2->DATE,data)==0){
            free(p2);
            p2=p2->next;
            p1->next=p1->next->next;
            data_flag = 1;
            printf("执行->删除航班 班期:%s ...\n", data);
        }else{
            p1=p1->next;
            p2=p2->next;
        }
    }
    if(data_flag == 0)
    printf("没有找到该班期航班!!!\n");
    if(data_flag == 1){
        save_ListToFile();
    }
    while(getchar() != '\n');    //清除其他字符的缓存
    sleep(1.5);
}

//将链表数据保存到本地文件  KO
void save_ListToFile(){
    FILE *fp;
    fly_plist p=plist->next;      //临时指针

    if((fp = fopen("fly_date.bat","wb"))!=NULL){
        printf("已打开文件!!!\n");
        while( p != NULL ){
            fwrite(p, sizeof(fly_list),1,fp);
            p=p->next;
        }
    }
    else 
    perror("打开本地文件失败!!!");   
    show_list("|                                     本地数据已更新!!!                                      |\n");
    fclose(fp);
}


void show_beybey(){
    flag = 0;
    show_list("|                                        正在退出!!!                                         |\n");
    save_ListToFile(); //保存到本地文件
    flag = -1;
}

//加载本地文件数据  KO
void IS_load_file(){

    FILE *fp;
    fly_plist new;
    fly_plist p=plist;      //临时指针
    if((fp = fopen("fly_date.bat","a+"))!=NULL)
    {
        //  DataToList(&fp,plist);
        int i=0;
        for(;!feof(fp); i++){
            linklist_new(&new);
            fread(new, sizeof(fly_list),1,fp);
            if((new->value) != 0 ){
                new->next = p->next;
                p->next=new;
                p=p->next;
            }
        }
    }
    else 
    show_list("|                                    打开本地文件失败!!!                                     |\n");

    show_list("|                                   加载本地文件成功!!!                                      |\n");
    fclose(fp);
}


//开辟全局变量 plist 新的节点空间   KO
void linklist_plist(){
    plist=(fly_plist)malloc(sizeof(fly_list));
    if(NULL == plist){
        perror("malloc\n");
        exit(-1);
    }
    plist->next=NULL;
}

//开辟新的节点空间    KO
void linklist_new(fly_plist *new){
    *new=(fly_plist)malloc(sizeof(fly_list));
    if(NULL == *new){
        perror("malloc\n");
        exit(-1);
    }
    (*new)->next=NULL;
}

