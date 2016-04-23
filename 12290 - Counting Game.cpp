#include<iostream>
using namespace std;

bool regla7(int num)
{
    if(num %7 == 0)
    {
        return true;
    }

    while(num > 0)
    {
        if(num%10 == 7)
        {
            return true;
        }
        num = num/10;
    }
    return false;
}

int main()
{
    int n_numPersonas;
    int m_persona;
    int k_cantidad;
    int contadorDeGritos = 0;
    int grito = 1;
    int persona = 1;
    int direccion = 1; //1 derecha, 0 izquierda


    cin>>n_numPersonas>>m_persona>>k_cantidad;
    while(n_numPersonas != 0 && m_persona != 0 && k_cantidad != 0)
    {
        contadorDeGritos = 0;
        grito = 1;
        persona = 1;
        direccion = 1;
        while(contadorDeGritos < k_cantidad)
        {
            //cout<<" PERSONA: "<<persona<<" GRITO: "<<grito<<endl;
            if(regla7(grito)==true && persona == m_persona)
            {
                contadorDeGritos++;
            }

            if(persona == 1 && direccion == 0 || persona == n_numPersonas && direccion == 1)
            {
                if(direccion == 0)
                {
                    grito++;
                    persona++;
                    direccion = 1;
                }
                else
                {
                    grito++;
                    persona--;
                    direccion = 0;
                }
            }
            else
            {
                if(direccion == 1)
                {
                    grito++;
                    persona++;
                }
                else
                {
                    grito++;
                    persona--;
                }
            }
        }
        cout<<grito-1<<endl;
        cin>>n_numPersonas>>m_persona>>k_cantidad;
    }

    return 0;
}
