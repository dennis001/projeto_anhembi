#include<stdio.h>
#define T 5

void main()
{
    int vt[T],t[T],x[T];
    char soma;
    int i;
    for (i=0;i<T;i++){
    printf("numero vetor %d: ",i+1);
    scanf("%d",&vt[i]);
    }
    printf("----------------------------------\n");
    for (i=0;i<T;i++){
    printf("numero vetor %d: ",i+1);
    scanf("%d",&t[i]);
    }
    for (i=0;i<T;i++){
        printf("Escolha a operacao: ");
        scanf("%s",&soma);
    }
    for (i=0;i<T;i++){
    switch (soma)
    {
        case '+':
        if (soma == '+'){
        x[i] = vt[i]+t[i];
        }
        case '-':
        if (soma == '-'){
        x[i] = vt[i]+t[i];
        }
        case '*':
        if (soma == '*'){
        x[i] = vt[i]+t[i];
        }
        case '/':
        if (soma == '/'){
        x[i] = vt[i]+t[i];
        }
    }
        printf(" %d ",x[i]);


    }
}