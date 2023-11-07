#include <stdio.h>
int main(){
	//Khai bao va khoi tao cac bien canh hinh vuong, chieu dai va chieu rong cua hinh chu nhat, ban kinh hinh tron
	float canhHinhVuong;
	float chieuDaiCn;
	float chieuRongCn;
	float banKinhDuongTron;
	//Khai bao va khoi tao hang so PI
	float PI;
	PI = 3.14;
    //Tinh vi va dien tich hinh vuong 
	float chuViHinhVuong = 4 * canhHinhVuong;
	float dienTichHinhVuong = canhHinhVuong * canhHinhVuong;
	//Tinh vi va dien tich hinh chu nhat
	float chuViHinhChuNhat = 2 * (chieuDaiCn + chieuRongCn);
	float dienTichHinhChuNhat = chieuRongCn * chieuDaiCn;
	//Tinh vi va dien tich hinh tron
	float chuViHinhTron = 2 * PI * banKinhDuongTron;
	float dienTichHinhTron = PI * banKinhDuongTron * banKinhDuongTron;
}
	
	
	
	
