<code> 

banco_cliente = true;
cuenta_cliente = true;
saldo_cliente;
banco_destino = false;
cuenta_destino = false;
hora_de_transferencia;
transferencia = 1000000;
costo_de_transaccion = 100;

if (cuenta_cliente && cuenta_destino && saldo_cliente > transferencia )
{
    if ((hora_de_transferencia >= 9 && hora_de_transferencia <= 12)||(hora_de_transferencia >= 15 && hora_de_transferencia <= 20)){
        if (banco_cliente && banco_destino){
            alert("Has hecho con exito tu transaccion");
        } else {
            total = transferencia + costo_de_transaccion;
            if (saldo_cliente > total)
            {
                alert("Transaccion exitosa");
            } else {
                alert("No hay suficiente dinero en tu cuenta");
            }
        };
    } else {
        alert("No estamos en horas de atenderte");
    };
} else {
    alert("Ops se ha detectado un error");
};