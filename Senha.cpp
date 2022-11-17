#include <stdio.h>
 
int main(){
    
    int senha,rep;
    
    do{
        scanf("%d",&senha);
        
        if(senha==2002){
            printf("Acesso Permitido\n");
            return 0;
        }else{
            printf("Senha Invalida\n");    
        }
    }while(rep!=2002);
 
    return 0;
}
