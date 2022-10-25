package logistica.frota;

import logistica.entregas.Encomenda;

public class Carro extends Veiculo {
	private String combustivel;
	private Encomenda[] enconmenda;

	public String getCombustivel() {
		return combustivel;
	}

	public Encomenda[] getEnconmenda() {
		return enconmenda;
	}

	public void setCombustivel(String combustivel) {
		this.combustivel = combustivel;
	}

	public void setEnconmenda(Encomenda[] enconmenda) {
		this.enconmenda = enconmenda;
	}
}
