import * as fn from "./functions.js";

$(document).ready(() => {
  $("#txtCPF").mask("999.999.999-99");
  $("#txtTel").mask("(99) 99999-9999");

  $("#btnSalvar").click(() => {
    fn.compSenha();
  });
});
