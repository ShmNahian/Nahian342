/*        ／＞　　フ
　　　　　| 　_　 _ |
　 　　　／` ミ＿Yノ     meow
　　 　 /　　　 　 |   
　　　 /　 ヽ　　 ﾉ  
　 　 │　　|　|　|
　／￣|　　 |　|　|    
　| (￣ヽ＿_ヽ_)__)   
　＼二つ
*/
/*
 *program to display calculate depreciation
 *This code is released under the IIUC Public License .
 *(c)2023, Data Pirates Team.
 */
#include <stdio.h>
#include <ctype.h>

void sl(float val, int n);
void ddb(float val, int n);
void syd(float val, int n);
void writeoutput(int year, float depreciation, float value);

int main() {
    int n, choice = 0;
    float val;
    char answer1 = 'Y', answer2 = 'Y';

    while (toupper(answer1) != 'N') {

        if (toupper(answer2) != 'N') {
            printf("\nOriginal value: ");
            scanf("%f", &val);
            printf("Number of years: ");
            scanf("%d", &n);
            printf("\nMethod: (1-SL 2-DDB 3-SYD) ");
            scanf("%d", &choice);
        }
   switch (choice) {
            case 1:
                printf("\nStraight-Line Method\n\n");
                sl(val, n);
                break;

            case 2:
                printf("\nDouble-Declining-Balance Method\n\n");
                ddb(val, n);
                break;

            case 3:
                printf("\nSum-Of-The-Years-Digits Method\n\n");
                syd(val, n);
                break;

            default:
                printf("\nInvalid choice.\n");
        }
  printf("\nAnother calculation? (Y/N): ");
        scanf(" %c", &answer1);

        if (toupper(answer1) == 'N') {
            printf("Enter a new set of data? (Y/N): ");
            scanf(" %c", &answer2);
            if (toupper(answer2) == 'Y') {
                continue;
            } else {
                printf("\nGoodbye, have a nice day!\n");
                break;
            }
        }
    }

    return 0;
}
void sl(float val, int n) {
    float deprec;
    for (int year = 1; year <= n; ++year) {
        deprec = val / n;
        val -= deprec;
        writeoutput(year, deprec, val);
    }
}

void ddb(float val, int n) {
    float deprec;
    for (int year = 1; year <= n; ++year) {
        deprec = (2 * val) / n;
        val -= deprec;
        writeoutput(year, deprec, val);
    }
}
void syd(float val, int n) {
    float tag, deprec;
    tag = val;
    for (int year = 1; year <= n; ++year) {
        deprec = (n - year + 1) * tag / (n * (n + 1) / 2);
        val -= deprec;
        writeoutput(year, deprec, val);
    }
}

void writeoutput(int year, float depreciation, float value) {
    printf("End of Year %d\n", year);
    printf("Depreciation: %.2f\n", depreciation);
    printf("Current Value: %.2f\n", value);
}
