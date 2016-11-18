#pragma once
class CControlador
{
public:
	int nivel;

public:
	CControlador(int nivel);
	~CControlador();

	int getNivel();
	void setNivel(int nivel);
};

