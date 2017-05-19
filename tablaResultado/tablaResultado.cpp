#include "stdafx.h"  //________________________________________ tablaResultado.cpp
#include "tablaResultado.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	tablaResultado app;
	return app.BeginDialog(IDI_tablaResultado, hInstance);
}

void tablaResultado::Window_Open(Win::Event& e)
{
	int temperatura = 22;
	int edad = 19;
	int peso = 57;
	wstring texto;
	edad=20;
	peso /= 2;
	temperatura = 18 * 2;
	Sys::Format(texto, L"(%i,%i)->(%i,%i)", temperatura/3,5+temperatura,edad,peso+1);
	this->MessageBox(texto, L"Resultado", MB_OK);
	this->MessageBox(L"Hola",texto,MB_OK);
	this->MessageBox(texto,texto,MB_OK);
}

