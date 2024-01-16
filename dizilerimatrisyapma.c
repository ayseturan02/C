#include <stdlib.h>
#include <conio.h>
int main()
{
    int dizi[100];
    int a[100][100];
    int i, j, n, x, st, su;
    printf("Dizi kac elemandan olusmali : ");
    scanf("%d",&n);
    for(x=0; x<n; x++)
    {
        printf("Dizinin [%d] . elemanini giriniz : ",x+1);
        scanf("%d",&dizi[x]);
    }
    printf("\nDizi elemanlari -->\n" );
    for(x=0; x<n; x++)
    {
        printf("%3d",dizi[x]);
    }
    printf("\nMatrisin Satir sayisini giriniz : ");
    scanf("%d",&st);
    printf("\nMatrisin Sutun sayisini giriniz : ");
    scanf("%d",&su);
    if(n%st==0 && n%su==0)
    {
        x=0;
        for(i=0; i<st; i++)
        {
            for (j=0; j<su; j++)
            {
                a[i][j]=dizi[x];
                x++;
            }
        }
        printf("\n\nMATRIS > \n");
        for(i=0; i<st; i++)
        {
            for(j=0; j<su; j++)
            {
                printf("%3d", a[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("HATA! Dizi Eleman Sayisi Satir veya Sutuna Tam bolunmelidir");
    getch ();
}
