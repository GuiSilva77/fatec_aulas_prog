
public class Caminhao {
	private String placa;
	private String marca;
	private Motorista motorista;
	private Encomenda[] encomenda;

	public String getPlaca() {
		return placa;
	}

	public String getMarca() {
		return marca;
	}

	public Motorista getMotorista() {
		return motorista;
	}

	public Encomenda[] getEncomenda() {
		return encomenda;
	}

	public void setPlaca(String placa) {
		this.placa = placa;
	}

	public void setMarca(String marca) {
		this.marca = marca;
	}

	public void setMotorista(Motorista motorista) {
		this.motorista = motorista;
	}

	public void setEncomenda(Encomenda[] encomenda) {
		this.encomenda = encomenda;
	}
}
