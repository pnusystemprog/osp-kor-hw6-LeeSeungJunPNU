#include "phone.h"

void searchByName(){
    extern struct Contact PhoneBook[MAX];
    extern int size;
    char name[10];
    int i;
    int check;

    printf("Enter a name to search: ");
    scanf("%s", name);

    for(i=0; i<size; i++){
        if(strcmp(PhoneBook[i].Name, name)==0){
            printf("%s %s\n", PhoneBook[i].Name, PhoneBook[i].PhoneNumber);
            check=1;}
        if(check != 1){
            printf("Oops! %s is not in the PhoneBook\n",name);
        }
    }

}
