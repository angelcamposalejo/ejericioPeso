#include "stdafx.h"  //________________________________________ tablaResultado.cpp
#include "tablaResultado.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	tablaResultado app;
	return app.BeginDialog(IDI_tablaResultado, hInstance);
}

void tablaResultado::Window_Open(Win::Event& e)
{
	int temperatura = 24;
	int peso = 60;
	wstring texto;
	peso *= 2;
	Sys::Format(texto, L"%i->%i,%i->%i", temperatura, 2 * temperatura, peso, peso + 7);
	this->MessageBox(texto, L"Resultado", MB_OK);
}

