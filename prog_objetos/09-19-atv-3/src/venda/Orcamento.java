package venda;

import crediario.Pagamento;

public class Orcamento {
	private long numero;
	private String data;
	private double valor;
	private Pagamento pagamento;
	private Peca peca;

	public long getNumero() {
		return numero;
	}

	public String getData() {
		return data;
	}

	public double getValor() {
		return valor;
	}

	public Pagamento getPagamento() {
		return pagamento;
	}

	public Peca getPeca() {
		return peca;
	}
D
	public void setNumero(long numero) {
		this.numero = numero;
	}

	public void setData(String data) {
		this.data = data;
	}

	public void setValor(double valor) {
		this.valor = valor;
	}

	public void setPagamento(Pagamento pagamento) {
		this.pagamento = pagamento;
	}

	public void setPeca(Peca peca) {
		this.peca = peca;
	}
}
