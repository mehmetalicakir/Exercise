#include <stdio.h>
#include <stdlib.h>

int main()
{


    int i,k=0,bdizi1,bdizi2,bdizi3,tdizi1=0,tdizi2=0;
    float ortdizi1,ortdizi2,ortdizi3;
    //Birinci dizi icin islemlerin basi
    printf("1. dizinin boyutunu girin:");
    scanf("%d",&bdizi1);
    int *dizi1 = malloc(sizeof(int)*bdizi1);
    printf("1. dizinin elemanlarini girin:\n");
    for(i=0;i<bdizi1;i++){
    scanf("%d",&dizi1[i]);
    tdizi1+=dizi1[i];}
    //Birinci dizi icin islemlerin sonu

    //Ikinci dizi icin islemlerin basi
    printf("\n2. dizinin boyutunu girin:");
    scanf("%d",&bdizi2);
    int *dizi2 = malloc(sizeof(int)*bdizi2);
    printf("2. dizinin elemanlarini girin:\n");
    for(i=0;i<bdizi2;i++){
    scanf("%d",&dizi2[i]);
    tdizi2+=dizi2[i];}
    //Ikinci dizi icin islemlerin sonu
    int *dizi3 = malloc(sizeof(int)*(bdizi1+bdizi2));
    printf("\n3. dizinin elemanlarini:\n");
    for(i=0;i<bdizi1;i++){
    dizi3[k]=dizi1[i];
    k++;}
    for(i=0;i<bdizi2;i++){
    dizi3[k]=dizi2[i];
    k++;}
    for(i=0;i<k;i++){
    printf("%d\n",dizi3[i]);
    }

    ortdizi1=tdizi1/(float)bdizi1;
    ortdizi2=tdizi2/(float)bdizi2;
    ortdizi3=(tdizi1+tdizi2)/(float)k;

    printf("\n1.dizinin ortalamasi= %.2f",ortdizi1);
    printf("\n2.dizinin ortalamasi= %.2f",ortdizi2);
    printf("\n3.dizinin ortalamasi= %.2f",ortdizi3);
    return 0;
}
