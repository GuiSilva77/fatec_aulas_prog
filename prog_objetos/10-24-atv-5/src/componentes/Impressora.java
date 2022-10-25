package componentes;

import inventario.Equipamento;

public class Impressora extends Equipamento {
	private String marca;
	private String tipo;

	public String getMarca() {
		return marca;
	}

	public String getTipo() {
		return tipo;
	}

	public void setMarca(String marca) {
		this.marca = marca;
	}

	public void setTipo(String tipo) {
		this.tipo = tipo;
	}
}
