#include <stdio.h>
int main() {
    //B1: Khai bao mang so nguy�n gom 5 phan tu
    int numbers[5];
    //B2: Su dung vong for nhap gia tri cac phan tu cua mang 
    for (int i = 0; i < 5; i++) {
      printf("numbers[%d]=",i);
      scanf("%d", &numbers[i]);
  }
    //B3: Su dung vong for duyet cac phan tu v� in ra man hinh console         
    printf("Gia tri cac phan tu trong mang:\n");

    for (int = 0; i < 5; i++){ 
      printf("%d\t", numbers[i]);
    }
}
