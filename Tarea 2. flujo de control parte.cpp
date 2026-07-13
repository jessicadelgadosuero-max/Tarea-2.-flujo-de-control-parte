#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double sueldoMensual, sueldoAnual;
    double isrAnual = 0.0, isrMensual = 0.0;

    cout << "Digite el sueldo mensual del empleado: RD$ ";
    cin >> sueldoMensual;

    sueldoAnual = sueldoMensual * 12;


    if (sueldoAnual <= 416220.00)
    {
        isrAnual = 0.0;
    }
    else if (sueldoAnual <= 624329.00)

    {
        isrAnual = (sueldoAnual - 416220.00) * 0.15;
    }
    else if (sueldoAnual <= 867123.00)
    {
        isrAnual = 31216.00 + (sueldoAnual - 624329.00) * 0.20;
    }
    else
    {
        isrAnual = 79776.00 + (sueldoAnual - 867123.00) * 0.25;
    }

    isrMensual = isrAnual / 12;

    cout << fixed << setprecision(2);

    cout << "sueldo mensual; RD$ " << sueldoMensual << endl;

    if (isrMensual == 0)
    {
        cout << "Descuento ISR mensual: RD$ 0.00 (N/A)" << endl;
    }
    else
    {
        cout << "Descuento ISR mensual: RD$ " << isrMensual << endl;
    }

}