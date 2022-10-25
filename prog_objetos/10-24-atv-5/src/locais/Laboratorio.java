package locais;

import inventario.Equipamento;

public class Laboratorio {
	private String nome;
	private String endereco;
	private Equipamento[] equipamento;

	public String getNome() {
		return nome;
	}

	public String getEndereco() {
		return endereco;
	}

	public Equipamento[] getEquipamento() {
		return equipamento;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public void setEndereco(String endereco) {
		this.endereco = endereco;
	}

	public void setEquipamento(Equipamento[] equipamento) {
		this.equipamento = equipamento;
	}
}
