#include <stdio.h>

int main(){
    int x = 0;
    do{
        int baris, kolom, isi;
        scanf("%d %d", &baris, &kolom);
        int angka[baris][kolom];
        for (int i = 0; i < baris; i++){
            for (int j = 0; j < kolom; j++){
                scanf("%d", &isi);
                angka[i][j] = isi;
            }
        }
        printf("\n");
        for (int i = 0; i < baris; i++){
            for (int j = 0; j < kolom; j++){
                printf("%d ", angka[i][j]);
            }
            printf("\n");
        }
    x++;
    }while(x<=2);
    return 0;
}