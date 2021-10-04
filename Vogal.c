//Jaderley Fonseca Marins Junior 21.1.4058 BCC201-43

int main() {
    char letra;
    //Mensagem para a escolha da letra
    printf("Digite a letra escolhida:");
    scanf("%c", &letra);
    //Identificação da letra
    if(letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' ||
        letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U')
    //Resultado da identificação
        printf("Sua letra eh uma volga\n");

    else
        printf("sua letra nao eh uma vogal");
    return 0;
}
