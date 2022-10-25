package farmacia;

import clinica.Medico;

public class Receita {
	private String data;
	private Medicamento medicamento;
	private Medico medico;

	public String getData() {
		return data;
	}

	public Medicamento getMedicamento() {
		return medicamento;
	}

	public Medico getMedico() {
		return medico;
	}

	public void setData(String data) {
		this.data = data;
	}

	public void setMedicamento(Medicamento medicamento) {
		this.medicamento = medicamento;
	}

	public void setMedico(Medico medico) {
		this.medico = medico;
	}
}
