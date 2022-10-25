package departamento.vendas;

import departamento.crm.Cliente;
import departamento.estoque.Produto;

public class NotaFiscal {
	private long numero;
	private double valor;
	private Produto[] produto;
	private Cliente cliente;

	public long getNumero() {
		return numero;
	}

	public double getValor() {
		return valor;
	}

	public Produto[] getProduto() {
		return produto;
	}

	public Cliente getCliente() {
		return cliente;
	}

	public void setNumero(long numero) {
		this.numero = numero;
	}

	public void setValor(double valor) {
		this.valor = valor;
	}

	public void setProduto(Produto[] produto) {
		this.produto = produto;
	}

	public void setCliente(Cliente cliente) {
		this.cliente = cliente;
	}
}
