#include <iostream>
#include <cstdio>
#include <string>
#include <exception>

#include <filalocal.h>
#include <local.h>

int main() {
	try {
		int eixoX;
		int eixoY;

		std::string usuario;
		
		printf("Qual o seu nome?\n");
		std::cin >> usuario;

		printf("Informe as coordenadas para cadastro do local.\n");
		printf("Primeiro informe a latitude:");
		std::cin >> eixoX;

		printf("Agora informe a longitude:");
		std::cin >> eixoY;

		FilaLocal* filaLocal = new FilaLocal(usuario);

		Local* localTeste = new Local(eixoX, eixoY);
		filaLocal->InserirLocal(*localTeste);
		filaLocal->RemoverLocal();
		filaLocal->InserirLocal(*localTeste);

		printf("O tamanho da fila atual é de: %d\n", filaLocal->GetTamanho());

		if (!filaLocal->IsFilaEmpty()) {
			Local* local = filaLocal->GetLocal();
			printf("O último local gravado foi: Latitude: %d, Longitude: %d\n", local->GetLatitude(), local->GetLongitude());
		}
	}
	catch(std::exception &ex) {
		printf("Ocorreu um erro na aplicação. Detalhes: %s\n", ex.what());
		return 1;
	}
	return 0;
}
