#include <stdio.h>

int main(){
    int x = 0;
    do{
        int baris, isi;
        scanf("%d", &baris);
        int angka[baris];
        for(int i = 0; i < baris; i++){
            scanf("%d", &isi);
            angka[i] = isi;
        }
        for(int i = 0; i < baris; i++){
            printf("%d ", angka[i] * (i + 1));
        }
    x++;
    }while(x<=2);
    return 0;
}