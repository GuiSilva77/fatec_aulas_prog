package provedor;

public class Email {
	private String usuario;
	private String provedor;
	private String tipo;

	public String getUsuario() {
		return usuario;
	}

	public String getProvedor() {
		return provedor;
	}

	public String getTipo() {
		return tipo;
	}

	public void setUsuario(String usuario) {
		this.usuario = usuario;
	}

	public void setProvedor(String provedor) {
		this.provedor = provedor;
	}

	public void setTipo(String tipo) {
		this.tipo = tipo;
	}
}
