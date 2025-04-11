%{
    #include <stdio.h>
    #include <stdlib.h>

    int op = 0, i;
    float a, b;

    void digi();
    %}

    DIGIT [0-9]+|([0-9]*)"."([0-9]+)
    ADD "+"
    SUB "-"
    MUL "*"
    DIV "/"
    POW "^"
    NEWLINE \n

    %%

    {DIGIT}  { digi(); }
    {ADD}    { op = 1; }
    {SUB}    { op = 2; }
    {MUL}    { op = 3; }
    {DIV}    { op = 4; }
    {POW}    { op = 5; }
    {NEWLINE} { printf("\n The Answer : %f\n\n", a); }

    %%

    void digi() {
        if (op == 0) {
            a = atof(yytext); // Convert ASCII input to float
        } else {
            b = atof(yytext);
            switch (op) {
                case 1: a = a + b; break;
                case 2: a = a - b; break;
                case 3: a = a * b; break;
                case 4: a = a / b; break;
                case 5:
                    for (i = a; b > 1; b--)
                        a = a * i;
                break;
            }
            op = 0;
        }
    }

    int main() {
        printf("Enter an arithmetic expression:\n");
        yylex();
        return 0;
    }

    int yywrap() {
        return 1;
    }
