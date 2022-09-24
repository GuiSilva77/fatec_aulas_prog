package transporte;

public class Veiculo {
	private String placa;
	private int ano;
	private Acessorio acessorio;
	private Registro registro;

	public String getPlaca() {
		return placa;
	}

	public int getAno() {
		return ano;
	}

	public Acessorio getAcessorio() {
		return acessorio;
	}

	public Registro getRegistro() {
		return registro;
	}

	public void setPlaca(String placa) {
		this.placa = placa;
	}

	public void setAno(int ano) {
		this.ano = ano;
	}

	public void setAcessorio(Acessorio acessorio) {
		this.acessorio = acessorio;
	}

	public void setRegistro(Registro registro) {
		this.registro = registro;
	}
}
