#include <stdio.h>
 
int main() {
 
    int N,X=0;
    
    scanf("%d",&N);
    
	for(int i=1;i<N;i++){
        if(N%i==0){
        	X=X+i;
		}
    }
    if(X==N){
    	printf("%d eh perfeito\n",N);
	}else {
		printf("%d nao eh perfeito\n",N);
	}
    return 0;
}
