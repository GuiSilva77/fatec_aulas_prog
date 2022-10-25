package documentos;

import contatos.Pessoa;

public class Individual extends Contrato {
	private double valor;
	private Pessoa pessoa;

	public double getValor() {
		return valor;
	}

	public Pessoa getPessoa() {
		return pessoa;
	}

	public void setValor(double valor) {
		this.valor = valor;
	}

	public void setPessoa(Pessoa pessoa) {
		this.pessoa = pessoa;
	}
}
