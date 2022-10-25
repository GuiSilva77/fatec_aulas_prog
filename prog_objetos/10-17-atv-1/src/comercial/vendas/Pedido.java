package comercial.vendas;

import comercial.crm.Cliente;

public class Pedido {
	private long numero;
	private double valor;
	private Cliente cliente;

	public long getNumero() {
		return numero;
	}

	public double getValor() {
		return valor;
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

	public void setCliente(Cliente cliente) {
		this.cliente = cliente;
	}

}
