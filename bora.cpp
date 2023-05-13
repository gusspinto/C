#include <stdio.h>

struct Ginasio {
    int preco;
    int grade;
};

struct Luz {
    int preco;
    int grade;
};

struct Agua {
    int preco;
    int grade;
};
struct Contas {
    struct Ginasio ginasio;
    struct Luz luz;
    struct Agua agua;
};

int main() {
    struct Contas contas;
    int saldo;
    char name[10], pass[10];

    printf("Enter name: ");
    gets_s(name);
    printf("Enter password: ");
    gets_s(pass);

    printf("A CONFIRMAR DADOS...");
    printf("Press enter to continue: ");


    printf("%d", name);
    for (size_t i = 0; i < sizeof(pass); i++)
    {
        printf("%d", pass);
    }


}