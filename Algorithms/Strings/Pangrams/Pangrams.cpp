#include <bits/stdc++.h>

using namespace std;

string pangrams(string s)
{
    int count = 0;
    bool aFound = false, bFound = false, cFound = false, dFound = false, eFound = false, fFound = false, gFound = false,
         hFound = false, iFound = false, jFound = false, kFound = false, lFound = false, mFound = false, nFound = false,
         oFound = false, pFound = false, qFound = false, rFound = false, sFound = false, tFound = false, uFound = false,
         vFound = false, wFound = false, xFound = false, yFound = false, zFound = false;
    
    for(int i=0; i<s.length(); i++)
    {
        switch(s[i])
        {
            case 'a':
            case 'A':
                if(aFound == false)
                {
                    aFound = true;
                    count++;
                }
                break;
            case 'b':
            case 'B':
                if(bFound == false)
                {
                    bFound = true;
                    count++;
                }
                break;
            case 'c':
            case 'C':
                if(cFound == false)
                {
                    cFound = true;
                    count++;
                }
                break;
            case 'd':
            case 'D':
                if(dFound == false)
                {
                    dFound = true;
                    count++;
                }
                break;
            case 'e':
            case 'E':
                if(eFound == false)
                {
                    eFound = true;
                    count++;
                }
                break;
            case 'f':
            case 'F':
                if(fFound == false)
                {
                    fFound = true;
                    count++;
                }
                break;
            case 'g':
            case 'G':
                if(gFound == false)
                {
                    gFound = true;
                    count++;
                }
                break;
            case 'h':
            case 'H':
                if(hFound == false)
                {
                    hFound = true;
                    count++;
                }
                break;
            case 'i':
            case 'I':
                if(iFound == false)
                {
                    iFound = true;
                    count++;
                }
                break;
            case 'j':
            case 'J':
                if(jFound == false)
                {
                    jFound = true;
                    count++;
                }
                break;
            case 'k':
            case 'K':
                if(kFound == false)
                {
                    kFound = true;
                    count++;
                }
                break;
            case 'l':
            case 'L':
                if(lFound == false)
                {
                    lFound = true;
                    count++;
                }
                break;
            case 'm':
            case 'M':
                if(mFound == false)
                {
                    mFound = true;
                    count++;
                }
                break;
            case 'n':
            case 'N':
                if(nFound == false)
                {
                    nFound = true;
                    count++;
                }
                break;
            case 'o':
            case 'O':
                if(oFound == false)
                {
                    oFound = true;
                    count++;
                }
                break;
            case 'p':
            case 'P':
                if(pFound == false)
                {
                    pFound = true;
                    count++;
                }
                break;
            case 'q':
            case 'Q':
                if(qFound == false)
                {
                    qFound = true;
                    count++;
                }
                break;
            case 'r':
            case 'R':
                if(rFound == false)
                {
                    rFound = true;
                    count++;
                }
                break;
            case 's':
            case 'S':
                if(sFound == false)
                {
                    sFound = true;
                    count++;
                }
                break;
            case 't':
            case 'T':
                if(tFound == false)
                {
                    tFound = true;
                    count++;
                }
                break;
            case 'u':
            case 'U':
                if(uFound == false)
                {
                    uFound = true;
                    count++;
                }
                break;
            case 'v':
            case 'V':
                if(vFound == false)
                {
                    vFound = true;
                    count++;
                }
                break;
            case 'w':
            case 'W':
                if(wFound == false)
                {
                    wFound = true;
                    count++;
                }
                break;
            case 'x':
            case 'X':
                if(xFound == false)
                {
                    xFound = true;
                    count++;
                }
                break;
            case 'y':
            case 'Y':
                if(yFound == false)
                {
                    yFound = true;
                    count++;
                }
                break;
            case 'z':
            case 'Z':
                if(zFound == false)
                {
                    zFound = true;
                    count++;
                }
                break;
            default:
                break;
        }
    }
        if(count == 26)
            return "pangram";
        return "not pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
