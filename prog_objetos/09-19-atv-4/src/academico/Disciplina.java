package academico;

public class Disciplina {
	private String sigla;
	private String nome;
	private Livro livro;

	public String getSigla() {
		return sigla;
	}

	public String getNome() {
		return nome;
	}

	public Livro getLivro() {
		return livro;
	}

	public void setSigla(String sigla) {
		this.sigla = sigla;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public void setLivro(Livro livro) {
		this.livro = livro;
	}
}
