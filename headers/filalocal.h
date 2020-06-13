#ifndef FILALOCAL_H
#define FILALOCAL_H

#include <local.h>
#include <string>

class FilaLocal {
	private : 
		Local* _local;
		std::string _usuario;
		
		void startFila();
		int _tamanho;

		void reorderFila();
	public : 
		FilaLocal(std::string usuario);

		void InserirLocal(Local local);
		void RemoverLocal();
		Local* GetLocal();

		int GetTamanho();
		bool IsFilaEmpty();
};

#endif
