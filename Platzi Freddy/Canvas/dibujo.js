var d = document.getElementById("dibujito");
var lienzo = d.getContext("2d");
lienzo.beginPath();
lienzo.strokeStyle = "green";
lienzo.moveTo(20, 110);
lienzo.lineTo(60, 150);
lienzo.arcTo(100,200,300,180,30);
lienzo.stroke();
lienzo.closePath();

