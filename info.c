#include<stdio.h>
 
  void main()
  {
  	int choice,k,l,o,p,j,n,d,c;
  	
  	printf(" \nPLZ ENTER YOUR FAVOURITE COMPANY\n ");
  	
  	printf("1. TATA\n ");
  	printf("2. HYUNDAI\n ");
  	printf("3. MAHINDRA\n ");
  	scanf("%d", &choice);
  	
  	 switch (choice) {
            case 1:
                printf("\nSELECT RANGE $\n");
                printf("1. 200000\n");
                printf("2. 300000\n");
                printf("3. 400000\n");
                printf("ENTER RANGE $: ");
                scanf("%d", &c);
                
		                switch (c) {
		                    case 1:
		                        printf("\n 1.TATA HARIER  : ");
		                        printf("\n 2.TATA TIAGO  : ");
		                        printf("\n 3.TATA TAGOR  : ");
		                        scanf("%d", &j);
		                        
			                         switch (j){
			                         	case 1:
			                         		printf("  THANK YOU  ");
			                         	break; 
			                         	 
			                         	default:
		               						 printf("ENTER VALID MODAL NAME .\n");
		               				    break;
									 }
		                }
		                break;
                
            case 2:
                printf("\nSELECT RANGE $\n");
                printf("1. 100000\n");
                printf("2. 150000\n");
                printf("3. 200000\n");
                printf("ENTER RANGE $: ");
                scanf("%d", &o);
                
		                switch (o) {
		                    case 1:
		                        printf("\n 1. I10  : ");
		                        printf("\n 2. I20  : ");
		                        printf("\n 3. SPORTS  : ");
		                        scanf("%d", &k);
		                        
			                         switch (k){
			                         	case 1:
			                         		printf("  THANK YOU  ");
			                         	break; 
			                         	 
			                         	default:
		               						 printf("ENTER VALID MODAL NAME .\n");
		               						 break;
									 }
		                }
		                break;
                
            case 3:
                printf("\nSELECT RANGE $\n");
                printf("1. 300000\n");
                printf("2. 500000\n");
                printf("3. 700000\n");
                printf("ENTER RANGE $: ");
                scanf("%d", &p); 
                
		                switch (p) {
		                    case 1:
		                        printf("\n 1.SCORPIO  : ");
		                        printf("\n 2.THAR   : ");
		                        printf("\n 3.XUV  : ");
		                        scanf("%d", &l);
		                        
			                         switch (l){
			                         	case 1:
			                         		printf("  THANK YOU  ");
			                         	break; 
			                         	 
			                         	default:
		               						 printf("ENTER VALID MODAL NAME .\n");
		               						 break;
		               						 
									 }
		                }
		                break;
                
            default:
                printf("ENTER VALID COMPANY NAME .\n");
            break;
        
    }
    
  	
  	
  	
  	
  	
  	
  	
  	
  	
  }
