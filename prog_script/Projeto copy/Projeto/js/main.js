(function (undefined) {
  "use strict";

  require(["./functions"], function () {
    console.log("fn", $(document));
  });
})();

(function (undefined) {
  "use strict";

  require(["./jquery-3.6.0.min"], function () {
    console.log("jQuery carregado!", $(document));
  });
})();

(function (undefined) {
  "use strict";

  require(["./login"], function () {
    console.log("lg", $(document));
  });
})();

import * as fn from "./functions.js";
import * as login from "./login.js";
// debugger;
// check if the page is './html/login.html'
if (window.location.href.indexOf("login.html") > -1) {
  const email = document.getElementById("inputEmail");
  const password = document.getElementById("inputPassword");
  const button = document.getElementById("btnLogin");

  button.addEventListener("click", () => {
    login.login(email.value, password.value);
  });
}
