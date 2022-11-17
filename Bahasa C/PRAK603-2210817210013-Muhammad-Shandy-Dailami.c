#include <stdio.h>

int main(){
    int x = 0;
    do{
        int baris1, baris2, isi;
        scanf("%d %d", &baris1, &baris2);
        int angka1[baris1], angka2[baris2];
        if(baris1 != baris2){
            printf("Jumlah tidak sama");
        } else {
            for(int i = 0; i < baris1; i++){
            scanf("%d", &isi);
            angka1[i] = isi;
            }
            for(int i = 0; i < baris2; i++){
                scanf("%d", &isi);
                angka2[i] = isi;
            }
            for(int i = 0; i < baris2; i++){
                printf("%d ", angka1[i] * angka2[i]);
            }
        }
    x++;
    }while(x<=2);
    return 0;
}