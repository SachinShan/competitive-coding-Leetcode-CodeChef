int shuru = 0, abhi = 0;
int jada = 0;
int ginti = 0;
// using sliding window
while (abhi < arr.length())
{
    if (arr[abhi] == 1)
    {
        ginti++;
        jada = max(jada, ginti);
        abhi++;
    }
    else
    {
        while (abhi < arr.length() && arr[abhi] == 0)
        {
            ginti++;
            abhi++;
            jada = max(jada, ginti);
        }
        shuru = abhi;
        while (abhi < arr.length() && arr[abhi] == 1)
        {
            ginti++;
            abhi++;
            jada = max(jada, ginti);
        }
        abhi = shuru;
        ginti = 0;
    }
}
return jada;