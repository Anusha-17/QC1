#include<stdio.h>
//Bit size is 8(4*2)
#define BITS sizeof(int)*2
//To set a bit on particular position
#define bitset(byte,nbit)   ((byte) |=  (1<<(nbit)))
//To clear a bit on particular position
#define bitclear(byte,nbit) ((byte) &= ~(1<<(nbit)))
//To toggle a bit on particular position
#define bittoggle(byte,nbit) (byte ^ (1<<nbit));
//
#define LSBcheck(byte) (byte & 1) 
#define MSBcheck(byte) (byte & (1 >> (BITS - 1)))
#define bitget(byte,nbit) ((byte << nbit) & 1)
#define evenodd(byte) (byte & 1)
#define flipbit(byte)  (~byte)
#define swap(num1,num2) num1 ^=num2;\
	                num2 ^=num1;\
	                num1 ^=num2;
#define countzerosandones(byte) zeros=0;\
	                        ones=0;\
	                        for(i=0;i<BITS;i++)\
	                        {\
		                if(byte & 1)\
			           ones++;\
		                else\
			          zeros++;\
			        byte >>=1;\
			         }
#define decimaltobinary(byte) i;\
	                      for(i=BITS-1;i>=0;i--)\
	                      {\
		              int k = byte >> i;\
		              if(k & 1)\
			         printf("1");\
		              else\
			         printf("0");\
	                      }
#define highestorderofset(byte) i,order=-1;\
                                for(i=0;i<BITS;i++)\
	                        {\
		                if((byte>i) & 1)\
			            order = i;\
	                        }
#define lowestorderofset(byte) order,i;\
	                       order = BITS - 1;\
	                       for(i=0;i<BITS;i++)\
	                       {\
		               if((byte>>i) & 1)\
		               {\
			          order = i;\
			          break;\
		               }\
	                      }
#define trailingzeros(byte) count=0,i;\
	                     for(i=0;i<BITS;i++)\
	                     {\
		              if(byte&1)\
			         break;\
		              else\
		             {\
			        count++;\
			        byte=byte>>1;\
		             }\
	                     }	\
	                     if(count!=-1)\
		                   printf("Tralling Zeros are : %d\n\n",count);\
	                     else\
		                   printf("All bits are set\n\n");  
		                 
#define leadingzeros(byte) count=0,i,msb; \
	                    msb=1<<(BITS-1);\
	                    for(i=0;i<BITS;i++)\
	                    {\
		            if((byte<<i)&msb)\
		            {\
			       break;\
		            }\
		            count++;\
	                    }\
	                    if(count!=-1)\
		                   printf("Leading Zeros are : %d\n",count);\
	                    else\
				    printf("All bits are set\n");
		                                   	                      	
void main()
{
	int byte,nbit;
	
	printf("Enter number:");
	scanf("%d",&byte);

	printf("Enter position:");
	scanf("%d",&nbit);

	bitset(byte,nbit);
	printf("Set bit is %d\n\n",byte);

	bitclear(byte,nbit);
        printf("Clear bit is %d\n\n",byte);

	bittoggle(byte,nbit);
        printf("Toggle bit is %d\n",byte);
	
        LSBcheck(byte)?printf("%d is set\n\n",byte):printf("%d not set\n\n",byte);
	MSBcheck(byte)?printf("%d is set\n\n",byte):printf("%d not set\n\n",byte);

	bitget(byte,nbit)?printf("The %d bit is set\n\n",nbit):printf("%d is not set\n\n",nbit);

	evenodd(byte)?printf("Number is odd\n\n"):printf("Number is Even\n\n");
	
	flipbit(byte);
	printf("Number after flipping the bits : %d\n",byte);
	
	int num1,num2;
	printf("Enter two numbers to swap :\n");
	scanf("%d %d",&num1,&num2);
	printf("Original numbers before swapping num: %d and num2: %d\n",num1,num2);
	swap(num1,num2);
	printf("After swapping num: %d and num2: %d\n\n",num1,num2);
	
	int ones,zeros,i;
	countzerosandones(byte);
	printf("Total zero bits : %d and one bits :%d\n",zeros,ones);
	
	decimaltobinary(byte);
	printf("\n\n");
	
	int order;
	highestorderofset(byte);
	if(order != -1)
		printf("Highest order set bit in %d is %d\n\n",byte,order);
	else
		printf("0 has no set bits\n\n");
	
	lowestorderofset(byte);
	printf("Lowest order set bit in %d is %d\n\n",byte,order);
	
	int count=0;
	trailingzeros(byte);
	
	int msb;
	leadingzeros(byte);
        

}
