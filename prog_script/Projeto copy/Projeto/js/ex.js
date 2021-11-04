const JSONpath =
  "/Users/Guilh/Documents/GitHub/fatec_aulas_prog/prog_script/Projeto copy/Projeto/json/db.json";

//save data to json file with path as parameter
function saveData(path, data) {
  let fs = require("fs");

  fs.writeFileSync(path, JSON.stringify(data));
}

let object = {
  name: "guilherme",
  email: "email@email.com",
  senha: "123456",
  telefone: "123456789",
};

saveData(JSONpath, object);
