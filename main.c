#include <stdio.h>
#include "meu_racional.h"

int main ()
{

/** ------ PARTE ORIGINAL DO PROGRAMA: MEU_RACIONAL ------*/
	MeuRacional_pt ptC1=NULL, ptC2=NULL, ptC3=NULL;

	/*veja que aqui neste ponto faço chamadas de algumas funções
	 * através dos ponteiros que estão na tabela vtbl (ponteiro "metodo")
	 * da superclasse "Numero". Como as funções desta tabela esperam
	 * receber "ponteiro para Numero_t", preciso converter o ptX1 para
	 * Numero_pt e depois converter o resultado "de volta" para
	 * MeuDouble_pt */


	ptC1 = Racional_constroi (ptC1, 1, 2);

	ptC2 = ptC1->Metodo->copia (ptC1);

	printf ("Os dois numeros sao %s %s \n",
				ptC1->Metodo->imprime (ptC1),
				ptC2->Metodo->imprime (ptC2));

    ptC3 = Racional_constroi (ptC3, 1, 4); 
    ptC3 = ptC2->Metodo->atribui (ptC2, ptC3);
    ptC3 = ptC3->Metodo->reduzir(ptC3);
    printf ("ptC3 recebeu o valor de Y2 = %s \n",
				ptC3->Metodo->imprime (ptC3));


    ptC3 = ptC1->Metodo->soma(ptC1, ptC2, ptC3); // ptC3 = 200/400
    ptC3 = ptC3->Metodo->reduzir(ptC3);
    printf ("ptC3 recebeu a soma de Y1 com Y2 = %s \n",
				ptC3->Metodo->imprime (ptC3));

    ptC3 = ptC3->Metodo->subt(ptC3, ptC2, ptC3); // ptC3 = 205/8000
    ptC3 = ptC3->Metodo->reduzir(ptC3);
    printf ("ptC3 recebeu a subtracao de Y3 com Y2 = %s \n",
				ptC3->Metodo->imprime (ptC3));

    ptC3 = ptC1->Metodo->mult(ptC1, ptC2, ptC3);
    ptC3 = ptC3->Metodo->reduzir(ptC3);
    printf ("ptC3 recebeu a multiplicacao de Y1 com Y2 = %s \n",
                 ptC3->Metodo->imprime (ptC3));

    ptC3 = ptC1->Metodo->divd(ptC1, ptC2, ptC3);
    ptC3 = ptC3->Metodo->reduzir(ptC3);
    printf ("ptC3 recebeu a divisão de Y1 com Y2 = %s \n",
                 ptC3->Metodo->imprime (ptC3));

    ptC3 = ptC1->Metodo->ac_soma(ptC3, ptC2);
    ptC3 = ptC3->Metodo->reduzir(ptC3);
    printf ("ptC3 foi somado com Y2 = %s \n",
				ptC3->Metodo->imprime (ptC3));

    ptC3 = ptC3->Metodo->ac_subt(ptC3, ptC2);
    ptC3 = ptC3->Metodo->reduzir(ptC3);
    printf ("ptC3 foi subtraido de Y2 = %s \n",
				ptC3->Metodo->imprime (ptC3));

    ptC3 = ptC1->Metodo->ac_mult(ptC3, ptC2);
    ptC3 = ptC3->Metodo->reduzir(ptC3);
    printf ("ptC3 foi multiplicado por Y2 = %s \n",
                 ptC3->Metodo->imprime (ptC3));

    ptC3 = ptC1->Metodo->ac_divd(ptC3, ptC2);
    ptC3 = ptC3->Metodo->reduzir(ptC3);
    printf ("ptC3 foi dividido por Y2 = %s \n",
                 ptC3->Metodo->imprime (ptC3));

    if (ptC1->Metodo->compara(ptC1,ptC2)==0)
    {
       printf ("Y1 eh igual a Y2 = %s\n", ptC1->Metodo->imprime(ptC1));
    }
    if (ptC1->Metodo->compara(ptC2,ptC3)>0)
    {
       printf ("Y2 eh maior que Y3 \n");
    }
    if (ptC1->Metodo->compara(ptC2,ptC3)<0)
    {
       printf ("Y2 eh menor que Y3 \n");
    }

  ptC3 = ptC2->Metodo->atribui (ptC2, ptC3); // ptC3 = 5/20
    ptC3 = ptC3->Metodo->reduzir(ptC3);
    printf ("ptC3 recebeu o valor de Y2 = %s \n",
		ptC3->Metodo->imprime (ptC3));
  
  printf("\nFunções bônus!\n\n");
  
  ptC3 = ptC3->Metodo->inverter(ptC3);
  ptC3 = ptC3->Metodo->reduzir(ptC3);
  printf ("ptC3 foi invertido = %s \n",
	ptC3->Metodo->imprime (ptC3));

  ptC3 = ptC3->Metodo->inverter(ptC3);
  ptC3 = ptC3->Metodo->reduzir(ptC3);
  printf ("ptC3 foi invertido = %s \n",
	ptC3->Metodo->imprime (ptC3));

  ptC3 = ptC3->Metodo->elevar_quad(ptC3);
  ptC3 = ptC3->Metodo->reduzir(ptC3);
  printf ("ptC3 foi elevado ao quadrado = %s \n",
	ptC3->Metodo->imprime (ptC3));

  ptC3 = ptC3->Metodo->elevar_cub(ptC3);
  ptC3 = ptC3->Metodo->reduzir(ptC3);
  printf ("ptC3 foi elevado ao cubo = %s \n",
	ptC3->Metodo->imprime (ptC3));

  ptC3 = ptC2->Metodo->atribui (ptC2, ptC3); // ptC3 = 5/20
  ptC3 = ptC3->Metodo->reduzir(ptC3);
  printf ("ptC3 recebeu o valor de Y2 = %s \n",
	ptC3->Metodo->imprime (ptC3));

  ptC3 = ptC3->Metodo->elevar_x(ptC3, 8);
  ptC3 = ptC3->Metodo->reduzir(ptC3);
  printf ("ptC3 foi elevado a 8 = %s \n",
	ptC3->Metodo->imprime (ptC3));

  ptC3 = ptC2->Metodo->atribui (ptC2, ptC3); // ptC3 = 5/20
  ptC3 = ptC3->Metodo->reduzir(ptC3);
  printf ("ptC3 recebeu o valor de Y2 = %s \n",
	ptC3->Metodo->imprime (ptC3));

  ptC3 = ptC2->Metodo->arredonda_cima (ptC3); // ptC3 = 5/20
  ptC3 = ptC3->Metodo->reduzir(ptC3);
  printf ("ptC3 foi arredondado para cima = %s \n",
	ptC3->Metodo->imprime (ptC3));

  ptC3 = ptC2->Metodo->atribui (ptC2, ptC3);
  ptC3 = ptC3->Metodo->reduzir(ptC3);
  printf ("ptC3 recebeu o valor de Y2 = %s \n",
	ptC3->Metodo->imprime (ptC3));

  ptC3 = ptC2->Metodo->arredonda_baixo(ptC3);
  ptC3 = ptC3->Metodo->reduzir(ptC3);
  printf ("ptC3 foi arredondado para baixo = %s \n",
	ptC3->Metodo->imprime (ptC3));

  MeuRacional_pt ptC4 = Racional_constroi(ptC4, 3, 10);
  ptC4 = ptC4->Metodo->reduzir(ptC4);
  printf("ptC4 foi criado com o valor = %s\n", ptC4->Metodo->imprime (ptC4));
  
  ptC4 = ptC4->Metodo->arredonda_cima(ptC4);
  printf("ptC4 foi arredondado para cima = %s\n", ptC4->Metodo->imprime(ptC4));
  
  MeuRacional_pt ptC5 = Racional_constroi(ptC5, 18, 10);
  printf("ptC5 foi criado com o valor = %s\n", ptC5->Metodo->imprime (ptC5));
  ptC5 = ptC5->Metodo->reduzir(ptC5);
  printf("ptC5 reduzido para o valor = %s\n", ptC5->Metodo->imprime (ptC5));

  ptC5 = ptC5->Metodo->arredonda_baixo(ptC5);
  printf("ptC5 arredondado para baixo = %s\n", ptC5->Metodo->imprime (ptC5));
  
  MeuRacional_pt ptC6 = Racional_constroi(ptC6, 36, 10);
  printf("ptC6 foi criado com o valor = %s\n", ptC6->Metodo->imprime (ptC6));
  ptC6 = ptC6->Metodo->reduzir(ptC6);
  printf("ptC6 reduzido para o valor = %s\n", ptC5->Metodo->imprime (ptC6));

  ptC6 = ptC6->Metodo->arredonda(ptC6);
  printf("ptC6 foi arrendado para = %s\n", ptC6->Metodo->imprime(ptC6));

  MeuRacional_pt ptC7 = Racional_constroi(ptC7, 23, 20);
  printf("ptC7 foi criado com o valor = %s\n", ptC7->Metodo->imprime (ptC7));
  
  ptC7 = ptC7->Metodo->reduzir(ptC7);
  printf("ptC7 reduzido para o valor = %s (Não é para mudar)\n", ptC7->Metodo->imprime (ptC7));

  ptC7 = ptC7->Metodo->arredonda(ptC7);
  printf("ptC7 foi arrendado para = %s", ptC7->Metodo->imprime(ptC7));
  
  
  

	ptC1->Metodo->destroi (ptC1);
	ptC2->Metodo->destroi (ptC2);
   ptC3->Metodo->destroi (ptC3);
   ptC4->Metodo->destroi (ptC4);
   ptC5->Metodo->destroi (ptC5);
   ptC6->Metodo->destroi (ptC6);
   ptC7->Metodo->destroi (ptC7);
	return (0);
}
