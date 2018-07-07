#include <bits/stdc++.h>

using namespace std;

int makeAnagram(string a, string b)
{
    int aChar1=0, bChar1=0, cChar1=0, dChar1=0, eChar1=0, fChar1=0, gChar1=0, hChar1=0, iChar1=0, jChar1=0, kChar1=0, lChar1=0, mChar1=0, nChar1=0, oChar1=0, pChar1=0, qChar1=0, rChar1=0, sChar1=0, tChar1=0, uChar1=0, vChar1=0, wChar1=0, xChar1=0, yChar1=0, zChar1=0;
    
    int aChar2=0, bChar2=0, cChar2=0, dChar2=0, eChar2=0, fChar2=0, gChar2=0, hChar2=0, iChar2=0, jChar2=0, kChar2=0, lChar2=0, mChar2=0, nChar2=0, oChar2=0, pChar2=0, qChar2=0, rChar2=0, sChar2=0, tChar2=0, uChar2=0, vChar2=0, wChar2=0, xChar2=0, yChar2=0, zChar2=0;
    
    int result=0;
    for(int i=0; i<a.length(); i++)
    {
        switch(a[i])
        {
            case 'a':
                aChar1++;
                break;
            case 'b':
                bChar1++;
                break;
            case 'c':
                cChar1++;
                break;
            case 'd':
                dChar1++;
                break;
            case 'e':
                eChar1++;
                break;
            case 'f':
                fChar1++;
                break;
            case 'g':
                gChar1++;
                break;
            case 'h':
                hChar1++;
                break;
            case 'i':
                iChar1++;
                break;
            case 'j':
                jChar1++;
                break;
            case 'k':
                kChar1++;
                break;
            case 'l':
                lChar1++;
                break;
            case 'm':
                mChar1++;
                break;
            case 'n':
                nChar1++;
                break;
            case 'o':
                oChar1++;
                break;
            case 'p':
                pChar1++;
                break;
            case 'q':
                qChar1++;
                break;
            case 'r':
                rChar1++;
                break;
            case 's':
                sChar1++;
                break;
            case 't':
                tChar1++;
                break;
            case 'u':
                uChar1++;
                break;
            case 'v':
                vChar1++;
                break;
            case 'w':
                wChar1++;
                break;
            case 'x':
                xChar1++;
                break;
            case 'y':
                yChar1++;
                break;
            case 'z':
                zChar1++;
                break;                
        }
    }

    for(int i=0; i<b.length(); i++)
    {
        switch(b[i])
        {
            case 'a':
                aChar2++;
                break;
            case 'b':
                bChar2++;
                break;
            case 'c':
                cChar2++;
                break;
            case 'd':
                dChar2++;
                break;
            case 'e':
                eChar2++;
                break;
            case 'f':
                fChar2++;
                break;
            case 'g':
                gChar2++;
                break;
            case 'h':
                hChar2++;
                break;
            case 'i':
                iChar2++;
                break;
            case 'j':
                jChar2++;
                break;
            case 'k':
                kChar2++;
                break;
            case 'l':
                lChar2++;
                break;
            case 'm':
                mChar2++;
                break;
            case 'n':
                nChar2++;
                break;
            case 'o':
                oChar2++;
                break;
            case 'p':
                pChar2++;
                break;
            case 'q':
                qChar2++;
                break;
            case 'r':
                rChar2++;
                break;
            case 's':
                sChar2++;
                break;
            case 't':
                tChar2++;
                break;
            case 'u':
                uChar2++;
                break;
            case 'v':
                vChar2++;
                break;
            case 'w':
                wChar2++;
                break;
            case 'x':
                xChar2++;
                break;
            case 'y':
                yChar2++;
                break;
            case 'z':
                zChar2++;
                break;                
        }
    }
    result = abs(aChar1-aChar2) + abs(bChar1-bChar2) + abs(cChar1-cChar2) + abs(dChar1-dChar2) + abs(eChar1-eChar2) + abs(fChar1-fChar2) + abs(gChar1-gChar2) + abs(hChar1-hChar2) + abs(iChar1-iChar2) + abs(jChar1-jChar2) + abs(kChar1-kChar2) + abs(lChar1-lChar2) + abs(mChar1-mChar2) + abs(nChar1-nChar2) + abs(oChar1-oChar2) + abs(pChar1-pChar2) + abs(qChar1-qChar2) + abs(rChar1-rChar2) + abs(sChar1-sChar2) + abs(tChar1-tChar2) + abs(uChar1-uChar2) + abs(vChar1-vChar2) + abs(wChar1-wChar2) + abs(xChar1-xChar2) + abs(yChar1-yChar2) + abs(zChar1-zChar2);
    
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
