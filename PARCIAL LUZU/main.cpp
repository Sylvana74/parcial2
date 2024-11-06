#include <iostream>
#include "Equipo.h"
#include "Cliente.h"
#include "Pedido.h"
#include "Empleado.h"

int main() {

    // Crear empleados
    Empleado empleado1("JUANA LA LOCA", "JL666");
    Empleado empleado2("FELIPE EL HERMOSO", "FE777");

    // Crear clientes
    Cliente cliente1("Day Gonzalez", "223-4444444", "dayloca@email.com");
    Cliente cliente2("Jose Garcia", "223-5131313", "josevagancia@email.com");
    Cliente cliente3("Mirta Legrand", "223-7777777", "longeva@email.com");
    Cliente cliente4("Megan Sonsa", "223-6567890", "sonsa@mail.com");

    // Crear Equipos dinámicamente
    Equipo* Equipo1 = new Equipo("Antifaz", 105, 1800.10);
    Equipo* Equipo2 = new Equipo("Bota Punta-gomera", 102, 35000.00);
    Equipo* Equipo3 = new Equipo("Pantalon Refinado", 104, 62000.00);
    Equipo* Equipo4 = new Equipo("Chaleco sinbalas", 106, 2200.00);
    Equipo* Equipo5 = new Equipo("Arnes andasaber", 109, 10200.00);

    // Crear pedido
    Pedido pedido1(&cliente1, &empleado1); 
    Pedido pedido2(&cliente2, &empleado2);
    Pedido pedido3(&cliente3, &empleado1);
    Pedido pedido4(&cliente4, &empleado2);
    
    // Agregar artículos al pedido
   
    pedido1.agregarEquipos(Equipo2);
    pedido2.agregarEquipos(Equipo4);
    pedido3.agregarEquipos(Equipo3);
    pedido4.agregarEquipos(Equipo1);
   

    // Ver los pedidos
    std::cout << "\n** LUZU SEGURA SHOP **\n";
    pedido1.verPedido();
    pedido2.verPedido();
    pedido3.verPedido();
    pedido4.verPedido();

    // Libera memoria
    delete Equipo1;
    delete Equipo2;
    delete Equipo3;
    delete Equipo4;
    delete Equipo5;

    return 0;
}
