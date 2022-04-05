#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef enum
    {
        Ocak,
        Subat,
        Mart,
        Nisan,
        Mayis,
        Haziran,
        Temmuz,
        Agustos,
        Eylul,
        Ekim,
        Kasim,
        Aralik,
    }aylar;

    aylar sira=Agustos;
    printf("Sectiginiz ay %d. Aydir",sira+1);

}
