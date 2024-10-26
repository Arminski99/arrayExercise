#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //Initalisierungsvariablen
    int const gradeAmount = 10;
    float gradesArr[gradeAmount];
    int readingStatus = 0;
    float gradeSum = 0;
    float gradeAverage = 0.0;

    for (int i = 0; i < gradeAmount; i++) {

        printf("Bitte Note eingeben \n");
        readingStatus = scanf("%f", &gradesArr[i]);

        //Errorhandling
        if (readingStatus != 1) {
            printf("Keine Zahl! \n");
            scanf("%*[^\n]");
            i--;
            continue;
        }
        if (gradesArr[i] < 1 || gradesArr[i] > 6) {
            printf("Zahl zu klein oder gross! \n");
            scanf("%*[^\n]");
            i--;
            continue;
        }

        //Summieren
        gradeSum += gradesArr[i];
    }

    //Durchschnitt
    gradeAverage = gradeSum / (float)gradeAmount;

    //Ausgabe
    printf("Notendurschnitt: %.2f \n", gradeAverage);
    printf("Notensumme: %.2f", gradeSum);


}
