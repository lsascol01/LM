alert ("Feliz CUmpleaños Emiliano!!!")
var d = document.getElementById("dibujito");
var lienzo = d.getContext("2d");

dibujarlinea("blue", 12, 23,10,300)

function dibujarlinea(color, xinicial, yinicial, xfinal, yfinal){

    lienzo.beginPath();
lienzo.strokeStyle = color;
lienzo.moveTo(xinicial, yinicial);
lienzo.lineTo(xfinal, yfinal);
lienzo.stroke();ç
lienzo.closePath();
}