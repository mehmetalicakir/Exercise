#include <stdio.h>

void adres(int dizi[], int n){
int i,*poi;
for(i=0;i<n;i++){
poi=&dizi[i];
printf("\n%d sayisinin adresi\t\t %u ve %p\n",dizi[i],poi,poi);
}}

int main()
{
    int i,n;
    printf("Dizi boyutunu girin");
        scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){

    printf("Dizinin %d. elemanini giriniz:",i+1);
    scanf("%d",&array[i]);
    }
    adres(array,n);
    return 0;
}
