#include <iostream>
using namespace std;
#include <vector>
int main() 
{
    int n, i;
    string nazmin, nomin, nazmax, nomax;
    float min, max, somma, t;
    cout << "quanti atleti ci sono?" << endl;
    cin>>n;
    vector<string>nomi(n);
    vector<string>nazionali(n);
    vector<float>tempi(n);
    i=0;
    min=0;
    max= 0; 
    somma = 0;
    while (i<n)
    {
        cout << "come si chiama l'atleta" <<endl;
        cin >> nomi[i];
        cout << "quale nazionale rappresenta" << endl;
        cin >> nazionali[i];
        cout << "qual è il suo tempo?" << endl;
        cin >> tempi[i];
        if ( tempi[min]<tempi[i])
        {

        }
        else
        {
            tempi[min] = tempi[i];
            nazmin = nazionali[i];
            nomin = nomi[i];
        }
        if (tempi[i]>tempi[max])
        {
            tempi[max]=tempi[i];
            nazmax = nazionali[i];
            nomax = nomi[i];
        }
        somma = somma + tempi[i];
        i = i+1;
    }
    i=0;
    cout << "il tempo piu basso è di " << nomin << ", della nazione " << nazmin << " e con un tempo di " << tempi[min] << "secondi." << endl;
    cout << "il tempo piu alto è di " << nomax << ", della nazione " << nazmax << " e con un tempo di " << tempi[max] << "secondi." << endl;
    cout << "la media di tutti i tempi è di " << somma/n << " secondi." << endl;
    while (i<n)
    {
        if (tempi[i]<= (somma/n))
        {
            if (tempi[i]=(somma/n))
            {
                cout << "l'atleta " << nomi[i] << " rappresenta la nazione " << nazionali[i] << " e ha un tempo di " << tempi[i] << "secondi, uguale alla media." << endl;
            }
            else
            {
                cout << "l'atleta " << nomi[i] << " rappresenta la nazione " << nazionali[i] << " e ha un tempo di " << tempi[i] << "secondi, inferiore alla media." << endl;
            }
        }
        else
        {
            cout << "l'atleta " << nomi[i] << " rappresenta la nazione " << nazionali[i] << endl;
        }
        i=i+1;

    }
    cout << "inserire un valore a piacere" << endl;
    cin >> t;
    i=0;
    while (i<n)
    {
        if(tempi[i]<=t)
        {
            if(tempi[i]=t)
            {
                cout << "l'atleta " << nomi[i] << " rappresenta la nazione " << nazionali[i] << " e ha un tempo di " << tempi[i] << "secondi, uguale al tempo dato" << endl;
            }
            else
            {
                cout << "l'atleta " << nomi[i] << " rappresenta la nazione " << nazionali[i] << " e ha un tempo di " << tempi[i] << "secondi, inferiore al tempo dato" << endl;
            }
        }
        i=i+1;
    }

}
