#include<stdio.h>

int main()
{
    int N ;
    float F,i;
    printf("veuillez entrer la valeur de N :");
    scanf("%d",&N);
    F = 1;
    if(N>0){
    for(i=2;i<= N ;i++ ){
     F=F*i;
    }
    printf("la fonction de %d est:%.0f",N,F);
    }
    else if(N==0)
    printf("la fonction de %d est:1",N);
    
    else
    printf("veuillez saisie un nombre positive");

     
    return 0;
}