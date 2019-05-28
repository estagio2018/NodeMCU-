O código teste com objetivo de obter o MAC do NodeMCU8266


Como queremos apenas exibir o MAC, a função loop está vazia 
Primeiro, incluímos a biblioteca ESP8266WiFi 
 #include <ESP8266WiFi.h>
 Para obter o MAC usamos o parâmetro macAdress  que retornará o endereço MAC no formato hexadecimal
