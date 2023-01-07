class Solution
{
public:
    string categorizeBox(int length, int width, int height, int mass)
    {
        string h = "Heavy", B = "Bulky", b = "Both", N = "Neither";

        bool hea = false, bul = false;

        long long l = length, w = width, hbn = height;
        if (length >= 10000 || width >= 10000 || height >= 10000)
        {
            bul = true;
        }
        else if ((l * w * hbn) >= 1000000000)
        {
            bul = true;
        }

        if (mass >= 100)
        {
            hea = true;
        }

        if (hea && bul)
        {
            return b;
        }
        else if (!hea && !bul)
        {
            return N;
        }
        else if (bul && !hea)
        {
            return B;
        }
        else if (hea && !bul)
        {
            return h;
        }

        return "H";
    }
};