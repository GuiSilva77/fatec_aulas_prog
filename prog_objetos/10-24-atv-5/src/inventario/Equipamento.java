package inventario;

import locais.Laboratorio;

public class Equipamento {
	private String id;
	private double preco;
	private Laboratorio laboratorio;

	public String getId() {
		return id;
	}

	public double getPreco() {
		return preco;
	}

	public Laboratorio getLaboratorio() {
		return laboratorio;
	}

	public void setId(String id) {
		this.id = id;
	}

	public void setPreco(double preco) {
		this.preco = preco;
	}

	public void setLaboratorio(Laboratorio laboratorio) {
		this.laboratorio = laboratorio;
	}
}
