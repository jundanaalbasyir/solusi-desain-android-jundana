//
//  sorting.c
//  
//
//  Created by Jundana Al-Basyir on 18/09/20.
//

#include <stdio.h>

int main(){
    int A[7]={4,9,7,5,8,9,3};
    int i,j,t,x,k;
    
    
    printf("Angka sebelum diurutkan: \n");
    for(i=0;i<=6;i++){
        printf("%d",A[i]);
    }
    
    printf("\n");
    x=0;
    for(i=0;i<6;i++){
        for(j=0;j<=6;j++){
            if(A[j]>A[j+1]){
                 t=A[j];
                A[j] = A[j+1];
                A[j+1] = t;
                printf("\n[%d, %d] -> ",A[j], A[j+1]);
                
                //mencetak semua angka setelah ditukar
                for(k=0;k<=6;k++){
                printf("%d",A[k]);
                }
                x=x+1;
            }
        }
        
    }
    
    
    printf("\nHASIL URUT: \n");
    for(i=0;i<=6;i++){
        printf("%d",A[i]);
    }
    
    printf("\nJumlah swap = %d",x);
    return 0;    
}
