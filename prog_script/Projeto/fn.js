export default function verificar(campo1, campo2) {
  debugger;
  if (campo1.value != campo2.value) {
    document.getElementById("error").innerHTML = `
      <p class="div-negative"><i class="bi bi-exclamation-circle div-negative"></i> Senhas não conferem</p>
      `;
    document.getElementById().className += " input-negative";
    document.getElementById().className += " input-negative";
  }
}
