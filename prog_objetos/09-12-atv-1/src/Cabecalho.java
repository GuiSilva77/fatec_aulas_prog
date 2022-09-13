
public class Cabecalho {
	private String enderecoEntrega;
	private double imposto;
	private Cliente cliente;

	public Cliente getCliente() {
		return cliente;
	}

	public void setCliente(Cliente cliente) {
		this.cliente = cliente;
	}

	public String getEnderecoEntrega() {
		return enderecoEntrega;
	}

	public double getImposto() {
		return imposto;
	}

	public void setEnderecoEntrega(String enderecoEntrega) {
		this.enderecoEntrega = enderecoEntrega;
	}

	public void setImposto(double imposto) {
		this.imposto = imposto;
	}
}
