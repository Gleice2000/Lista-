#include <stdio.h>
#include <stdlib.h>
int cont=0;
//--------------------------
void troca(char *a, char *b)
{
char temp;
temp = *a;
*a = *b;
*b = temp;
}
//-------------------------------
void printVet(char v[], int n){
int i;
for(i=0;i<n;i++)
printf("%c |",v[i]);
printf("\n");
}
//-------------------------------
int getIndexMin(char v[], int ini, int n){
int i, imenor;
imenor = ini;
for(i=ini+1; i<n; i++){
	cont++;
if(v[i] < v[imenor])
imenor = i;
}// fim for
return imenor;
}
//---------------------------
void selectionSortChar(char v[], int n){
int i, imenor;
for(i=0;i<n;i++){
imenor = getIndexMin(v,i,n);
troca(&v[i],&v[imenor]);
} //fim for
}
//-----------------------------
int main(){
int i,n;
char *v;
printf("Quantide de valores para o vetor:");
scanf("%d",&n);
v = malloc(sizeof(char)*n);
printf("Entre com dados para o vetor:");
for(i=0;i<n;i++){
scanf("%s",&v[i]);
v[i] = toupper(v[i]);
}
printf("Vetor recebido:\n");
printVet(v,n);
selectionSortChar(v,n);
printf("\nVetor ordenado - %d comparacoes \n", cont);
printVet(v,n);
return 0;

}
