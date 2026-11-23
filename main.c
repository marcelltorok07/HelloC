#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");
    printf("Hello, World! Again\n");

    /*
    int a = 12345678;
    printf("a = %d\n", a);
    double pi = 3.14;
    printf("pi = %.2f\n", pi);

    int sum = 1 + 2 + 3 + 4 + 5 + 6;
    printf("sum = %d\n", sum);

    int res1 = 5 * (6 + 2 / 6) - 10;
    printf("res1 = %d\n", res1);
    int div1 = 5 / 2;
    printf("div1 = %d\n", div1);
    double div2 = 5 / 2;
    printf("div2 = %.3f\n", div2);
    double div3 = 5.0 / 2;
    printf("div3 = %.3f\n", div3);
    char kukac = '@';
    printf("kukac = %c\n", kukac);
    int num1 = 17;
    int num2 = 5;
    int rem = num1 % num2; //remaining
    printf("rem = %d\n", rem);

    char nev[] = "Pistaba";
    printf("nev = %s\n", nev);

    double c=20.7;
    double d=30.5;
    double pontos=(double)c/d;
    printf("pontos = %f\n", pontos);

    double celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);
    double fahrenheit=celsius*9.0/5.0+32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    */
    /*
    //A1
        char nev[25];
        char szak[30];
        printf("Mi a neved?");
        scanf("%s",&nev);
        printf("Milyen szakra jarsz?\n");
        scanf("%s", &szak);
        printf("A neved: %s\n",nev);
        printf("A szakod: %s\n",szak);
    */
    /*
    //A2
        int eletkor;
        printf("Enter elekor: ");
        scanf("%d", &eletkor);
        printf("Az eletkorod: %d\n", eletkor);
    */
    /*
    //A3
        double num1, num2;
        printf("Adj meg ket szamot:");
        scanf("%lf %lf", &num1, &num2);
        double osszeg=num1+num2;
        printf("osszeg: %.2f\n", osszeg);
    */
    /*
    //A4
        int num0;
        printf("Ajd meg egy egesz szamot:");
        scanf("%d", &num0);
        int num1=num0*2;
        int num2=num0*3;
        printf("Az eredeti szam: %d\n", num0);
        printf("A szam ketszerese: %d\n", num1);
        printf("A szam haromszorosa: %d\n", num2);
    */
    /*
    //A5
        double a;
        printf("A negyzet egy oldala:");
        scanf("%lf",&a);
        double kerulet=(4*a);
        double terulet=(a*a);
        printf("A negyzet terulete:%.2f\n", terulet);
        printf("A negyzet kerulet:%.2f\n", kerulet);
    */
    /*
    //B1
        int a;
        int b;
        printf("Ajd meg ket szamot:");
        scanf("%d %d",&a, &b);
        int osszeg=a+b;
        int szorzat=a*b;
        int kulonbseg=a-b;
        printf("osszeg:%d, kulonbseg: %d, szorzat: %d",osszeg, kulonbseg, szorzat);
    */
    /*
    //B2
        int num1;
        int num2;
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        int hanyados=num1/num2;
        int maradek=num1%num2;
        printf("Hanyados: %d, maradek: %d", hanyados, maradek);
    */
    /*
    //B3
        int pontszam1, pontszam2, pontszam3;
        printf("Pontszam 1: ");
        scanf("%d", &pontszam1);
        printf("Pontszam 2: ");
        scanf("%d", &pontszam2);
        printf("Pontszam 3: ");
        scanf("%d", &pontszam3);
        double avg=(pontszam1+pontszam2+pontszam3)/3;    //average
        printf("Average: %.2f\n", avg);
    */
    /*
    //B4
        double radius;
        double pi = 3.14159265;
        printf("Enter radius: ");
        scanf("%lf", &radius);
        double kerulet = 2 * radius * pi;
        printf("A kor kerulete: %.2f\n", kerulet);
        double terulet = radius * radius * pi;
        printf("A kor terulete: %.2f\n", terulet);
    */
    /*
    //B5
        int time;
        printf("Enter time (seconds): ");
        scanf("%d", &time);
        int minutes = time / 60;
        int seconds = time % 60;
        printf("A megadott ido: %dmin %dsec", minutes, seconds);
    */
    /*
    //B6
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        int a=num/100;
        int b=(num/10)%10;
        int c=num%10;

        printf("A szam= %dx100 %dx10 %dx1", a, b, c);
    */
    /*
    //C1
        int price;
        printf("Enter price:");
        scanf("%d", &price);
        double sale;
        printf("Enter sale percent:\n");
        scanf("%lf", &sale);
        double new_price = price * (1 - sale);
        printf("New price: %lf\n", new_price);
    */
    /*
    //C2
        double distance;
        double time;
        printf("Enter time, distance:\n");
        scanf("%lf", &time);
        scanf("%lf", &distance);
        double avgspd= distance / time;
        printf("The average speed is: %.2fkm/h", avgspd);
    */
    /*
    //C3
        int a=5;
        int b=6;
        int c;
        c=a, a=b, b=c;
        printf("a:%d, b:%d\n", a, b);
    */
    /*
    //C4
        int szam1;
        int szam2;
        printf("Ketjegyu szam szokozzel:");
        scanf("%d%d", &szam1, &szam2);
        int temp;
        temp = szam1;
        szam1 = szam2;
        szam2 = temp;
        printf("Az uj szam:%d%d", szam1, szam2);
    */
    return 0;
}
