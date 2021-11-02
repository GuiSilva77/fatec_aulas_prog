export default function compSenha() {
  let senha = $("#txtSenha").val();
  let confSenha = $("#txtConfSenha").val();

  if (senha != confSenha) {
    document.getElementById("error").innerHTML = `
      <p class="div-negative"><i class="bi bi-exclamation-circle div-negative"></i>Senhas não conferem</p>
      `;
    document.getElementById("txtSenha").className += " input-negative";
    document.getElementById("txtConfSenha").className += " input-negative";
  }
}
