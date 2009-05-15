#include "Cabecalho.h"

int main(int argc, char **argv)
{
	Iniciar();//1
	Carregar();//2

	while(jogando)
	{
		Desenhar();//3
		FPS();
		Eventos();
		Acoes();
		Mover();
		Animar();
		Pular();
		Atirar();
		Atacar();
		Colidir();
		IA();
    	Atributos();
		Sons();
		Rede();
	}

	Finalizar();

	return(0);

}