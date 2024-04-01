#include <stdio.h>

int main(void)
{
	printf("-----Exercicio 1-----\n\n");
	float va[5],vb[5],resultado[5];
	int opcao, i;

    printf("Digite 5 valores do vetor a:\n");
  	for (i = 0; i < 5; i++)
  	{
    	scanf("%f", &va[i]);
  	}

    printf("Digite 5 valores do vetor b:\n");
  	for (i = 0; i < 5; i++)
  	{
    	scanf("%f", &vb[i]);
  	}


	printf("\n1-Soma \n2-Subtracao \n3-Multiplicacao \n4-Divisao \n5-Sair\n");
	fflush(stdin);
	scanf("%d", &opcao);
	
	
  	switch(opcao)
  	{
  		case 1:	
  			printf("\nResultado:\n");
  			for (int i = 0; i < 5; i++)
			{
				resultado[i] = va[i]+vb[i];
    			printf("%.0f ", resultado[i]);
    		}
    	break;
    	case 2:
    		printf("\nResultado:\n");
  			for (int i = 0; i < 5; i++)
			{
				resultado[i] = va[i]-vb[i];
    			printf("%.0f ", resultado[i]);
    		}
    	break;
    	case 3:
    		printf("\nResultado:\n");
  			for (int i = 0; i < 5; i++)
			{
				resultado[i] = va[i]*vb[i];
    			printf("%.0f ", resultado[i]);
    		}
    	break;
    	case 4:
    		printf("\nResultado:\n");
  			for (int i = 0; i < 5; i++)
			{
				if (vb[i] != 0)
				{
					resultado[i] = va[i]/vb[i];
    				printf("%.2f ", resultado[i]);
				}
				
    		}
    	break;
    	case 5:
    		printf("\nSaiu!\n");
    	break;
    	default:
    		printf("\nOpcao invalida\n");
	}
	
	printf("\n\n-----Exercicio 2-----\n\n");
	int vc[20];
	
	for (i = 0; i < 20; i++) 
	{
        vc[i] = (i + 1) * 2;
    }

    printf("Vetor preenchido com a sequencia numerica:\n");
    for (i = 0; i < 20; i++) 
	{
        printf("%d ", vc[i]);
    }
    printf("\n");
	
	printf("\n-----Exercicio 3-----\n\n");
	int vd[20];
	
	for (i = 0; i < 20; i++) 
	{
        if (i % 2 == 0) 
		{
            vd[i] = 1;
        } 
		else 
		{
            vd[i] = -1;
        }
    }
    
    printf("Vetor preenchido com a sequência numérica alternada:\n");
    for (i = 0; i < 20; i++) 
	{
        printf("%d ", vd[i]);
    }
    printf("\n");
    
    printf("\n-----Exercicio 4-----\n\n");
    int ve[20], x=2;
    
    for (i = 0; i < 20; i++) 
	{
        ve[i] = x;
        x *= 2;
    }
    
    printf("Vetor preenchido com a sequência numérica:\n");
    for (i = 0; i < 20; i++) 
	{
        printf("%d ", ve[i]);
    }
    printf("\n");
    
    printf("\n-----Exercicio 5-----\n\n");
	int vf[10], vg[10];
	
	vf[0] = 1;
    for (i = 1; i < 10; i++) 
	{
        vf[i] = vf[i-1] * 2;
    }
    
    for (i = 0; i < 10; i++) 
	{
        vg[i] = vf[i] - vf[0];
    }
    
    printf("Vetor preenchido com a sequência numérica:\n");
    for (i = 0; i < 10; i++) 
	{
        printf("%d ", vg[i]);
    }
    printf("\n");
	
	printf("\n-----Exercicio 6-----\n\n");
	int y;
    
    printf("Digite um numero: ");
    scanf("%d", &y);
    
    printf("Asteriscos correspondentes: ");
    for (int i = 0; i < y; i++) 
	{
        printf("*");
    }
    printf("\n");
    
    printf("\n-----Exercicio 7-----\n\n");
    int o,p;
    
    printf("Digite quantas colunas deseja: ");
    scanf("%d", &o);
    
    printf("Digite quantas linhas deseja: ");
    scanf("%d", &p);
    
    printf("Asteriscos correspondentes:\n");
    for (int i = 0; i < p; i++) 
	{
        for (int j = 0; j < o; j++) 
		{
            printf("   *");
        }
        printf("\n");
    }
    
    printf("\n-----Exercicio 8-----\n\n");
    int m;

    printf("Digite o valor de m: ");
    scanf("%d", &m);

    for (int i = 1; i <= m; i++) 
	{
        for (int j = 0; j < i; j++) 
		{
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n-----Exercicio 9-----\n\n");
    for (int multiplicador = 1; multiplicador <= 10; multiplicador++) 
	{
        printf("Tabuada do %d:\n", multiplicador);
        
        for (int multiplicando = 1; multiplicando <= 10; multiplicando++) 
		{
            int produto = multiplicador * multiplicando;
            
            printf("%d x %d = %d\n", multiplicador, multiplicando, produto);
        }
        
        printf("\n");
    }
    
    printf("\n-----Exercicio 10-----\n\n");
    int linhas = 5;
    int colunas = 6;
    
    int valor = 1;
    
    for (int i = 0; i < linhas; i++) 
	{
        for (int j = 0; j < colunas; j++) 
		{
            printf("%d ", valor);
            valor++;
        }
        printf("\n");
    }
}


