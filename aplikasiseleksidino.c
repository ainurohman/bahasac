#include <stdio.h>
int main(){
        int hari;
        printf("APLIKASI SELEKSI DINO");
        printf("======================");
        printf("Masukan angka (1-7):");
        scanf("%d", &hari);
switch (hari) {
        case 1:
                printf("Hari : Senin\n");
                break;
        case 2:
                printf("Hari : Selasa\n");
                break;
        case 3:
                printf("Hari : Rabu\n");
                break;  
        case 4:
                printf("Hari : Kamis\n");
                break;
        case 5:
                printf("Hari : Jumat\n");
                break;
        case 5:
                printf("Hari : Sabtu\n");
                break;
        case 6:
                printf("Hari : Minggu\n");
                break;
        default:
                printf("Pilihan tidak valid\n");
                break;
}
return 0;
}
