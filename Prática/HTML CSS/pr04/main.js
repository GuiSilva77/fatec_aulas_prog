let object = {
  name: "John",
  surname: "Doe",
  age: 50,
  eyeColor: "blue",
  address: {
    street: "rue des Lilas",
    number: "42",
    city: "Paris",
    country: "France",
  },
  phoneNumbers: [
    `
        +33 6-49-48-48-48`,
    `
        +33 6-49-48-48-48`,
  ],
};

// open db.json file and write the object
const fs = require("fs");
fs.writeFileSync("Prática/HTML CSS/pr04/db.json", JSON.stringify(object));

function readFile(file) {
  // read db.json file
  const fs = require("fs");
  const data = fs.readFileSync(file, "utf-8");
  return data;
}

let obj = JSON.parse(readFile("Prática/HTML CSS/pr04/db.json"));
console.log(obj);
