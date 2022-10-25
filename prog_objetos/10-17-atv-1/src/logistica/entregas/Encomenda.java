package logistica.entregas;

import comercial.crm.Cliente;

public class Encomenda {
	private int eixos;
	private Cliente Cliente;

	public int getEixos() {
		return eixos;
	}

	public Cliente getCliente() {
		return Cliente;
	}

	public void setEixos(int eixos) {
		this.eixos = eixos;
	}

	public void setCliente(Cliente cliente) {
		Cliente = cliente;
	}
}
