function validarFormulario() {
  /* blur event for all input fields in form */
  document.querySelectorAll("#form input").forEach(function (element) {
    element.addEventListener("blur", function () {
      // if input field passes validation remove the error class, else add it
      if (this.checkValidity()) this.classList.remove("error-input");
      else this.classList.add("error-input");
    });
  });

  /* submit event on form */

  document.querySelector("#form").addEventListener("submit", function (e) {
    // if form has not passed validation
    if (!this.checkValidity()) {
      // check validation for each input field inside the form
      // if input field is valid then remove the error class, else add it
      this.querySelectorAll("input").forEach(function (element) {
        if (element.checkValidity()) {
          element.classList.remove("error-input");
          return true;
        } else element.classList.add("error-input");
      });
      e.preventDefault();
    }
  });
}

class Cadastro {
  constructor(nome, sobrenome, endereco, cpf, telefone, email, senha) {
    this.nome = nome;
    this.sobrenome = sobrenome;
    this.endereco = endereco;
    this.cpf = cpf;
    this.telefone = telefone;
    this.email = email;
    this.senha = senha;
  }
}

$(document).ready(() => {
  $("#txtCPF").mask("999.999.999-99");
  $("#txtTel").mask("(99) 99999-9999");

  validarFormulario();

  if (validarFormulario() == true) {
    let nome = $("#txtNome").val();
    let sobrenome = $("#txtSobrenome").val();
    let endereco = $("#txtEndereco").val();
    let cpf = $("#txtCPF").val();
    let telefone = $("#txtTel").val();
    let email = $("#txtEmail").val();
    let senha = $("#txtSenha").val();

    let cadastro = new Cadastro(
      nome,
      sobrenome,
      endereco,
      cpf,
      telefone,
      email,
      senha
    );

    let cadastroJson = JSON.stringify(cadastro);

    $.ajax({
      url: "http://localhost:5500/prog_script/Projeto/sb.json",
      type: "POST",
      data: cadastroJson,
      contentType: "application/json",
      success: function (data) {
        alert("Cadastro realizado com sucesso!");
      },
      error: function (data) {
        alert("Erro ao realizar cadastro!");
      },
    });
  }
});
