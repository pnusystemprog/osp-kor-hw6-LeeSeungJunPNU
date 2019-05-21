#include "phone.h"

void registerPhoneData(){
    char pwd[10];
    char ad_pwd[10]="qwert1234";
    extern struct Contact PhoneBook[MAX];
    extern int size;
    static int count;

    while(strcmp(pwd, ad_pwd)!=0){
        printf(" Ask to type password \n");
        scanf("%s", pwd);
        if(strcmp(pwd, ad_pwd)==0) count = -1;
        switch(count){
            case 0: printf(">>Not Matched!!!\n",count); count++; break;
            case 1: printf(">>Not Matched(twice)!!!\n"); count++; break;
            case 2: printf(">>Not Matched(3 times)!!!\n"); count++; break;
            case 3: printf(">>You are not allowed to access PhoneBook.\n"); count=0; return 0;
        }
    }
    printf(" New User Name ");
    scanf("%s", PhoneBook[size].Name);
    printf(" Phone Number ");
    scanf("%s", PhoneBook[size].PhoneNumber);
    size++;

}
