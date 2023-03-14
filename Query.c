/* Dame el ganador de las partidas que duraron más de 5 minutos (300 segundos), indicando también sus fechas */
SELECT PARTIDA.GANADOR, PARTIDA.FECHA
FROM (JUGADOR, PARTIDA, LISTA_PARTIDAS)
WHERE PARTIDA.DURACION > 300;