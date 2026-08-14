#include <stdio.h>

int main(){
    int n;
    int prime = 0;
    
    printf("Enter the number: \n");
    scanf("%d", &n);

    if(n==0 || n==1){
        printf("%d is not a prime number.\n", n);
        return 0;
    }
    
        else{
    
     
    for (int i=2; i<=n/2; i++){
        if (n%i==0 && n!=2){
           prime = 1;
            break;
        }
    }
    
    if (n==2 || prime == 0){
        printf("%d is a prime number.\n", n);
    }
    else{
        printf("%d is not a prime number.\n", n);
    }
}
    return 0;
}