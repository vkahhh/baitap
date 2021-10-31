#include <stdio.h>
#include <math.h>


int DaoNguoc(int n){ 
  int soDao = 0; 
  while (n > 0) {
    soDao = soDao * 10 + n % 10;
    n /= 10;
  }
  return soDao;
}

int main(void) {
    
    int n;
    printf("Nhap so n: ");
    scanf("%d",&n);

    if(n <0) printf("Nhap lai.\n");
    
    else {
    int a = DaoNguoc(n);
    printf("%d, so dao nguoc la %d\n", n, a);
    if(a == n)
    {
        printf("So nay la so doi xung\n");
    } else
    {
        printf("So nay khong doi xung\n");
    }

    }
    return 0;
}
