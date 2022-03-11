//
//  main.c
//  Bai tap 3
//
//  Created by Little Chick on 11/03/2022.
//

#include <stdio.h>

int main(void) {
    int Toan;
    int Ly;
    int Hoa;
    int tong;
    int tbc;
    
    printf("Điểm Toán");
    scanf("%d", &Toan);
    
    printf("Điểm Lý");
    scanf("%d", &Ly);
    
    printf("Điểm Hóa");
    scanf("%d", &Hoa);
    
    tong = Toan + Ly + Hoa;
    tbc = (Toan + Ly + Hoa)/3;
    
    printf("Tong %d", tong);
    printf("Trung Bnh %d", tbc);
    
    return 0;
    
}
