package plataforma;

import codigos.Programa;
import crm.Cliente;

public class Sistema {
	private String nome;
	private String descricao;
	private Programa[] programa;
	private Cliente[] cliente;

	public String getNome() {
		return nome;
	}

	public String getDescricao() {
		return descricao;
	}

	public Programa[] getPrograma() {
		return programa;
	}

	public Cliente[] getCliente() {
		return cliente;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}

	public void setPrograma(Programa[] programa) {
		this.programa = programa;
	}

	public void setCliente(Cliente[] cliente) {
		this.cliente = cliente;
	}

}
