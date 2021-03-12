/* Struct que d� base � arvore bin�ria */
struct arv
{
  int num;          /* Elemento do tipo inteiro */
  struct arv *esq;  /* Ponteiro para acessar os elemento a esquerda da raiz */
  struct arv *dir; /* Ponteiro para acessar os elementos a direita da raiz */
};
/*Cria um sinonimo para struct arv */
typedef struct arv arv;     

/***********************************
**  Prot�tipos das funcoes  **
************************************/

/***********************************
**  Funcoes normais de uma arvore  **
************************************/

void impressao(arv*raiz); /* Imprime os elementos da arvore */
arv** menorDireito(arv*raiz); /* Retorna o menor elemento da direita */
arv** maiorEsquerdo(arv*raiz);/* Retorna o maior elemento da esquerda */
void criaGalhoNulo(arv**raiz); /* Inicia a arvore */
void busca(arv*raiz, int elemento); /* Busca elementos na arvore */
void galho(arv**raiz, int elemento); /* Aloca novos n�s na arvore */
void insereElemento(arv**raiz, int elemento); /* Insere elementos na arvore */
void excluirElemento(arv**raiz, int elemento);/* Exclui elementos da arvore */

/************************************************
**  Funcoes que transformam uma arvore bin�ria em AVL  **
*************************************************/

int contEsq(arv*raiz); /* Retorna a altura esquerda da arvore */
int contDir(arv*raiz);/* Retorna a altura direita da arvore */
int balanceamento(arv*raiz); /* Retorna o fator de balanceamento da arvore */
arv* duplaDireita(arv*raiz); /* Rotacao dupla direita */
arv* duplaEsquerda(arv*raiz); /* Rotacao dupla esquerda */
arv* rotacaoDireita(arv*raiz); /* Rotacao para direita */
arv* rotacaoEsquerda(arv*raiz); /* Rotacao para esquerda*/
void atualizaDir(arv**raiz,int elemento); /* Balanceamento da direita */
void atualizaEsq(arv**raiz,int elemento); /* Balanceamento da esquerda */

/**************************************************
**  Funcoes para interface e saida (usabilidade) **
***************************************************/

void aviso(); /* Mostra um aviso na tela */
void aviso1();/* Mostra um aviso na tela */
void aviso2();/* Mostra um aviso na tela */
void aviso3();/* Mostra um aviso na tela */
void mensagem(); /* Mostra uma mensagem na tela */
void menu(int *op); /* Menu para escolha de opcoes*/
void cor(WORD cor);/* Funcao para cor de fundo e texto */
void linha( int q, int a);/* Desenha linhas na tela */
void posicao(int x, int y);/* Escolhe posicao da tela */
void lerNumero(int *numero);/* Leitura de numeros */

/******************************************************
**  Funcoes para criacao, entrada, saida de arquivos **
*******************************************************/

void salva(arv*raiz); /*Salva os dados depois da exclucao de um elemento*/
int carregaArquivo(arv**raiz); /* Carrega os elementos anteriores gravados */
void criarArquivo(FILE* arquivo); /* Criacao do arquivo */
void grava(arv*raiz, FILE* arquivo);
void EscreverArquivo(FILE* arquivo, int elemento);/*Escreve no arquivo */
