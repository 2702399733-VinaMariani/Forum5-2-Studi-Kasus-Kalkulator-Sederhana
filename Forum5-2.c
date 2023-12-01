/*
    Nama : Vina Mariani Butarbutar
    Nim  : 2702399733
*/
#include<stdio.h>

// Fungsi untuk menghitung hasil ekspresi
float calculate(float num1, float num2, float num3, char operator1,char operator2, int tahapOperasi) 
{
    float result;
    if(tahapOperasi = 1)
    {
        if(operator1 == '*')
        {
            result = num1 * num2;
            if(operator2 == '+')
            {
                result = result + num3;
            }
            else if (operator2 == '-')
            {
                result = result - num3;
            }
            else if (operator2 == '*')
            {
                result = result * num3;
            }
            else if (operator2 == '/')
            {
                result = result / num3;
            }               
        }
        else
        {
            result = num1 / num2;
            if(operator2 == '+')
            {
                result = result + num3;
            }
            else if (operator2 == '-')
            {
                result = result - num3;
            }
            else if (operator2 == '*')
            {
                result = result * num3;
            }
            else if (operator2 == '/')
            {
                result = result / num3;
            }               
        }
    }
    if(tahapOperasi = 2)
    {
        if(operator2 == '*')
        {
            result = num2 * num3;
            if(operator1 == '+')
            {
                result =   num1 + result;
            }
            else if (operator1 == '-')
            {
                result =  num1 - result;
            }
            else if (operator1 == '*')
            {
                result = num1 * result;
            }
            else if (operator1 == '/')
            {
                result =  num1 / result;
            }               
        }
        else
        {
           result = num2 / num3;
           if(operator1 == '+')
            {
                result =   num1 + result;
            }
            else if (operator1 == '-')
            {
                result =  num1 - result;
            }
            else if (operator1 == '*')
            {
                result = num1 * result;
            }
            else if (operator1 == '/')
            {
                result =  num1 / result;
            }        
        }
    }
    else
    {
        if(operator1 =='+')
        {
            result = num1 + num2;
            if(operator2 == '+')
            {
                result = result + num3;
            }
            else if (operator2 == '-')
            {
                result = result - num3;
            }
        }
        else
        {
             result = num1 - num2;
            if(operator2 == '+')
            {
                result = result + num3;
            }
            else if (operator2 == '-')
            {
                result = result - num3;
            }

        }
    }
    return result;
}


int main()
{
    float num1, num2,num3, result;
    char operator1, operator2;
    int tahapOperasi; 

    // Meminta  untuk memasukkan ekspresi
    printf("Masukkan ekspresi (contoh: 3 + 4 * 2): ");
    scanf("%f %c %f %c %f", &num1, &operator1, &num2,  &operator2, &num3);

    if (operator1 == '*' || operator1 == '/')
    {
        result = calculate(num1,num2,num3,operator1,operator2,1);
    }
    else if(operator2== '*' || operator1 == '/')
    {
        result = calculate(num1,num2,num3,operator1,operator2,2);
    }
    else
    {
        result = calculate(num1,num2,num3,operator1,operator2,3);
    }
    
    printf("Hasil = %.2f", result);

    return 0;
}