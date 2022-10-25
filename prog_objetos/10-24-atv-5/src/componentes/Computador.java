package componentes;

import inventario.Equipamento;

public class Computador extends Equipamento {
	private String modelo;
	private String processador;

	public String getModelo() {
		return modelo;
	}

	public String getProcessador() {
		return processador;
	}

	public void setModelo(String modelo) {
		this.modelo = modelo;
	}

	public void setProcessador(String processador) {
		this.processador = processador;
	}
}
