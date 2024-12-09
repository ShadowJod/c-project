#include <stdio.h>

void Printbarr(int id, int progress);

const int BAR_LENGTH = 50;

int main()
{
    int id = 3, progress = 100;
    Printbarr(id,progress);
    Printbarr(2,44);
    Printbarr(1,0);

    return 0;
}

void Printbarr(int id, int progress)
{
    int bar_to_show = (int)(progress * BAR_LENGTH) / 100;
    printf("\nTask %d: [", id);
    for (int i = 0; i < BAR_LENGTH; i++)
    {
        if (i < bar_to_show)
        {
            printf("=");
        }
        else
        {
            printf(" ");
        }
    }
    printf("] %d%%", progress);
}