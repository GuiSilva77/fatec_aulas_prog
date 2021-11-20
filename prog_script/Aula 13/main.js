$.ajax({
  url: "http://localhost:5500/db.json",
  method: "GET",
  dataType: "JSON",
  success: function (data) {
    console.log(data);
  },
});

$.ajax({
  type: "post",
  url: "http://localhost:5500/db.json",
  dataType: "JSON",
  contentType: "application/json",
  data: JSON.stringify({
    name: "Guilherme",
    age: "23",
  }),
  success: function (data) {
    console.log(data);
  },
});
