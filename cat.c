#include <stdio.h>

void clear(){
printf("\033c");
fflush(stdout);
}


int main(){
    char word[1001];
    printf("Digite algo de até 1000 caracteres:\n");
    printf("Type something up to 1000 characters\n");
    printf("1000文字以内で入力してください：\n");
    printf("Entrez jusqu'à 1000 caractères :\n");
    printf("Inserisci qualcosa fino a 1000 caratteri:\n");
    printf("Ingrese un texto de hasta 1000 caracteres:\n");
    
    
    fgets(word, sizeof(word), stdin);
    
    clear();
                       
   printf("O gato disse:\n");
   printf("%s\n",word);
   printf("               ▞▚▁▁▁▞▚     ▃▃ \n");       
   printf("              ▐ ▖   ▖▐     ▚ ▚\n");       
   printf("              ▚   3 ▁▞▁▁▁▁ ▟▘▞\n");       
   printf("               ▔▔▚        ▙▘▞\n");       
   printf("                  ▌   ▁▁   ▞\n");         
   printf("                  ▙▞▚▟  ▙▞▟\n"); 

return 0;
}

