#include "stdafx.h"  //________________________________________ tablaResultado.cpp
#include "tablaResultado.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	tablaResultado app;
	return app.BeginDialog(IDI_tablaResultado, hInstance);
}

void tablaResultado::Window_Open(Win::Event& e)
{
	int temperatura = 24;
	int edad = 19;
	int peso = 60;
	wstring texto;
	edad=10;
	Sys::Format(texto, L"(%i,%d)->(%i,%i)", temperatura/2,5+temperatura,edad,peso-1);
	this->MessageBox(texto, L"Resultado", MB_OK);
	this->MessageBox(texto,L"Resultado",MB_OK);
}

