
public class Funcionario extends Pessoa {
	private long cpts;
	private String dataAdmissao;
	private double salario;

	public long getCpts() {
		return cpts;
	}

	public String getDataAdmissao() {
		return dataAdmissao;
	}

	public double getSalario() {
		return salario;
	}

	public void setCpts(long cpts) {
		this.cpts = cpts;
	}

	public void setDataAdmissao(String dataAdmissao) {
		this.dataAdmissao = dataAdmissao;
	}

	public void setSalario(double salario) {
		this.salario = salario;
	}
}
