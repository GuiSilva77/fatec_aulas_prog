package secretaria;

import academico.Disciplina;

public class Pratico extends Disciplina {
	private String laboratorio;
	private String exercicios;

	public String getLaboratorio() {
		return laboratorio;
	}

	public String getExercicios() {
		return exercicios;
	}

	public void setLaboratorio(String laboratorio) {
		this.laboratorio = laboratorio;
	}

	public void setExercicios(String exercicios) {
		this.exercicios = exercicios;
	}
}
