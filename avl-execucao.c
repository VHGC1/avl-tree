# include <stdio.h>
# include "avl-tree.c"


main(){
 int num, nnum; 
 FILE *arquivo; 
 arv *raiz; 
 
 criaGalhoNulo(&raiz); 
 criarArquivo(arquivo);
 carregaArquivo(&raiz);

 
 while(num!=9){ 
  cor(1); 
 
  menu(&num); 
 
  switch(num){ 
		case 1:
			lerNumero(&nnum);
			insereElemento(&raiz,nnum); 
			EscreverArquivo(arquivo,nnum);
			printf("\ni = %d\n",nnum);
			impressao(raiz);
			break; 
		case 2:
			impressao(raiz);
			break; 
		case 3:
			lerNumero(&nnum);
			cor(10);printf("\n b = ");
			busca(raiz,nnum);
			break;
		case 4:
			lerNumero(&nnum);
			excluirElemento(&raiz,nnum);
			salva(raiz);
			impressao(raiz);
			break; 
		case 5:
			system("avl.txt");
			break;
		case 6:
			printf("%d", quantFolhas(raiz));	
			break;
		case 7:
			printf("%d", quantNo(raiz));
			break;
  }
   getch();
   system("cls");
 }
}
