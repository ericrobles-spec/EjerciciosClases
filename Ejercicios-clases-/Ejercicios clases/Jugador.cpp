//#include <iostream>
//using namespace std;
//
//class Jugador {
//private:
//	string nombre;
//	int puntos;
//	int vidas;
//public:
//	void CrearJugador(string n) {
//		n = nombre;
//		puntos = 0;
//		vidas = 10;
//	}
//	void AnadirPuntos(int p){
//		p = puntos + p;
//	}
//
//	void PerderVida(int v) {
//		v = vidas - 1;
//		cout << "Vidas restantes: " << vidas << endl;
//	}
//
//	void ConsultarPuntos() {
//		cout << "Puntos totales: " << puntos << endl;
//	}
//
//	void ConsultarVidas() {
//		cout << "Vidas restantes:" << vidas << endl;
//	}
//	void JugadorVivo() {
//		if (vidas > 0) {
//			cout << "El jugador esta vivo" << endl;
//		}
//		else {
//			cout << "El jugador ha muerto" << endl;
//		}
//	}
//};
//
//int main() {
//	Jugador j1;
//	j1.CrearJugador("Eric");
//	j1.AnadirPuntos(10);
//	j1.ConsultarPuntos();
//	j1.PerderVida(1);
//	j1.ConsultarVidas();
//	j1.JugadorVivo();
//	return 0;
//
//}