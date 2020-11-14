`timescale 1ns / 1ps
module trecere_top(
    output p_rosu,          // red for pedestrians
    output p_verde,         // green for pedestrians
    output m_rosu,          // red for cars
    output m_galben,        // yellow for cars
    output m_verde,         // green for cars
    input clk50MHz);        // clock input

// divide input clock
divider d(50_000_000, clk50MHz, clk_1Hz);
trecere t(p_rosu, p_verde, m_rosu, m_galben, m_verde, clk_1Hz);

endmodule
