
/* Usuario: luis11122
   Lenguaje: C++ 
*/
#include<iostream>
#include <vector>
using namespace std;
int main()
{
    int numPalabras;
    int numReglas;
    vector<string> palabras;
    vector<string> reglas;
    vector<string> respuesta;
    vector<string> respuestaAux;
    string palabra;
    string regla;
    while(cin>>numPalabras)
    {

        palabras.reserve(numPalabras);
        for(int i = 0; i < numPalabras; i++)
        {
            cin>>palabra;
            palabras.push_back(palabra);
        }

        cin>>numReglas;
        reglas.reserve(numReglas);
        for(int i = 0; i < numReglas; i++)
        {
            cin>>regla;
            reglas.push_back(regla);
        }
        for(int i = 0; i < numReglas; i++)
        {
            regla = reglas[i];

            for(int j = 0 ; j < regla.size(); j++)
            {
                if(regla.c_str()[j]=='#' && j == 0)
                {
                    for(int k = 0; k < palabras.size(); k++)
                    {
                        respuesta.push_back(palabras[k]);
                    }
                }
                if(regla.c_str()[j]=='0' && j == 0)
                {
                    for(char k = '0'; k <= '9'; k++)
                    {
                        string s(1, k);
                        respuesta.push_back(s);
                    }
                }
                if(regla.c_str()[j]=='#' && j !=0)
                {
                    for(int l = 0; l <  respuesta.size(); l++)
                    {
                        for(int k = 0; k < palabras.size(); k++)
                        {
                            respuestaAux.push_back(respuesta[l] + palabras[k]);
                        }
                    }
                    respuesta = respuestaAux;
                    respuestaAux.clear();
                }
                if(regla.c_str()[j]=='0' && j !=0)
                {
                    for(int l = 0; l <  respuesta.size(); l++)
                    {
                        for(char k = '0'; k <= '9'; k++)
                        {
                            string s(1, k);
                            respuestaAux.push_back(respuesta[l] + k);
                        }
                    }
                    respuesta = respuestaAux;
                    respuestaAux.clear();
                }
            }
        }
        cout<<"--"<<endl;
        for(int i = 0 ; i < respuesta.size(); i++)
        {
            cout<<""+respuesta[i]<<endl;

        }
        palabras.clear();
        reglas.clear();
        respuesta.clear();
        respuestaAux.clear();
    }
    return 0;
}
