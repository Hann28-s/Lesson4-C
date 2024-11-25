#include <stdio.h> 
  int main() {
  	int day, month, year;
  	
	printf("Nhap ngay: ") ;
	scanf("%d", &day) ;
	
	printf("Nhap thang: ") ;
	scanf("%d", &month) ;
	
	printf("Nhap nam: ") ;
	scanf("%d", &year) ;
	
	if (month<1 || month>12) {
		printf("Thang khong dung \n") ;
	} else {	
	   int Days;
      }
     }
     
	if (month==2) {
    //Nam nhuan chia het cho 400,  hoac nam nhuan chia het cho 4 va khong chia het cho 100 
	  if ( (year%400==0) || (year%4==0) && (year%100!=0)) ; {  
		Days = 29 ; 
     } else {
    	Days = 28 ;
    	}
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
	    Days = 30;
     } else {
    	Days = 31;
	 }
	}
	
	 if (day < 1 || day > Days) {	
	   printf("Ngay da nhap hop le\n ");
	   } else {
	   printf("Ngay, thang, nam  nhap hop le\n ") ;
	   }
     }
	 
	 return 0;
	  
}
	   
	   
	   
	
	
 
	    
	
  
   
