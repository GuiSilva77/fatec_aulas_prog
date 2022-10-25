package negocios.documentos.fiscais;

import negocios.estoque.Peca;

public class Cupom {
	private long numero;
	private double valor;
	private Peca peca;

	public long getNumero() {
		return numero;
	}

	public double getValor() {
		return valor;
	}

	public Peca getPeca() {
		return peca;
	}

	public void setNumero(long numero) {
		this.numero = numero;
	}

	public void setValor(double valor) {
		this.valor = valor;
	}

	public void setPeca(Peca peca) {
		this.peca = peca;
	}
}
