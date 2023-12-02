#include "stdio.h"

int main()
{
    char operator1, operator2;
    float operand1,operand2,operand3,hasil;

    printf("Masukkan ekspresi bilangan => ");
    scanf("%f %c %f %c %f", &operand1, &operator1, &operand2, &operator2, &operand3);

    if(operator1 == '*'){
        switch (operator2){
            case '*': 
                hasil = operand1 * operand2 * operand3;
                break;
            case '/':
                if(operand3 == 0){
                    printf("Bilangan tidak bisa dibagi 0");
                    return 0;
                } else {
                    hasil = operand1 * operand2 / operand3;
                }
                break;
            case '+':
                hasil = operand1 * operand2 + operand3;
                break;
            case '-':
                hasil = operand1 * operand2 - operand3;
                break;
            
            default:
                break;
        }
    } else if(operator1 == '/'){
        if(operand2 == 0){
            printf("Bilangan tidak bisa dibagi 0");
            return 0;
        } else {
            switch (operator2)
            {
                case '*': 
                    hasil = operand1 / operand2 * operand3;
                    break;
                case '/':
                    if(operand3 == 0){
                        printf("Bilangan tidak bisa dibagi 0");
                        return 0;
                    } else {
                        hasil = operand1 / operand2 / operand3;
                    }
                    break;
                case '+':
                    hasil = operand1 / operand2 + operand3;
                    break;
                case '-':
                    hasil = operand1 / operand2 - operand3;
                    break;
                
                default:
                    break;
            }
        }
    } else if(operator1 == '+'){
        switch (operator2)
        {
            case '*': 
                hasil = operand1 + (operand2 * operand3);
                break;
            case '/':
                if(operand3 == 0){
                    printf("Bilangan tidak bisa dibagi 0");
                    return 0;
                } else {
                    hasil = operand1 + (operand2 / operand3);
                }
                break;
            case '+':
                hasil = operand1 + operand2 + operand3;
                break;
            case '-':
                hasil = operand1 + operand2 - operand3;
                break;
            
            default:
                break;
        }
        
    } else if(operator1 == '-'){
        switch (operator2)
        {
            case '*': 
                hasil = operand1 - (operand2 * operand3);
                break;
            case '/':
                if(operand3 == 0){
                    printf("Bilangan tidak bisa dibagi 0");
                    return 0;
                } else {
                    hasil = operand1 - (operand2 / operand3);
                }
                break;
            case '+':
                hasil = operand1 - operand2 + operand3;
                break;
            case '-':
                hasil = operand1 - operand2 - operand3;
                break;
            
            default:
                break;
        }
        
    } 

    printf("Hasil %.2f %c %.2f %c %.2f = %.2f\n",operand1,operator1,operand2,operator2,operand3,hasil);
    return 0;
}