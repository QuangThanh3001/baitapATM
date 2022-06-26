//
//  main.c
//  vdubaiATM0001
//
//  Created by Nguyen Quang Thanh on 26/06/2022.
//

#include <stdio.h>
int loggin(int name, int pass);
int ruttien(int sotiengoc, int sotienrut);
int menu();
int chuyentien(int id,int sotiengoc, int chuyenkhoan);
int check(int sotiengoc);
int exxit();
int main(int argc, const char * argv[]) {
    int name,luachon,sotiengoc=10000000,sotienrut,id;
    int pass,sodem=0;
    int sotiennguoinhan;
    int chuyenkhoan;
    int quaylai;

    do{
        printf("Moi ban nhap username :");
        scanf("%d",&name);
        
        printf("Nhap password :");
        scanf("%d",&pass);
       
    if (loggin(name, pass)==1) {
        printf("Ban da dang nhap thanh cong\n");
    do{
        menu();
        printf("moi ban lua chon\n");
        scanf("%d",&luachon);
        switch (luachon) {
            case 1:
               sotiengoc = ruttien(sotiengoc, sotienrut);
                break;
            case 2:
                sotiengoc = chuyentien(id, sotiengoc,chuyenkhoan ) ;
                break;
            case 3:
                sotiengoc = check(sotiengoc);
                break;
            case 4:
                exxit();
                return 0;
                break;
                }
                printf("ban cos muon quay lai khong\n");
                printf("an 3 de quay lai :");
                scanf("%d",&quaylai);
    }while(quaylai==3);
            return 0;
            }else{
                sodem++;
                printf("ban dang nhap that bai\n");
            }
            
    }while(sodem<3);
                printf("ban da khoa tai khoan");
    
    return 0;
}
int loggin(int name, int pass){
    if (name==456 && pass==123) {
            return 1;
    }else
            return 0;
}
int menu(){
            printf("1.rut $\n");
            printf("2.chuyenkhoan\n");
            printf("3.check\n");
            printf("4.exit\n");
            return menu;
}
int ruttien(int sotiengoc, int sotienrut){
    do{
            printf("Nhap so tien ban muon rut");
            scanf("%d",&sotienrut);
    if (sotienrut<3000000 && sotienrut/50000) {
           
            sotiengoc=sotiengoc-sotienrut;
            printf("so tien con lai la :%d\n",sotiengoc);
            break;
    }else{
            printf("so tien ban rut qua nho\n");
            printf("Moi ban nhap lai");
        }
    }while(1);
   
            return sotiengoc;
}
int chuyentien(int id,int sotiengoc, int chuyenkhoan){
int id_nguoinhan;
int sotiennguoinhan=90000;
    
            printf("Nhap id\n ");
            scanf("%d",&id_nguoinhan);
            printf("Hoang\n");
            printf("Nhap so tien can chuyen :");
            scanf("%d",&chuyenkhoan);
    if (chuyenkhoan<sotiengoc) {
        sotiengoc=sotiengoc-chuyenkhoan;
            printf("so du cua ban la %d\n",sotiengoc);
            sotiennguoinhan=sotiennguoinhan+chuyenkhoan;
            printf("so tien nguoi nhan la :%d\n",sotiennguoinhan);
        
    }else
            printf("Nhap lai so tien muon chuyen\n");
    
            return sotiennguoinhan;
}
int check( int sotiengoc){
;
            printf("so tien hien tai cua ban la %d:\n",sotiengoc);
            return sotiengoc;
}
int exxit(){
            printf("Thoat chuong trinh");
            return 0;
}
