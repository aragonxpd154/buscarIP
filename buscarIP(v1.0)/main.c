#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Define o intervalo de endereços IP da rede
    const char *network = "192.168.1";

    // Itera sobre os endereços IP da rede
    for (int i = 0; i < 255; i++) {
        // Monta o comando ping para o endereço IP atual
        char command[128];
        sprintf(command, "ping -c 1 %s.%d", network, i);

        // Executa o comando ping
        int result = system(command);

        // Verifica se o comando ping teve sucesso
        if (result == 0) {
            // O endereço IP está respondendo ao ping, então exibe-o para o usuário
            printf("%s.%d\n", network, i);
        }
    }

    return 0;
}
