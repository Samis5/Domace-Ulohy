#include <stdio.h>
int main(){
    char nazovproduktu1[50];
    float cena1;
    int pocet1;

    char nazovproduktu2[50];
    float cena2;
    int pocet2;

    char nazovproduktu3[50];
    float cena3;
    int pocet3;

    printf("---PRODUKT 1---\n");
    printf("Nazov produktu: ");
    scanf("%s", nazovproduktu1);
    printf("Cena produktu: ");
    scanf("%f", &cena1);
    printf("Pocet kusov: ");
    scanf("%d", &pocet1);

    printf("\n---PRODUKT 2---\n");
    // TU CHÝBAL PRINTF PRE NÁZOV:
    printf("Nazov produktu: "); 
    scanf("%s", nazovproduktu2);
    printf("Cena produktu: ");
    scanf("%f", &cena2);
    printf("Pocet kusov: ");
    scanf("%d", &pocet2);

    printf("\n---PRODUKT 3---\n");
    printf("Nazov produktu: ");
    scanf("%s", nazovproduktu3);
    printf("Cena produktu: ");
    scanf("%f", &cena3);
    printf("Pocet kusov: ");
    scanf("%d", &pocet3);

    float spolu1 = cena1 * pocet1;
    float spolu2 = cena2 * pocet2;
    float spolu3 = cena3 * pocet3;
    float celkova_cena = spolu1 + spolu2 + spolu3;

    // TUTO BOLI VŠETKY TRI RIADKY ROVNAKÉ A S PREHODENÝMI ZNAČKAMI:
    printf("\n\n--- PREHLAD NAKUPU ---\n");
    printf("1. %s | Cena za kus: %.2f | Pocet: %d ks | Spolu: %.2f EUR\n", nazovproduktu1, cena1, pocet1, spolu1);
    printf("2. %s | Cena za kus: %.2f | Pocet: %d ks | Spolu: %.2f EUR\n", nazovproduktu2, cena2, pocet2, spolu2);
    printf("3. %s | Cena za kus: %.2f | Pocet: %d ks | Spolu: %.2f EUR\n", nazovproduktu3, cena3, pocet3, spolu3);
    
    printf("--------------------------------------\n");
    // OPRAVENÉ %2.f na %.2f:
    printf("CELKOVA SPOLU: %.2f EUR\n", celkova_cena);

    if (celkova_cena > 50) {
        float zlavnena_cena = celkova_cena * 0.9;
        printf("\nZiskavas zlavu 10%% (nakup nad 50 EUR)!\n");
        printf("Cena po zleve: %.2f EUR\n", zlavnena_cena);
    }

    return 0;
}
