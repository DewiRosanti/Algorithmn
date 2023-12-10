#include "stdio.h"

int main()
{
    int harga = 10000,jam_main,bayar;
    float diskon,total_bayar,total_diskon;
    printf("Jam Main = "); scanf("%d",&jam_main);
    if(jam_main <= 4){
        diskon = 0;
    } else if(jam_main > 4 && jam_main <= 6){
        diskon = 10;
    } else if(jam_main > 6 && jam_main <= 8){
        diskon = 15;
    } else if(jam_main == 8){
        diskon = 20;
    } else if(jam_main > 8){
        diskon = 25;
    }

    bayar = harga * jam_main;
    total_diskon = (float)bayar * (diskon / 100);
    total_bayar = (float)bayar - total_diskon;
    printf("============================\n");
    printf("Bayar = %d\n", bayar);
    printf("Diskon = %.2f\n", total_diskon);
    printf("Total Bayar = %.2f\n", total_bayar);

    return 0;

}
