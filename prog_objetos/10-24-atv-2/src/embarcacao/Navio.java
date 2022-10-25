package embarcacao;

import locais.Porto;

public class Navio {
	private String nome;
	private String capitao;
	private Porto origem;
	private Porto destino;
	private Porto[] conexao;

	public Porto getOrigem() {
		return origem;
	}

	public Porto getDestino() {
		return destino;
	}

	public Porto[] getConexao() {
		return conexao;
	}

	public void setOrigem(Porto origem) {
		this.origem = origem;
	}

	public void setDestino(Porto destino) {
		this.destino = destino;
	}

	public void setConexao(Porto[] conexao) {
		this.conexao = conexao;
	}

	public String getNome() {
		return nome;
	}

	public String getCapitao() {
		return capitao;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public void setCapitao(String capitao) {
		this.capitao = capitao;
	}
}
