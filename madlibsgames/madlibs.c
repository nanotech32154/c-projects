#include <stdio.h>
#include <string.h>
int main(){
    char adj[50];
    printf("Enter an adjective: ");
    fgets(adj,sizeof(adj),stdin);
    adj[strlen(adj)-1]='\0';
    char noun[50];
    printf("Enter a name: ");
    fgets(noun,sizeof(noun),stdin);
    noun[strlen(noun)-1]='\0';
    char adj1[50];
    printf("Enter an adjective: ");
    fgets(adj1,sizeof(adj1),stdin);
    adj1[strlen(adj1)-1]='\0';
    char verb[50];
    printf("Enter a verb ending with <ing>: ");
    fgets(verb,sizeof(verb),stdin);
    verb[strlen(verb)-1]='\0';
    char adj2[50];
    printf("Enter an adjective: ");
    fgets(adj2,sizeof(adj2),stdin);
    adj2[strlen(adj2)-1]='\0';
    printf("\n\nToday I went to a %s zoo\n",adj);
    printf("In an exhibit, I saw a %s\n",noun);
    printf("%s was %s and %s!\n",noun,adj1,verb);
    printf("I was %s!\n",adj2);
    return 0;

}
    
