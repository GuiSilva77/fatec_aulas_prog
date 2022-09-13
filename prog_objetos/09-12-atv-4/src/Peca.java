
public class Peca extends Acessorio {
	private long id;
	private String descricao;

	public long getId() {
		return id;
	}

	public String getDescricao() {
		return descricao;
	}

	public void setId(long id) {
		this.id = id;
	}

	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}
}
