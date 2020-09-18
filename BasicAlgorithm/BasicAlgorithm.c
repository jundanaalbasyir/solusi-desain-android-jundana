//
//  BasicAlgorithm.c
//  
//
//  Created by Jundana Al-Basyir on 18/09/20.
//

#include <stdio.h>

int main(){
    int angka[10][10];
    int x,y,i;
    
    printf("Masukkan dimensi matrix =");
    scanf("%d",&i);

    for(x=0;x<i;x++){
        for(y=0;y<i;y++){
            printf("Masukkan angka didalam matrix=");
            scanf("%d", &angka[x][y]);
        }
    }

    printf("[");
    for(x=0;x<i;x++){
        printf("[");
        for(y=0;y<i;y++){
            printf("%d,",angka[x][y]);
        }
        printf("]");
    }
    printf("]");
    return 0;
}


