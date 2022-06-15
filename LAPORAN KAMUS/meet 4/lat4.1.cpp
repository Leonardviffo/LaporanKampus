#include <stdio.h>

main() {
    int kdhari;
  	printf( " LEONARD VIFFO | 211011401240 | 02-TPLE011");
  	printf("\n");
    printf(" Masukkan kode hari [1-7] : "); scanf("%d", &kdhari);
    printf("\n");
  
    switch (kdhari) {
        case 1:
            printf(" Senin"); break;
        case 2:
            printf(" Selasa"); break;
        case 3:
            printf(" Rabu"); break;
        case 4:
            printf(" Kamis"); break;
        case 5:
            printf(" Jum'at"); break;
        case 6:
            printf(" Sabtu"); break;
        case 7:
            printf(" Minggu"); break;
        default:
            printf(" Kode tidak ada");
    }
  
    printf("\n");
}
