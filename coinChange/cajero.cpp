#include "cajero.h"

cajero::cajero(int a, int b, int c, int d) //cuantas monedas de cada una tiene el cajero
{
    coin_counts = { a, b, c, d };
}

//GREEDY APROACH
vector<int> cajero::check(int a, int b) //a=costo b=billete
{
    int cambio = b - a;
    vector<int> change_to_give(coin_values.size(), 0);

    for (int i = 0; i < coin_values.size(); i++) {
        while (cambio >= coin_values[i] && coin_counts[i] > 0) { //mientras haya monedas, tambien.
            cambio -= coin_values[i];
            coin_counts[i]--;
            change_to_give[i]++;
        }
    }

    if (cambio > 0) { //se va restando el cambio RESTANTE. si no es 0, quiere decir que falto cambio a dar.
        // Handle the case where it's not possible to give the full change
        cout << "No hay suficiente cambio.\nle debo: " << cambio << " peso(s)." << endl;;
    }

    printer(change_to_give);
    return change_to_give;
}


void cajero::printer(vector<int> a)
{
    cout << "\nMonedas de cambio: " << endl;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > 0) {
            cout << a[i] << " de " << coin_values[i] << endl;
        }
    }
    
}

