
public class Documento extends Arquivo {
	private int palavras;
	private Imagem imagem;
	private Video video;

	public int getPalavras() {
		return palavras;
	}

	public Imagem getImagem() {
		return imagem;
	}

	public Video getVideo() {
		return video;
	}

	public void setPalavras(int palavras) {
		this.palavras = palavras;
	}

	public void setImagem(Imagem imagem) {
		this.imagem = imagem;
	}

	public void setVideo(Video video) {
		this.video = video;
	}
}
