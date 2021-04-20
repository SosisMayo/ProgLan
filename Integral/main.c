#include<stdio.h>
#include<math.h>
float fungsi(float x){
    return cos(x);
}

float integral(float batasAwal,float batasAkhir){
    float x,Dx=0.00099,y,hasil=0;
    for(x=batasAwal;x<=batasAkhir;x+=Dx){
        y=fungsi(x);
        hasil+=(y*Dx);
    }
    return hasil;
}

int main()
{
    float awal,akhir;
    printf("Masukkan Batas Awal Integrasi : ");
    scanf("%f",&awal);
    printf("Masukkan Batas Akhir Integrasi : ");
    scanf("%f",&akhir);
    printf("Hasil integralnya = %f",integral(awal,akhir));
return 0;
}
