#include <stdio.h> 
#include <math.h>

int main () {
    int n = 5;
    //On donne à v1 la valeur n
    int v1 = n;
    printf("n est egal a %d\n", v1);
    //On calcule v2 = n^2
    int v2 = pow(n, 2);
    printf("L'aire du carre est : %d\n", v2);
    //On calcule l'aire du cercle de diamètre n. 
    //Comme on doit faire n^2 et que v2 = n^2, on peut directement mettre v2 dans le code
    float v3 = 3.14 * v2 / 4;
    printf("L'aire du cercle est = %.3f\n", v3);
    //On renvoie v2/v3
    //Le .3 entre le % et le f sert à arrêter l'affichage après la 3ème décimale
    //Ce n'est pas obligatoire du tout, et ça ne change pas sa vraie valeur non plus
    printf("%.3f/%d = %.3f", v3, v2, v3/v2);
    //Tu noteras que le ratio entre v3 et v2 vaudra toujours 0.785
}