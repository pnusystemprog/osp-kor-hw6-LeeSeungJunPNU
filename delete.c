#include "phone.h"

void deleteByName(){
    extern struct Contact PhoneBook[MAX];
    extern int size;
    char name[10];
    int i;
    int x = -1;

    printf("Enter a name to delete: ");
    scanf("%s",name);

    for(i=0;i<size;i++){
        if(strcmp(PhoneBook[i].Name, name)==0) x=i;}
    if(x == -1){
        printf("Oops! %s is not in the PhoneBook\n",name);
    }else{
        for(x;x<size-1;x++){
            strcpy(PhoneBook[x].Name,PhoneBook[x+1].Name);
            strcpy(PhoneBook[x].PhoneNumber,PhoneBook[x+1].PhoneNumber);}
        size--;
    }



}
