#ifndef OBJETOS_H
#define OBJETOS_H

class Objeto
{
	public:
		SDL_Surface* imagem; 
		SDL_Rect quadro, posicao;
		Mix_Chunk* chunk;
		bool visivel;

		/*void Desenhar()
		{
		SDL_BlitSurface(this.imagem, &this.quadro, janela, &this.posicao);
		};*/

	private:

};

Objeto iniciar, iniciar_over, creditos, creditos_over, sair, sair_over, indicador; 

#endif