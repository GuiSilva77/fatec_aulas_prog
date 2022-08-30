
public class Peca {
	private long codigo;
	private String nome;
	private int quantidade;
	private double valor;
	
	public long getCodigo() {
		return codigo;
	}
	public String getNome() {
		return nome;
	}
	public int getQuantidade() {
		return quantidade;
	}
	public double getValor() {
		return valor;
	}
	public void setCodigo(long codigo) {
		this.codigo = codigo;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public void setQuantidade(int quantidade) {
		this.quantidade = quantidade;
	}
	public void setValor(double valor) {
		this.valor = valor;
	}
}
