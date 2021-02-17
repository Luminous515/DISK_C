#ifndef _DATA_H_
#define _DATA_H_

typedef struct userinfo //食堂用户
{
    char username[15];
    char password[15];
}USER;

typedef struct admininfo //后勤管理员用户
{
    char username[15];
    char password[15];
}ADMIN;

typedef struct foodinfo //食材  
{
    char name[15];  //名称
    char type[10];  //种类，如蔬菜、肉类
    int weight;   //重量
}FOOD;

typedef struct supplierinfo //供应商
{
    char name[15];  //名称
    char phone[12]; //电话
}