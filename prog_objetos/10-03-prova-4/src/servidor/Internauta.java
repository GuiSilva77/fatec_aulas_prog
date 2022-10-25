package servidor;

import jogo.Jogador;
import provedor.Email;

public class Internauta {
	private String nome;
	private Email[] email;
	private Jogador jogador;
	private Internauta internauta;

	public String getNome() {
		return nome;
	}

	public Email[] getEmail() {
		return email;
	}

	public Jogador getJogador() {
		return jogador;
	}

	public Internauta getInternauta() {
		return internauta;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public void setEmail(Email[] email) {
		this.email = email;
	}

	public void setJogador(Jogador jogador) {
		this.jogador = jogador;
	}

	public void setInternauta(Internauta internauta) {
		this.internauta = internauta;
	}
}
