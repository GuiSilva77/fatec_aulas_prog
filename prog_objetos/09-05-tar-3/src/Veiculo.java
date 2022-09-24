
public class Veiculo {
	private long id;
	private String nome;
	private int velocidade;
	private int integridade;
	private Veiculo veiculo;
	private Armamento armamento;
	public long getId() {
		return id;
	}
	public String getNome() {
		return nome;
	}
	public int getVelocidade() {
		return velocidade;
	}
	public int getIntegridade() {
		return integridade;
	}
	public Veiculo getVeiculo() {
		return veiculo;
	}
	public Armamento getArmamento() {
		return armamento;
	}
	public void setId(long id) {
		this.id = id;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public void setVelocidade(int velocidade) {
		this.velocidade = velocidade;
	}
	public void setIntegridade(int integridade) {
		this.integridade = integridade;
	}
	public void setVeiculo(Veiculo veiculo) {
		this.veiculo = veiculo;
	}
	public void setArmamento(Armamento armamento) {
		this.armamento = armamento;
	}
}
