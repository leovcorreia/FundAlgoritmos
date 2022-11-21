#include <stdio.h>

int fatorial(int f) {

    if (f == 0) {
        return 1;
    } else {
        return f * fatorial(f-1);
    }

}

int main() {

    int fat;

    printf("Digite o numero: ");
    scanf("%d", &fat);

    int x = fatorial(fat);

    printf("Fatorial de %d = %d", fat, x);

    return 0;
}
