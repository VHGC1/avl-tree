# include <stdio.h>
# include "avl-tree.c"


main(){
 int num, nnum; 
 FILE *arquivo; 
 arv *raiz; 
 
 criaGalhoNulo(&raiz); 
 criarArquivo(arquivo);
 carregaArquivo(&raiz);



 
 while(num!=16){ 
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
			printf("Numero de nos: %d", quantNo(raiz));
			break;
		case 8:
			printf("lal %d", quantNo(raiz));
			noPrimo(raiz);
			break;
		case 9:
			comparar(raiz,raiz);
			break;	
		case 10:
			impressao(copiar(raiz));
			break;
			/*
		case 11:
			lista();
			break;
		case 12:
			altura();
			break;
		case 13:
			inOrder();
			break;
		case 14:
			preOrder();
			break;
		case 15:
			postOrder();
			break;
			*/
  }
   getch();
   system("cls");
 }
}
