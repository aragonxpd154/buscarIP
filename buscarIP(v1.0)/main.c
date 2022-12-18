#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Define o intervalo de endere�os IP da rede
    const char *network = "192.168.1";

    // Itera sobre os endere�os IP da rede
    for (int i = 0; i < 255; i++) {
        // Monta o comando ping para o endere�o IP atual
        char command[128];
        sprintf(command, "ping -c 1 %s.%d", network, i);

        // Executa o comando ping
        int result = system(command);

        // Verifica se o comando ping teve sucesso
        if (result == 0) {
            // O endere�o IP est� respondendo ao ping, ent�o exibe-o para o usu�rio
            printf("%s.%d\n", network, i);
        }
    }

    return 0;
}
