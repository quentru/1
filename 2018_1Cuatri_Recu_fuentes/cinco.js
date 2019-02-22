function mostrar()
{
    var precioHabitacion;
    var metodoPago;
    var descuento;
    var paquete;
    var precioFinal;
    precioHabitacion = prompt("Ingrese el precio de la habitacion");
    metodoPago = prompt("Ingrese su Metodo de Pago");
    paquete = prompt("Ingrese el paquete");
    precioHabitacion=parseInt(precioHabitacion);
    switch(metodoPago){
        case "visa":
        case "mercadopago":
        descuento = precioHabitacion * 0.10;
        break;
        case "paypal":
        descuento = precioHabitacion * 0.15;
        break;
        case "efectivo":
        descuento = precioHabitacion * 0.2;
        break;
        default:
        descuento = precioHabitacion * 0.05;
    }
    precioFinal = precioHabitacion - descuento;
    alert("El precio a pagar es "+precioFinal);
}
