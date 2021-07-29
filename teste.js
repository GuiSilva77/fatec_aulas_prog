export class aluno{
  constructor(nome, numero, sala){
    this.nome = nome;
    this.numero = numero;
    this.sala = sala;
  }

  isFault()
  {
    console.log("fault");
  }
}

let aluno2 = new aluno;

aluno2.isFault();





