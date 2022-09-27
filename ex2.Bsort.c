#include <stdio.h>
#include <stdlib.h>
int cont=0;
//--------------------------
void troca(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
//-------------------------------
void printVet(int v[], int n){
int i;
for(i=0;i<n;i++)
printf("%d |",v[i]);
printf("\n");
}
//------------------------------
void geraVet(int v[],int n){
int i;
srand(time(NULL));
for(i=0;i<n;i++)
v[i] = rand()%50;
}
//-------------
void bsort(int v[], int n){
int fase, comp;
for(fase=1;fase<n;fase++){
for(comp=0;comp<n-fase;comp++){
cont++;
if(v[comp]<v[comp+1]){
troca(&v[comp],&v[comp+1]);
}
}
}
}
//-------------
int main(){
int *v,i,n;
printf("Qtde de valores para o vetor:");
scanf("%d",&n);
v = malloc(sizeof(int)*n);
geraVet(v,n);
printf("Vetor recebido:\n");
printVet(v,n);
bsort(v,n);
printf("\nVetor ordenado de forma decrescente - %d
comparacoes:\n",cont);
printVet(v,n);
return 0;
}
