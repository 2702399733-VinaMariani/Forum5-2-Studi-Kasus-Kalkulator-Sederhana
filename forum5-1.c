/*
    Nama : Vina Mariani Butarbutar
    Nim  : 2702399733
*/
#include <stdio.h>
#include <math.h> //
int main()
{
    int operand1 = 10;  //Variabel pertama
    double operand2 = 5.4; //Variabel kedua

    //Operasi aritmatika menggunakan operator
    double hasilPenambahan = operand1 + operand2;
    double hasilPengurangan = operand1 - operand2;
    double hasilPerkalian = operand1 *  operand2;
    double hasilPembagian = operand1 /  operand2;
    int hasilModulus = operand1 % (int) operand2;
    double hasilModulusFloat = fmod(operand1, operand2); // menggunakan fmod untuk mendapatkan sisa pembagian float

    // int hasilPenambahan = operand1 + operand2;
    // int hasilPengurangan = operand1 - operand2;
    // int hasilPerkalian = operand1 *  operand2;
    // int hasilPembagian = operand1 /  operand2;
    // int hasilModulus = operand1 % operand2;

    //Menampilkan hasil operasi aritmatika
    printf("Hasil Penambahan: %f\n", hasilPenambahan);
    printf("Hasil Pengurangan: %f\n", hasilPengurangan);
    printf("Hasil Perkalian: %f\n", hasilPerkalian);
    printf("Hasil Pembagian: %f\n", hasilPembagian);
    printf("Hasil Modulus: %d\n", hasilModulus);
    printf("Hasil Modulus Float: %f\n", hasilModulusFloat);

    // printf("Hasil Penambahan: %d\n", hasilPenambahan);
    // printf("Hasil Pengurangan: %d\n", hasilPengurangan);
    // printf("Hasil Perkalian: %d\n", hasilPerkalian);
    // printf("Hasil Pembagian: %d\n", hasilPembagian);
    // printf("Hasil Modulus: %d\n", hasilModulus);

    return 0;
}