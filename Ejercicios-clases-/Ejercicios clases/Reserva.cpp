#include <iostream>
using namespace std;

class Reserva {
private:
	string cliente;
	int noches;
	float precioPorNoche;		
	bool estadoReserva;				//Si es true, la reserva esta activa. Si es false, la reserva esta cancelada.
public:
	void CrearReserva(string c, int n, float p, bool e) {
		c = cliente;
		n = noches;
		p = precioPorNoche;
		e = estadoReserva;
	}

	void ConsultarNombreCliente() {
		cout << "Nombre del cliente: " << cliente << endl;
	}

	void CambiarNombreNoches(int n) {
		n = noches;
		if (estadoReserva == false) {
			cout << "La reserva esta cancelada, no se puede cambiar el numero de noches" << endl;

		}
		else {
			cout << "El numero de noches ha sido cambiado a: " << noches << endl;
		}
	}

	void CalcularPrecioTotal() {
		float PT = noches * precioPorNoche;
		cout << "El precio de la estancia es de:" << PT << endl;
	}

	void CancelarReserva() {
		estadoReserva = false;
		cout << "La reserva ha sido cancelada" << endl;
	}

	void EstadoReserva() {
		if (estadoReserva == true) {
			cout << "La reserva esta activa" << endl;
		}
		else {
			cout << "La reserva esta cancelada" << endl;
		}
	}
};

int main() {
	Reserva r1;
	r1.CrearReserva("Eric", 5, 50.0, true);
	r1.ConsultarNombreCliente();
	r1.CalcularPrecioTotal();
	r1.CambiarNombreNoches(7);
	r1.CalcularPrecioTotal();
	r1.CancelarReserva();
	r1.EstadoReserva();
	return 0;
}