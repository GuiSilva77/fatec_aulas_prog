
public class Equipamento {
	private long codigo;
	private String nome;
	private double preco;
	private Placa placa;
	private Componente componente;
	private Peca peca;

	public long getCodigo() {
		return codigo;
	}

	public String getNome() {
		return nome;
	}

	public double getPreco() {
		return preco;
	}

	public Placa getPlaca() {
		return placa;
	}

	public Componente getComponente() {
		return componente;
	}

	public Peca getPeca() {
		return peca;
	}

	public void setCodigo(long codigo) {
		this.codigo = codigo;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public void setPreco(double preco) {
		this.preco = preco;
	}

	public void setPlaca(Placa placa) {
		this.placa = placa;
	}

	public void setComponente(Componente componente) {
		this.componente = componente;
	}

	public void setPeca(Peca peca) {
		this.peca = peca;
	}
}
