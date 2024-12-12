#include<stdio.h>
void arbre(int hc,int ht,int lt){
	int m =hc/2;
	for(int i=1;i<=hc;i++){
		for (int k=hc;k>i;k--){
			printf(" ");
		}
		printf("/");
		for (int j=1; j<=i ;j++){
			printf("*");
		}
		printf("\\");
		printf("\n");
	}
	
	for (int h =1;h<=ht;h++){
		for (int space=2;space<m;space++){
			printf(" ");
		}
		}
		for (int d=1;d<=lt;d++){
			printf("|");
		}
		printf("\n");

	

}	

int main(){
	int hc,lt,ht;
	printf("dooner la hauteur du cone \n");
	printf("donner la hauteur du tronc \n");
	printf("donner la largeur du tronc \n");
	scanf("%d%d%d",&hc,&ht,&lt);
	arbre(hc,ht,lt);
	return 0;
}
		
