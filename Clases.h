#include<iostream>
using namespace std;
void Clear() {
	cout << "\x1B[2J\x1B[H";
}
class Forma {
public:
	virtual void setcoordenadaX(int) {}

	virtual void setcoordenadaY(int) {}

	virtual void setTipofigura(int) {}

	virtual void setdimensiones(int) {}

	virtual void dibujar() {}
};
class FiguraCuadrado : public Forma {
private:
	int opcion, dimensiones, coordenadaX, coordenadaY;
public:
	void setcoordenadaX(int x) {
		coordenadaX = x;
	}
	int getcoordenadaX()
	{
		if (coordenadaX < 1)
			coordenadaX = 1;

		return coordenadaX;
	}
	void setcoordenadaY(int y) {
		coordenadaY = y;
	}
	int getcoordenadaY() {
		if (coordenadaY < 1)
			coordenadaY = 1;

		return coordenadaY;
	}
	void setTipofigura(int figura) {
		opcion = figura;
	}
	int getTipofigura() {
		if (opcion < 1 || opcion > 2)
			opcion = 2;

		return opcion;
	}
	void setdimensiones(int tamanos) {
		dimensiones = tamanos;

	}
	int getdimensiones() {
		if (dimensiones < 1)
			dimensiones = 1;

		return dimensiones;
	}
	void dibujar() {
		char movimientoFigura;
		while ((movimientoFigura = cin.get()) != 'z') {
			Clear();

			cout << "Coordenadas de la figura" << endl;
			cout << "coordenadas en X: " << getcoordenadaX() << endl;
			cout << "coordenadas en Y: " << getcoordenadaY() << endl;
			switch (movimientoFigura) {
			case 'w':
				coordenadaY--;
				break;
			case 's':
				coordenadaY++;
				break;
			case 'a':
				coordenadaX--;
				break;
			case 'd':
				coordenadaX++;
				break;
			}
			cout << endl;
			for (int c = 1; c <= getcoordenadaY(); c++) {
				cout << endl;
			}
			for (int c = 1; c <= getdimensiones(); c++) {
				for (int i = 1; i <= getcoordenadaX(); i++) {
					cout << " ";
				}
				for (int i = 1; i <= getdimensiones(); i++) {
					if (getTipofigura() == 2) {
						cout << "* ";
					}
					else {
						if ((c == 1 || i == 1) || (c == getdimensiones()) || (i == getdimensiones())) {
							cout << "* ";
						}
						else {
							cout << "  ";
						}
					}
				}
				cout << endl;
			}
		}
	}

};


class FiguraTriangulo : public Forma {
private:
	int opcion, dimensiones, coordenadaX, coordenadaY;
public:
	void setcoordenadaX(int x) {
		coordenadaX = x;
	}
	int getcoordenadaX()
	{
		if (coordenadaX < 1)
			coordenadaX = 1;

		return coordenadaX;
	}
	void setcoordenadaY(int y) {
		coordenadaY = y;
	}
	int getcoordenadaY() {
		if (coordenadaY < 1)
			coordenadaY = 1;

		return coordenadaY;
	}
	void setTipofigura(int figura) {
		opcion = figura;
	}
	int getTipofigura() {
		if (opcion < 1 || opcion > 2)
			opcion = 2;

		return opcion;
	}
	void setdimensiones(int tamanos) {
		dimensiones = tamanos;

	}
	int getdimensiones() {
		if (dimensiones < 1)
			dimensiones = 1;

		return dimensiones;
	}
	void dibujar() {
		char movimientoFigura;
		while ((movimientoFigura = cin.get()) != 'z') {
			Clear();

			cout << "Coordenadas de la figura" << endl;
			cout << "coordenadas en X: " << getcoordenadaX() << endl;
			cout << "coordenadas en Y: " << getcoordenadaY() << endl;
			switch (movimientoFigura) {
			case 'w':
				coordenadaY--;
				break;
			case 's':
				coordenadaY++;
				break;
			case 'a':
				coordenadaX--;
				break;
			case 'd':
				coordenadaX++;
				break;
			}
			cout << endl;
			for (int c = 1; c <= getcoordenadaY(); c++) {
				cout << endl;
			}

			for (int c = 1; c <= getdimensiones(); c++) {
				for (int i = 0; i < getcoordenadaX(); i++) {
					cout << " ";
				}
				for (int i = 0; i < c; i++) {

					cout << "* ";

				}
				cout << endl;

			}
		}
	}

};


class FiguraRombo : public Forma {
private:
	int opcion, dimensiones, coordenadaX, coordenadaY;
public:
	void setcoordenadaX(int x) {
		coordenadaX = x;
	}
	int getcoordenadaX()
	{
		if (coordenadaX < 1)
			coordenadaX = 1;

		return coordenadaX;
	}
	void setcoordenadaY(int y) {
		coordenadaY = y;
	}
	int getcoordenadaY() {
		if (coordenadaY < 1)
			coordenadaY = 1;

		return coordenadaY;
	}
	void setTipofigura(int figura) {
		opcion = figura;
	}
	int getTipofigura() {
		if (opcion < 1 || opcion > 2)
			opcion = 2;

		return opcion;
	}
	void setdimensiones(int tamanos) {
		dimensiones = tamanos;

	}
	int getdimensiones() {
		if (dimensiones < 1)
			dimensiones = 1;

		return dimensiones;
	}
	void dibujar() {
		char movimientoFigura;
		while ((movimientoFigura = cin.get()) != 'z') {
			Clear();

			cout << "Coordenadas de la figura" << endl;
			cout << "coordenadas en X: " << getcoordenadaX() << endl;
			cout << "coordenadas en Y: " << getcoordenadaY() << endl;
			switch (movimientoFigura) {
			case 'w':
				coordenadaY--;
				break;
			case 's':
				coordenadaY++;
				break;
			case 'a':
				coordenadaX--;
				break;
			case 'd':
				coordenadaX++;
				break;
			}
			cout << endl;
			for (int c = 1; c <= getcoordenadaY(); c++) {
				cout << endl;
			}
			int space = getdimensiones() - 1;
			for (int c = 1; c <= getdimensiones(); c++) {
				for (int i = 0; i < getcoordenadaX(); i++) {
					cout << " ";
				}
				for (int i = 0; i < space; i++) {
					cout << " ";
				}
				space -= 1;
				for (int i = 0; i < c; i++) {

					cout << "* ";

				}
				cout << endl;
			}
			space = 0;
			int i = getdimensiones() - 1;
			for (int c = 1; c < getdimensiones(); c++) {
				for (int i = 0; i < getcoordenadaX(); i++) {
					cout << " ";
				}
				for (int i = 0; i <= space; i++) {
					cout << " ";
				}
				space += 1;
				for (int n = 0; n < i; n++) {

					cout << "* ";

				}
				i--;
				cout << endl;
			}
		}
	}
};
class Menu {
private:
	int opcion, dimensiones, coordenadaX, coordenadaY;
public:
	Menu() {
		opcion = 0;
		dimensiones = 0;
		coordenadaX = 0;
		coordenadaY = 0;
	}
	void run() {
		while (opcion != 1) {



			cout << "introduzca el numero de la figura" << endl;
			cout << "1. cuadrado \n 2. triangulo \n 3. rombo" << endl;
			cin >> opcion;
			cout << "introduzca la coordenada X" << endl;
			cin >> coordenadaX;
			cout << "introduzca la coordenada Y" << endl;
			cin >> coordenadaY;

			cout << "introduzca las dimensiones de la figura" << endl;
			cin >> dimensiones;



			if (opcion == 1) {
				cout << "escoja el tipo de figura \n 1. hueco \n 2. relleno " << endl;
				cin >> opcion;
				FiguraCuadrado cuadrado;
				lienzo(&cuadrado, opcion, coordenadaX, coordenadaY, dimensiones);

			}
			else if (opcion == 2) {
				FiguraTriangulo triangulo;
				lienzo(&triangulo, 1, coordenadaX, coordenadaY, dimensiones);

			}
			else if (opcion == 3) {
				FiguraRombo rombo;
				lienzo(&rombo, 1, coordenadaX, coordenadaY, dimensiones);

			}
			cout << "quiere reiniciar el programa \n 1. salir \n 2. reiniciar" << endl;
			cin >> opcion;
		}
	}
	void lienzo(Forma* forma, int opcion, int coordenadaX, int coordenadaY, int dimensiones) {
		forma->setcoordenadaX(coordenadaX);
		forma->setcoordenadaY(coordenadaY);
		forma->setTipofigura(opcion);
		forma->setdimensiones(dimensiones);
		forma->dibujar();

	}
}; 
