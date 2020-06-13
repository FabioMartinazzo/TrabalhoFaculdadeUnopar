#include <string>

#include <filalocal.h>
#include <local.h>

#define FIRST_INDEX 0
#define MAX_TAMANHO 20

FilaLocal::FilaLocal(std::string usuario) {
	this->_usuario = usuario;
	this->startFila();
}

void FilaLocal::InserirLocal(Local local) {
	this->_local[this->_tamanho] = local;
	this->_tamanho++;
}

void FilaLocal::RemoverLocal() {
	delete &this->_local[FIRST_INDEX];
	this->reorderFila();
	this->_tamanho--;
}

void FilaLocal::startFila() {
	this->_local = new Local[MAX_TAMANHO];
	this->_tamanho = 0;
}

void FilaLocal::reorderFila() {
	for (int n = this->_tamanho; n > (FIRST_INDEX + 1); n--) {
		this->_local[n-1] = this->_local[n];
		delete &this->_local[n];
	}
}

Local* FilaLocal::GetLocal() {
	return &this->_local[FIRST_INDEX];
}

int FilaLocal::GetTamanho() {
	return this->_tamanho;
}

bool FilaLocal::IsFilaEmpty() {
	return &this->_local[FIRST_INDEX] == NULL;
}
