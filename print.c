#include "phone.h"

void printAll(){

    extern struct Contact PhoneBook[MAX];
    extern int size;
    int i;

    printf("<<Display all contacts in the PhoneBook>>\n");

    for(i=0;i<size;i++){
        printf("%s  %s\n",PhoneBook[i].Name, PhoneBook[i].PhoneNumber);
    }
}
