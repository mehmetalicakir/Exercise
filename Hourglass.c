#include <stdio.h>
int main(){
	
	int int1,int2,int3,n;
	printf("Bir sayi giriniz: ");
	scanf("%d",&n);
	
		for(int1=0;int1<=n;int1++){   //Kum saatinin üst kısmının satırlarını saymak için döngü oluşturuldu
		for(int2=0;int2<=int1;int2++){ // Kum saatinin üst kısmının her boşlukları yazdırmak için döngü oluşturuldu
			
			printf(" ");
		}
		for(int3=2*(n-int1)-1;int3>=1;int3--){ //Kum saatinin üst kısmındaki her satırdaki yıldızları yazdırmak için döngü oluşturuldu
							//2*(n-int1)-1 olmasının sebebi düzenli bir şekilde azalışı sağlamak için
			printf("*");
		}
printf("\n");
	}
	
	
	for(int1=0;int1<=n;int1++){	//Kum saatinin alt kısmının satırlarını saymak için döngü oluşturuldu
		for(int2=n;int2>=int1;int2--){// Kum saatinin alt kısmının her boşlukları yazdırmak için döngü oluşturuldu
			
			printf(" ");
		}
		for(int3=1;int3<2*int1;int3++){ //Kum saatinin alt kısmındaki her satırdaki yıldızları yazdırmak için döngü oluşturuldu
						//2*int1 olmasının sebebi o anki satır sayısının iki katından bir eksik olması gerekmesidir.(koşulda <= olmadığından dolayı bir eksik oluyor.)
			printf("*");
		}
printf("\n");
	}

	
	return 0;
}
