
public class Eletrico extends Dispositivo {
	private long codigo;
	private String nome;
	private Analogico analogico;
	private Peca peca;

	public Peca getPeca() {
		return peca;
	}

	public void setPeca(Peca peca) {
		this.peca = peca;
	}

	public long getCodigo() {
		return codigo;
	}

	public String getNome() {
		return nome;
	}

	public Analogico getAnalogico() {
		return analogico;
	}

	public void setCodigo(long codigo) {
		this.codigo = codigo;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public void setAnalogico(Analogico analogico) {
		this.analogico = analogico;
	}
}
