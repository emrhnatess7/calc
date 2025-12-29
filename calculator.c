#include <stdio.h>
#include <math.h>

int toplama(int *x1, int *x2){
	printf("Lütfen 1. sayıyı girin: ");
	scanf("%d", x1);
	printf("Lütfen 2. sayıyı girin: ");
	scanf("%d", x2);
	return *x1 + *x2;
}

int cikarma(int *x1, int *x2){
		printf("Lütfen 1. sayıyı girin: ");
	scanf("%d", x1);
	printf("Lütfen 2. sayıyı girin: ");
	scanf("%d", x2);
	return *x1 - *x2;
}



int faktoriyel(int sayi){
	if (sayi == 0 || sayi == 1){
		return 1;
	} else {
		return sayi * faktoriyel(sayi-1);
	}
}

int main(void){
	FILE *veri;

	if ((veri = fopen("log.txt", "a")) == NULL){
		printf("Dosya açılamadı/arızalı!");
	} else {
		char isim[30];
		printf("Lütfen adınızı girin: ");
		scanf("%29s", isim);
			int x, sayi1, sayi2;
			double sayi0, sayi3;
	printf("============= Hesap Makinesi =============\n\n");
	printf("===== Dört İşlem =====\n\n");
	printf("1-) Toplama işlemi ");
	printf("//// 2-) Çıkarma işlemi\n");
	printf("3-) Çarpma işlemi ");
	printf("//// 4-) Bölme işlemi\n\n");
	printf("===== Üstel/Logaritmik İşlemler =====\n\n");
	printf("13-) e^x fonksiyonu ");
	printf("//// 19-) lnx fonksiyonu (loge^x fonksiyonu)\n");
	printf("      20-) logx fonksiyonu (veya log10^x fonksiyonu)\n\n");
	printf("===== Trigonometrik Fonksiyonlar (rad cinsinden)=====\n\n");
	printf("15-) sinx Fonksiyonu ");
	printf("//// 16-) cosx Fonksiyonu\n");
	printf("17-) tanx Fonksiyonu ");
	printf("//// 18-) cotx Fonksiyonu\n\n");
	printf("===== Diğer İşlemler =====\n\n");
	printf("5-) 1/x Fonksiyonu ");
	printf("//// 6-) Küp fonksiyonu\n");
	printf("7-) Bölünebirliği sorgula ");
	printf("//// 8-) Asal sayı durumunu sorgula\n");
	printf("9-) Faktöriyel hesapla ");
	printf("//// 10-) Tek-Çift durumunu sorgula\n");
	printf("11-) Karekök hesapla ");
	printf("//// 12-) Küpkök hesapla\n");
	printf("14-) Sayıyı en yakın değerine yuvarla\n");
	printf("21-) Sayının karesini alma ");
	printf("//// 22-) Kuvvet Fonksiyonu\n\n");
	printf("0-) Çıkış");
	printf("\n\n Bir sayi tuslayin: ");
	scanf("%d", &x);
		if (x < 0 || x>22){
		printf("Hatali tus girdiniz. Lutfen 1 ile 20 arasinda sayi girin!");
	} else {
			switch(x){
		case 0: // çıkış
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\n ~~~~ Uygulamadan basarili bir sekilde cikis yaptiniz! ~~~~ \n");
			fprintf(veri, "%s adlı kullanıcı çıkış yaptı.\n", isim);
			fclose(veri);
			break;
			return 0;
		case 1: // toplama
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("~~~~~ Toplama İşlemi ~~~~~\n");
		printf("İşlev: Girilen 2 sayıyı toplar.\n\n");
			printf("%d + %d işleminin sonucu = %d", sayi1, sayi2, toplama(&sayi1, &sayi2));
			fprintf(veri, "%s adlı kullanıcı %d+%d işlemini yaptı!\n", isim, sayi1, sayi2);
			fclose(veri);
			break;
			return 0;
		case 2: // çıkarma
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("~~~~~ Çıkarma İşlemi ~~~~~\n");
		printf("İşlev: Girilen 2 sayıyı birbirinden çıkarır.\n");
		printf("%d - %d işleminin sonucu = %d", sayi1, sayi2, cikarma(&sayi1, &sayi2));
			fprintf(veri, "%s adlı kullanıcı %d-%d işlemini yaptı!\n", isim, sayi1, sayi2);
			fclose(veri);
			break;
			return 0;
		case 3: // çarpma
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("~~~~~ Çarpma İşlemi ~~~~~\n");
		printf("İşlev: Girilen iki sayıyı birbiriyle çarpar.\n\n");
		printf("Lutfen 1. sayiyi girin: ");
		scanf("%d", &sayi1);
		printf("2. sayiyi girin: ");
		scanf("%d", &sayi2);
		printf("%d x %d isleminin sonucu = %d", sayi1, sayi2, sayi1*sayi2);
		fprintf(veri, "%s adlı kullanıcı %dx%d işlemini yaptı!\n", isim, sayi1, sayi2);
		fclose(veri);
		break;
		return 0;
		case 4: // bölme
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("~~~~~ Bölme İşlemi ~~~~~\n");
		printf("İşlev: Girilen iki sayıyı birbirine böler. Kullanım şekli x/y şeklindedir.\n\n");
		printf("Lutfen 1. sayiyi girin: ");
		scanf("%d", &sayi1);
		printf("2. sayiyi girin: ");
		scanf("%d", &sayi2);
		if (sayi2 == 0){
			printf("Bölüm 0 olamaz!!!");
		} else {
					printf("%d / %d isleminin sonucu = %d", sayi1, sayi2, sayi1/sayi2);
		fprintf(veri, "%s adlı kullanıcı %d/%d işlemini yaptı!\n", isim, sayi1, sayi2);
		fclose(veri);
		}
		break;
		return 0;
		case 5: // 1/x fonk
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("~~~~~ Sayının Çarpma İşlemine Göre Tersini Alma (1/x) ~~~~~\n");
		printf("İşlev: Sayının çarpma işlemine göre tersini alır. Kullanım: 1/x\n\n");
		printf("Lutfen bir sayi girin: ");
		scanf("%d", &sayi1);
		printf("Girdiginiz sayinin carpma islemine gore tersi: %.2f", (float)1/sayi1);
		fprintf(veri, "%s adlı kullanıcı 1/%d işlemini yaptı!\n", isim, sayi1);
		fclose(veri);
		break;
		return 0;
		case 6: // küp fonk
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("~~~~~ Küp Alma ~~~~~\n");
			printf("İşlev: Girilen sayının küpünü alır. Kullanım: x^3\n\n");
			printf("Lutfen kupunu almak istediginiz sayiyi girin: ");
			scanf("%d", &sayi1);
			printf("%d sayisinin kupu: %d", sayi1, sayi1*sayi1*sayi1);
			fprintf(veri, "%s adlı kullanıcı %d sayısının kübünü aldı!\n", isim, sayi1);
			fclose(veri);
			break;
			return 0;
		case 7: // bölünebilirlik durumu
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("~~~~~ Bölünebilirliği Kontrol Etme~~~~~\n");
			printf("İşlev: Girilen sayının bir diğer sayıya bölünme durumunu kontrol etme.\n\n");
			printf("Bu program, girilen a sayisinin, b sayisina bolumunu kontrol eder!\n\n");
			printf("Lutfen birinci sayiyi girin: ");
			scanf("%d", &sayi1);
			printf("Bolum durumunu kontrol etmek istediginiz sayiyi girin: ");
			scanf("%d", &sayi2);
			if (sayi1 % sayi2 == 0){
				printf("%d sayisi %d sayisina tam bolunmektedir.", sayi1, sayi2);
			} else {
				printf("%d sayisi %d sayisina tam bolunmemektedir. \n Bolumden kalan: %d", sayi1, sayi2, sayi1%sayi2);
			}
			fprintf(veri, "%s adlı kullanıcı %d sayısının %d sayısına bölümünü inceledi.\n", isim, sayi1, sayi2);
			fclose(veri);
			break;
			return 0;
		case 8: // asal sayılar !!!!!
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("~~~~~ Asal Sayı Kontrol ~~~~~\n");
		printf("İşlev: Sayının asal olup olmadığını kontrol eder.\n\n");
		printf("\n\n Lutfen bir sayi girin: ");
		int xdefault;
		scanf("%d", &xdefault);

		if (xdefault <= 1){
			printf("Bu sayı asal değildir!");
		}
		if (xdefault==2 || xdefault == 3){
			printf("Bu sayi asaldir!");
		} else {
				for (int bolum=2; bolum * bolum <=xdefault; bolum++){
						if (xdefault % bolum == 0){
						printf("Bu sayi asal degildir");
						break;
					} else {
						printf("Bu sayi asaldir!");
						break;
					}}}
			fprintf(veri, "%s adlı kullanıcı %d sayısının asallığını kontrol etti!\n", isim, xdefault);
			fclose(veri);
			break;
			return 0;
		case 9: // faktöriyel
		printf("~~~~~ Faktöriyel Alma ~~~~~\n");
		printf("İşlev: Girilen sayının faktöriyelini alır. Kullanım: x!\n\n");
		printf("Lütfen bir sayı girin: ");
		scanf("%d", &sayi1);
		if (sayi1 < 0){
			printf("Faktöriyelde negatif değer hesaplanmaz!");
		} else {
			printf("%d sayısının faktöriyeli için\n\n %d! = %d", sayi1, sayi1, faktoriyel(sayi1));
		}
			fprintf(veri, "%s adlı kullanıcı %d sayısının faktöriyelini hesapladı!\n", isim, sayi1);
			fclose(veri);
			break;
			return 0;
		case 10: //tek-çift
		printf("~~~~~ Tek-Çift Kontrol ~~~~~\n");
		printf("İşlev: Sayının tek veya çift olma durumunu kontrol eder.\n\n");
		printf("Lütfen bir sayı girin: ");
		scanf("%d", &sayi1);
		if (sayi1 % 2 == 0){
			printf("Girdiğiniz %d sayısı ÇİFT sayıdır.", sayi1);
		} else {
			printf("Girdiğiniz %d sayısı TEK sayıdır.", sayi1);
		}
		fprintf(veri, "%s adlı kullanıcı %d sayısnın tek-çift durumunu sorguladı!\n", isim, sayi1);
		fclose(veri);
		break;
		return 0;
		case 11:  // karekök
		printf("~~~~~ Karekök Alma ~~~~~\n");
		printf("İşlev: Girilen sayının karekökünü alır.\n\n");
		printf("Lütfen bir sayı girin: ");
		scanf("%lf", &sayi0);
		if (sayi0 < 0){
			printf("HATA! | Karekökün için 0dan küçük olamaz.");
		} else {
			printf("Girdiğiniz %.2f sayısının karekökü: %.2f", sayi0, sqrt(sayi0));
		}
		fprintf(veri, "%s adlı kullanıcı %.2f sayısının karekökünü aldı.\n", isim, sayi0);
		fclose(veri);
		break;
		return 0;
		case 12: // küpkök
		printf("~~~~~ Küpkök Alma ~~~~~\n");
		printf("İşlev: Girilen sayının küpkökünü alır.\n\n");
		printf("Lütfen bir sayı giriniz: ");
		scanf("%lf", &sayi0);
		printf("Girdiğiniz %.2f sayısının küpkökü: %.2f", sayi0, cbrt(sayi0));
			fprintf(veri, "%s adlı kullanıcı %.2f sayısının küpkökünü aldı!\n", isim, sayi0);
			fclose(veri);
			break;
			return 0;
		case 13: // e^x fonksiyonu
		printf("~~~~~ e^x Fonksiyonu ~~~~~\n");
		printf("İşlev: E sayısının girilen değerin kuvvetini alır.\n\n");
		printf("Lütfen bir sayı girin:");
		scanf("%lf", &sayi0);
		printf("Girdiğiniz %.2f sayısının e^x cinsinden sonucu: %.2f", sayi0, exp(sayi0));
		fprintf(veri, "%s adlı kullanıcı e^%.2f işleminin sonucunu çıkardı.!\n", isim, sayi0);
		fclose(veri);
		break;
		return 0;
		case 14: // yuvarlama
		printf("~~~~~ Sayıyı Yuvarlama ~~~~~\n");
		printf("İşlev: Girilen ondalıklı sayıyı, yakın veya uzak değerine yuvarlar.\n\n");
		printf("Lütfen yuvarlamak istediğiniz sayıyı giriniz:");
		scanf("%lf", &sayi0);
		float ondalik = sayi0 - (int)sayi0;
		if (ondalik >= 0.5){
			printf("Girdiğiniz %.3f sayısının yuvarlatılmış hali: %.3f", sayi0, ceil(sayi0));
		} else if (ondalik < 0.5) {
			printf("Girdiğiniz %.3f sayısının yuvarlatılmış hali: %.3f", sayi0, floor(sayi0));
		}
		fprintf(veri, "\n%s adlı kullanıcı %.4f sayısını en yakın değerine yuvarladı!\n", isim, sayi0);
		fclose(veri);
		break;
		return 0;
		case 15: //Sinüs
		printf("~~~~~ Sinüs Fonksiyonu ~~~~~\n");
		printf("İşlev: Girilen açının (rad) sinüs değerini alır.\n\n");
		printf("Lütfen RADYAN cinsinden, sinüsünü almak istediğiniz açıyı girin: ");
		scanf("%lf", &sayi0);
		printf("sin(%f) = %.3f \n (Girilen açı radyan cinsindedir.)", sayi0, sin(sayi0));
		fprintf(veri, "%s adlı kullanıcı %.3f açısının sinüs değerini aldı!\n", isim, sayi0);
		fclose(veri);
		break;
		return 0;
		case 16: // Kosinüs
		printf("~~~~~ Kosinüs Fonksiyonu ~~~~~\n");
		printf("İşlev: Girilen açının (rad) kosinüs değerini alır.\n\n");
		printf("Lütfen RADYAN cinsinden, kosinüsünü almak istediğiniz açıyı girin: ");
		scanf("%lf", &sayi0);
		printf("cos(%f) = %.3f \n (Girilen açı radyan cinsindedir.)", sayi0, cos(sayi0));
		fprintf(veri, "%s adlı kullanıcı %.3f açısının kosinüsünü aldı!\n", isim, sayi0);
		fclose(veri);
		break;
		return 0;
		case 17: // TANJANT
		printf("~~~~~ Tanjant Fonksiyonu ~~~~~\n");
		printf("İşlev: Girilen açının (rad) tanjant değerini alır.\n\n");
		printf("Lütfen RADYAN cinsinden, tanjantını almak istediğiniz açıyı girin: ");
		scanf("%lf", &sayi0);
		printf("tan(%f) = %.3f \n (Girilen açı radyan cinsindedir.)", sayi0, tan(sayi0));
		fprintf(veri, "%s adlı %.3f açısının tanjantını aldı!\n", isim, sayi0);
		fclose(veri);
		break;
		return 0;
		case 18: // kotanjant
		printf("~~~~~ Kotanjant Fonksiyonu ~~~~~\n");
		printf("İşlev: Girilen açının (rad) kotanjantını alır.\n\n");
		printf("Lütfen RADYAN cinsinden, kotanjantını almak istediğiniz açıyı girin: ");
		scanf("%lf", &sayi0);
		printf("cot(%f) = %.3f \n (Girilen açı radyan cinsindedir.)", sayi0, (1/tan(sayi0)));
		fprintf(veri, "%s adlı kullanıcı %.3f açısının kotanjant değerini aldı!\n", isim, sayi0);
		fclose(veri);
		break;
		return 0;
		case 19: //lnx veya loge^x fnk
		printf("~~~~~ ln(x) veya loge^x Fonksiyonu ~~~~~\n");
		printf("İşlev: ln e tabanında logaritmasını alır. (loge^x // lnx)\n\n");
		printf("ln e tabanında yazmmak istediğiniz fonksiyonu girin: ");
		scanf("%lf", &sayi0);
		if (sayi0 < 0){
			printf("HATA! | Logaritma içinde vereceğiniz değer negatif olamaz!!");
		} else {
		printf("ln(%.2f) = %.2f", sayi0, log(sayi0));
		}
		fprintf(veri, "%s adlı kullanıcı ln(%.2f) değerini aldı!\n", isim, sayi0);
		fclose(veri);
		break;
		return 0;
		case 20: // log10 tabanı veya logx fonk
		printf("~~~~~ Log10 tabanında veya Log(x) Fonksiyonu ~~~~~\n");
		printf("İşlev: Log10 tabanında veya Log(x) tabanında logaritmik değerini alır.\n\n");
		printf("log10 tabanında yazmmak istediğiniz fonksiyonu girin: ");
		scanf("%lf", &sayi0);
		if (sayi0 < 0){
			printf("HATA! | Logaritma içinde vereceğiniz değer negatif olamaz!!");
		} else {
		printf("log(%.2f) = %.2f", sayi0, log10(sayi0));
		}
		fprintf(veri, "%s adlı kullanıcı log(%.2f) değerini aldı!\n", isim, sayi0);
		fclose(veri);
		break;
		return 0;
		case 21: // Karesini alma
		printf("~~~~~ Kare Alma ~~~~~\n");
		printf("İşlev: Girilen sayının karesini alır.\n\n");
		printf("Lütfen karesini almak istediğiniz sayıyı girin: ");
		scanf("%d", &sayi1);
		printf("%d sayısının karesi: %d", sayi1, sayi1*sayi1);
		fprintf(veri, "%s adlı kullanıcı %d sayısının karesini aldı!", isim, sayi1);
		fclose(veri);
		break;
		return 0;
		case 22: // Kuvvet Fonksiyonu
		printf("~~~~~ Kuvvet Fonksiyonu ~~~~~\n");
		printf("İşlev: Girilen tabanı ve üssün kuvvetini alır.\n\n");
		printf("Lütfen girmek istediğiniz tabanı girin: ");
		scanf("%lf", &sayi0);
		printf("\nLütfen almak istedğiniz üs kuvveti girin: ");
		scanf("%lf", &sayi3);
		printf("\n%d^%d = %d", (int)sayi0, (int)sayi3, (int)pow(sayi0, sayi3));
		fprintf(veri, "%s isimli kullanıcı %d tabanında %d üssünün olduğu kuvvet fonksiyonunu aldı.", isim, (int)sayi0, (int)sayi3);
		fclose(veri);
		break;
		return 0;
		}
	}
	}
}

// emrhna7ess