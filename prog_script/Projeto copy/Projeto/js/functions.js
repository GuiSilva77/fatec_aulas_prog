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

// create function to open file with path as parameter using fs and return the file content
export function openFile(path) {
  const fs = require("fs");
  let file = fs.readFileSync(path, "utf8");
  return file;
}

// create a function to block copy paste in input fields
export function blockCopyPaste(id) {
  $(id).bind("cut copy paste", function (e) {
    e.preventDefault();
  });
}

// create function to query the json file and return the data
export function getData(path) {
  let data = JSON.parse(openFile(path));
  return data;
}

// create a function to write the data in the json file
export function writeData(path, data) {
  let fs = require("fs");
  fs.writeFileSync(path, JSON.stringify(data));
}
export function saveData([
  nome,
  sobrenome,
  endereco,
  cpf,
  telefone,
  email,
  senha,
]) {
  // create an object with the parameters as attributes
  let data = {
    nome: nome,
    sobrenome: sobrenome,
    endereco: endereco,
    cpf: cpf,
    telefone: telefone,
    email: email,
    senha: senha,
  };

  // compare the data with the data in the json file and if the data is already in the file, ask the user if he wants to overwrite the data
  let dataJson = getData("data.json");
  let dataExists = false;
  for (let i = 0; i < dataJson.length; i++) {
    if (dataJson[i].email == data.email) {
      dataExists = true;
      break;
    }
  }
  if (dataExists) {
    if (confirm("Já existe um cadastro com esse email. Deseja sobrescrever?")) {
      // if the user confirms, overwrite the data
      let index = dataJson.findIndex((item) => item.email == data.email);
      dataJson[index] = data;
      writeData("data.json", dataJson);
    }
  }
  // if the data is not in the file, add the data to the file
  else {
    dataJson.push(data);
    writeData("data.json", dataJson);
  }
}

// create an function to open a new tab with the html path as parameter
export function openNewTab(path) {
  window.open(path, "_blank");
}

// retrieve the data from the json file with the user email as parameter, create an object with the data and return it
export function getUserData(email) {
  let data = getData("data.json");
  let userData = data.find((item) => item.email == email);
  return userData;
}
