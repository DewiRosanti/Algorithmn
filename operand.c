#include "stdio.h"

int main()
{
    int operand1 = 10;
    double operand2 = 5.4;

    // Operasi aritmatika menggunakan operator
    double hasilpenambahan = operand1 + operand2;
    double hasilpengurangan = operand1 - operand2;
    double hasilperkalian = operand1 * operand2;
    double hasilpembagian = operand1 / operand2;
    int hasilmodulus = operand1 % (int)operand2;

    printf("Hasil penambahan = %f\n ",hasilpenambahan);
    printf("Hasil pengurangan = %f\n ",hasilpengurangan);
    printf("Hasil perkalian = %f\n ",hasilperkalian);
    printf("Hasil pembagian = %f\n ",hasilpembagian);
    printf("Hasil modulus = %d\n ",hasilmodulus);

    return 0;
}