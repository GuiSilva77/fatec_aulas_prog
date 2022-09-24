package logistica;

import transporte.Veiculo;

public class Carro extends Veiculo {
	private int lugares;

	public int getLugares() {
		return lugares;
	}

	public void setLugares(int lugares) {
		this.lugares = lugares;
	}
}
