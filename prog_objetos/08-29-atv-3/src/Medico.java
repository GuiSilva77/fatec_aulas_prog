
public class Medico extends Profissional{
	private long crm;
	private String especialidade;
	private String clinica;
	
	public long getCrm() {
		return crm;
	}
	public String getEspecialidade() {
		return especialidade;
	}
	public String getClinica() {
		return clinica;
	}
	public void setCrm(long crm) {
		this.crm = crm;
	}
	public void setEspecialidade(String especialidade) {
		this.especialidade = especialidade;
	}
	public void setClinica(String clinica) {
		this.clinica = clinica;
	}
}
