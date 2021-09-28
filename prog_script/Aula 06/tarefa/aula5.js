import * as office from "./office";

const format = document.getElementById("format");
let notas = [];
format.addEventListener("click", async (event) => {
  event.preventDefault;
  await Excel.run(async (context) => {
    const sheet = context.workbook.worksheets.getActiveWorksheet();
    const range = sheet.getRange("A1:B1").getExtendedRange("Down");
    range.load(["values", "rowCount"]);
    const rangeNotas = sheet.getRange("B2").getExtendedRange("Down");
    rangeNotas.load(["values", "rowCount", "numberFormat"]);
    await context.sync();
    sheet.getUsedRange(true).clear();
    sheet.getRange(`A2:B${range.rowCount + 1}`).values = range.values;
    sheet.getRange(`A1:B1`).clear();
    await context.sync();
    const table = sheet.tables.add(`A1:B${range.rowCount + 1}`, true);
    table.style = "TableStyleMedium15";
    table.name = "Alunos";
    sheet.getRange("A1").values = [["Nome"]];
    sheet.getRange("B1").values = [["Nota"]];
    notas.push(rangeNotas.values);
    notas = notas.flat();
    notas = notas.flat();
    const condicao = rangeNotas.conditionalFormats.add("CellValue");
    condicao.cellValue.format.font.color = "red";
    condicao.cellValue.rule = { formula1: "=6", operator: "LessThan" };
    const condicao2 = rangeNotas.conditionalFormats.add("CellValue");
    condicao2.cellValue.format.font.color = "blue";
    condicao2.cellValue.rule = {
      formula1: "=6",
      operator: "GreaterThanOrEqual",
    };
    await context.sync();
    range.format.autofitColumns();
    rangeNotas.numberFormat = rangeNotas.numberFormat.map(() => ["0.0"]);
    await context.sync();
  });
});
