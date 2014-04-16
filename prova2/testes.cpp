#include "aluno.cpp"
#include "engine.cpp"
#include <time.h>

Tester t;



int main()
{
    {
        t.open("contar", 2);
        float vet[] = {3, 4, 5, 6, 7};
        t.add(qtd_contar_menores_media(vet, 5) == 2);
        float vet2[] = {3, 4, 5, 6, 7, 2000};
        t.add(qtd_contar_menores_media(vet, 6) == 5);
        t.close();
    }
    {
        t.open("vogal", 1);
        t.add(eh_vogal('A') == true);
        t.add(eh_vogal('u') == true);
        t.add(eh_vogal('X') == false);
        t.close();
    }
    {
        t.open("consoante", 2);
        t.add(eh_vogal('z') == true);
        t.add(eh_vogal('B') == true);
        t.add(eh_vogal('i') == false);
        t.add(eh_vogal('O') == false);
        t.add(eh_vogal('a') == false);
        t.close();
    }
    {
        t.open("soma_primeiros_25n3", 2);
        t.add(soma_primeiros_25n3(1) == 10);
        t.add(soma_primeiros_25n3(2) == 30);
        t.add(soma_primeiros_25n3(3) == 70);
        t.add(soma_primeiros_25n3(4) == 130);
        t.add(soma_primeiros_25n3(5) == 180);
        t.close();
    }
    {
        t.open("Contar unicos", 3);
        t.add(contar_unicos("batata") == 3);
        t.add(contar_unicos("pterodactilo") == 10);
        t.add(contar_unicos("      ") == 1);
        t.add(contar_unicos("a     a") == 2);
        t.close();
    }

    {
        t.open("substring", 5);
        {
            char maior[] = "hoje vou voar um voo";
            char menor[] = " v";
            int  pos[10];
            int  qtd = 0;
            substring(maior, menor, qtd, pos);
            t.add(qtd == 3 && pos[0] == 4 && pos[1] == 8 && pos[2] == 16);
        }
        {
            char maior[] = "aaaaa";
            char menor[] = "aa";
            int  pos[10];
            int  qtd = 0;
            substring(maior, menor, qtd, pos);
            t.add(qtd == 4 && pos[0] == 0 && pos[1] == 1 && pos[2] == 2 && pos[3] == 3);
        }
        t.close();
    }

    t.total();
    return 0;
}
