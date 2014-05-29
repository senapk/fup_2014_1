//kk.hpp
/*
 * [Autor]
 * David Sena
 * sena.ufc@gmail.com
 *
 */

#ifndef KK_H
#define KK_H
/*
 * [Autor]
 * David Sena
 * sena.ufc@gmail.com
 *
 */
#ifndef __cplusplus
#define _POSIX_C_SOURCE	199309L
#endif
#include <cstdlib>//rand e srand
#include <cstdio>
#include <unistd.h>
#include <termios.h>//k_peek e k_wait
#include <string>
#include <stdarg.h>//k_write
#include <sys/time.h>//srand e k_sleep
#include <ctime>//k_sleep
#include <map>

using namespace std;
struct termios old_attr, new_attr;

namespace tk{

    enum EFFECT {
        Reset = 0, Bright = 1, Dim = 2, Underline = 3,
        Blink = 4, Reverse = 7, Hidden = 8
    };

    enum COLOR{
        Black = 0, Red = 1, Green = 2, Yellow = 3, Blue = 4,
        Magenta = 5, Cyan = 6, White = 7
    };

    /*
     * Efetua mudanca de cor, fundo e efeito usando enum
     * Se nenhum parametro for passado, ele faz um Reset
     * para as cores padroes.
     */
    void kcolor(COLOR letra = White, COLOR FUNDO = Black, EFFECT efeito = Reset);

    /* Muda a cor da letra
     * r,g,b,y,c,m,k,w para cores claras
     * R,G,B,Y,C,M,K,W para cores escuras */
    void kcolor(char color);

    /* Limpa o fundo */
    void kclear();

    /* Escreve na posicao x,y o texto usando a sintaxe de printf
     * ex:  write(10,5,"oi");
     * ex:  write(12,6,'r',"%d %c", idade, sexo); */
    void kwrite(int x, int y, const char *format, ...);
    void kwrite(int x, int y, char color, const char *format, ...);


    //Move o cursor para essa posicao da tela
    void kmove(int x, int y);

    /* Se houver alguma tecla no teclado ele retorna a tecla,
     * caso contrário, retorna 0  */
    int kpeek(void);

    /* Trava e so retorna quando o usuario digitar uma tecla */
    int kwait(void);

    /* Faz o programa dormir por mseg, em milesegundos */
    void ksleep(int msec);

    /* Retorna um número aleatorio */
    int  krand();

    /* Toca um mp3 se tiver o programa mpg123 instalado */
    void k3play(const char *path);

    /* Interrompe um mp3 que esteja tocando */
    void k3stop(const char *path);

    /*
     * Cria e retorna uma string no formato printf
     */
    string sstr(const char *format, ...);
};

/*
 * Macro para carregar um parametro variadicon
 * em uma char *
 */
#define vload(str, format) va_list args;     \
    va_start( args, format );\
    vsprintf(str, format, args);\
    va_end( args );

string tk::sstr(const char *format, ...){
    char str[1000];
    vload(str, format);
    std::string s(str);
    return s;
}

void tk::kcolor(tk::COLOR letra, tk::COLOR fundo, tk::EFFECT efeito)
{
    char command[13];
    sprintf(command, "%c[%d;%d;%dm", 0x1B, (int) efeito,
            (int)letra + 30, (int)fundo + 40);
    cout << command;
}

void tk::kcolor(char color)
{
    static std::map<char, string> mapa;
    static int init = 1;
    if (init == 1){
        mapa['k'] = "\033[1;30m";
        mapa['r'] = "\033[1;31m";
        mapa['g'] = "\033[1;32m";
        mapa['y'] = "\033[1;33m";
        mapa['b'] = "\033[1;34m";
        mapa['m'] = "\033[1;35m";
        mapa['c'] = "\033[1;36m";
        mapa['w'] = "\033[1;37m";
        mapa['K'] = "\033[0;30m";
        mapa['R'] = "\033[0;31m";
        mapa['G'] = "\033[0;32m";
        mapa['Y'] = "\033[0;33m";
        mapa['B'] = "\033[0;34m";
        mapa['M'] = "\033[0;35m";
        mapa['C'] = "\033[0;36m";
        mapa['W'] = "\033[0;37m";
    }
    cout << mapa[color].c_str();
}

void tk::kclear(){
    cout << "\033[2J";
}

void tk::kmove(int x, int y){
    //corrigindo alinhamento
    y = y + 1;
    x = x + 1;
    char msg[15];
    sprintf(msg,"\033[%d;%dH",y,x);
    cout << msg;
}


void tk::kwrite(int x, int y, const char *format, ...)
{
    char str[1000];
    vload(str, format);
    tk::kmove(x, y);
    printf("%s", str);
    //cout << str;
}

void tk::kwrite(int x, int y, char color, const char *format, ...)
{
    char str[1000];
    vload(str, format);
    tk::kmove(x, y);
    tk::kcolor(color);
    printf("%s", str);
    //cout << str;
}

/*
 * [Autor] k_peek e k_wait
 * Daemonio (Marcos Paulo Ferreira)
 * http://daemoniolabs.wordpress.com
 */
int tk::kpeek(void) {
    int c ;

    /* Obtém as configurações atuais. */
    tcgetattr(0,&old_attr);
    new_attr=old_attr;

    /* Desliga modo canônico. */
    new_attr.c_lflag &=~ICANON ;

    /* Desliga ecoamento. */
    new_attr.c_lflag &= ~ECHO;

    new_attr.c_cc[VTIME]=0 ;
    new_attr.c_cc[VMIN]=0 ;

    tcsetattr(STDIN_FILENO,TCSANOW,&new_attr);
    c = getchar() ; /* retorna EOF se nada foi pressionado */
    tcsetattr(STDIN_FILENO,TCSANOW,&old_attr);

    tcsetattr(STDIN_FILENO,TCSANOW,&old_attr);
    if (c == EOF)
        c = 0;
    return c ;
}

/*
 * [Autor] khit e kwait
 * Daemonio (Marcos Paulo Ferreira)
 * http://daemoniolabs.wordpress.com
 */
int tk::kwait(void) {
    int c ;
    /* Obtém as configurações atuais. */
    tcgetattr(0,&old_attr);
    new_attr=old_attr;

    /* Desliga modo canônico. */
    new_attr.c_lflag &=~ICANON ;

    /* Espera indefinidamente até
     * que um byte seja lido. */
    new_attr.c_cc[VTIME]=0 ;
    new_attr.c_cc[VMIN]=1 ;
    /* Desliga ecoamento. */
    new_attr.c_lflag &= ~ECHO;

    /* Chama getchar() que realizará somente a
     * leitura de um byte, devido o terminal
     * não estar em modo canônico quando ela
     * é chamada. */
    tcsetattr(STDIN_FILENO,TCSANOW,&new_attr);
    c = getchar() ;
    tcsetattr(STDIN_FILENO,TCSANOW,&old_attr);

    tcsetattr(STDIN_FILENO,TCSANOW,&old_attr);
    return c ;
}

void tk::ksleep(int msec)
{
    struct timespec interval;
    struct timespec remainder;
    interval.tv_sec = msec / 1000;
    interval.tv_nsec = (msec % 1000) * (1000 * 1000);
    nanosleep(&interval, &remainder) ;
    //usleep(1000*msec);
}

int tk::krand()
{
    static int init = 1;
    if(init) {
        init = 0;
        srand(time(NULL));
    }
    return rand();
}

void tk::k3play(const char *path){
    char c[500];
    sprintf(c,"mpg123 %s 2>/dev/null 1>/dev/null&",path);
    system(c);
}

void tk::k3stop(const char *path){
    char c[500];
    sprintf(c,"ps aux  | grep \"mpg123 %s\" |head -1|  awk '{ print $2; }' | xargs kill -9 2>/dev/null 1>/dev/null&",path);
    system(c);
}






#endif //TK_H

/* EOF */
