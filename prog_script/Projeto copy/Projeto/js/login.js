import { openNewTab } from "./functions.js";
export function login(email, senha) {
  debugger;
  if (email == "" || senha == "") {
    alert("Preencha todos os campos");
  } else {
    let fs = require("fs");
    let db = JSON.parse(fs.readFileSync("db.json", "utf8"));

    // check if email and password match
    let user = db.users.find(function (user) {
      return user.email == email && user.password == senha;
    });

    if (user) {
      // if user exists show dashboard
      openNewTab("../html/index.html");
    } else {
      // if not show error
      alert("Usuário ou senha incorretos");
    }
  }
}
