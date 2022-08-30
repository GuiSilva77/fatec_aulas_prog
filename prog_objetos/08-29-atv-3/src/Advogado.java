
public class Advogado extends Profissional{
	private long oab;
	private String validade;
	private double valorHora;
	
	public long getOab() {
		return oab;
	}
	public String getValidade() {
		return validade;
	}
	public double getValorHora() {
		return valorHora;
	}
	public void setOab(long oab) {
		this.oab = oab;
	}
	public void setValidade(String validade) {
		this.validade = validade;
	}
	public void setValorHora(double valorHora) {
		this.valorHora = valorHora;
	}
}
