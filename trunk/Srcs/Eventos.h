 #ifndef EVENTOS_H
#define EVENTOS_H

SDL_Event evento;

bool quit, esc, cima, baixo, direita, esquerda, Enter, enter, espaco, backspace, a, z, s, x, d, c, q, w, e, p, m, l;//a letra i já está em uso num for
bool f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12;
bool botao1;
bool n2;
//fazer um teclado? ou uma mais genérica?
class Mouse
{
public:

	bool botao_direito;
	bool botao_esquerdo;
	SDL_Rect posicao;//x, y e h e w?
	SDL_Rect quadro;
	SDL_Surface* imagem;
	bool movimento;
	int vel_x, vel_y;//bom ter classe para auto iniciar aqui...
};
Mouse mouse;

void Eventos();

void Eventos()
{
	if(SDL_PollEvent(&evento))
	{
		switch(evento.type)
		{
		case SDL_QUIT:
			quit = true;
		break;
		//-------------------------- Movimentação do mouse
		case SDL_MOUSEMOTION:
			mouse.movimento=true;
			mouse.posicao.x=evento.motion.x;
			mouse.posicao.y=evento.motion.y;
		break;
		case SDL_MOUSEBUTTONDOWN:
			switch(evento.button.button)
			{
				case SDL_BUTTON_LEFT:
					mouse.botao_esquerdo=true;
				break;
				case SDL_BUTTON_RIGHT:
					mouse.botao_direito=true;
				break;
			}
		break;
		case SDL_MOUSEBUTTONUP:
			switch(evento.button.button)
			{
				case SDL_BUTTON_LEFT:
					mouse.botao_esquerdo=false;
				break;
				case SDL_BUTTON_RIGHT:
					mouse.botao_direito=false;
				break;
			}
		break;
		case SDL_KEYDOWN:
			switch(evento.key.keysym.sym)
			{
			case SDLK_ESCAPE:
				esc = true;
				break;
			case SDLK_UP:
				cima = true;
				break;
			case SDLK_DOWN:
				baixo = true;
				break;
			case SDLK_RIGHT:
				direita = true;
				break;
			case SDLK_LEFT:
				esquerda = true;
				break;
			case SDLK_RETURN:
				Enter = true;
				break;
			case SDLK_KP_ENTER:
				enter = true;
				break;
			case SDLK_SPACE:
				espaco = true;
				break;
			case SDLK_BACKSPACE:
				backspace = true;
				break;
			case SDLK_a:
				a = true;
				break;
			case SDLK_z:
				z = true;
				break;
			case SDLK_s:
				s = true;
				break;
			case SDLK_x:
				x = true;
				break;
			case SDLK_d:
				d = true;
				break;
			case SDLK_c:
				c = true;
				break;
			case SDLK_q:
				q = true;
				break;
			case SDLK_w:
				w = true;
				break;
			case SDLK_e:
				e = true;
				break;
			case SDLK_p:
				p = true;
				break;
			case SDLK_m:
				m = true;
				break;
			case SDLK_2:
				n2 = true;
				break;
			case SDLK_l:
				l = true;
				break;
			case SDLK_F1:
				f1 = true;
				break;
			case SDLK_F2:
				f2 = true;
				break;
			case SDLK_F3:
				f3 = true;
				break;
			case SDLK_F4:
				f4 = true;
				break;
			}
		break;
		case SDL_KEYUP:
			switch(evento.key.keysym.sym)
			{
			case SDLK_ESCAPE:
				esc = false;
				break;
			case SDLK_UP:
				cima = false;
				break;
			case SDLK_DOWN:
				baixo = false;
				break;
			case SDLK_RIGHT:
				direita = false;
				break;
			case SDLK_LEFT:
				esquerda = false;
				break;
			case SDLK_RETURN:
				Enter = false;
				break;
			case SDLK_KP_ENTER:
				enter = false;
				break;
			case SDLK_SPACE:
				espaco = false;
				break;
			case SDLK_BACKSPACE:
				backspace = false;
				break;
			case SDLK_a:
				a = false;
				break;
			case SDLK_z:
				z = false;
				break;
			case SDLK_s:
				s = false;
				break;
			case SDLK_x:
				x = false;
				break;
			case SDLK_d:
				d = false;
				break;
			case SDLK_c:
				c = false;
				break;
			case SDLK_q:
				q = false;
				break;
			case SDLK_w:
				w = false;
				break;
			case SDLK_e:
				e = false;
				break;
			case SDLK_p:
				p = false;
				break;
			case SDLK_m:
				m = false;
				break;
			case SDLK_2:
				n2 = false;
				break;
			case SDLK_l:
				l = false;
				break;
			case SDLK_F1:
				f1 = false;
				break;
			case SDLK_F2:
				f2 = false;
				break;
			case SDLK_F3:
				f3 = false;
				break;
			case SDLK_F4:
				f4 = false;
				break;
			}
		break;
		case SDL_USEREVENT:
			switch (evento.user.code)
			{
				case 0://fazer define
					
				break;
			}
		break;
		case SDL_JOYBUTTONDOWN:
			switch(evento.jbutton.button)
			{
				case 0:
				botao1 = true;
				break;
			}
		break;
		}//switch principal
	}//if principal
}//void

#endif
