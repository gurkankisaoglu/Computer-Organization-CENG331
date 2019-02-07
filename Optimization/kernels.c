/********************************************************
 * Kernels to be optimized for the CS:APP Performance Lab
 ********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"
/* 
 * Please fill in the following student struct 
 */
team_t team = {
    "e2171726",              /* Student ID */

    "Gürkan Kısaoğlu",     /* full name */
    "e2171726@ceng.metu.edu.tr",  /* email address */

    "",                   /* leave blank */
    ""                    /* leave blank */
};


/***************
 * CONVOLUTION KERNEL
 ***************/

/******************************************************
 * Your different versions of the convolution functions  go here
 ******************************************************/

/* 
 * naive_conv - The naive baseline version of convolution 
 */
char naive_conv_descr[] = "naive_conv: Naive baseline implementation";
void naive_conv(int dim,int *src, int *ker,int *dst) {
    int i,j,k,l;

    for(i = 0; i < dim-8+1; i++)
        for(j = 0; j < dim-8+1; j++) {
            dst[j*dim+i] = 0;
            for(k = 0; k < 8; k++)
                for(l = 0; l < 8; l++) {
                    dst[j*dim+i] = dst[j*dim+i] +src[(j+l)*dim+(i+k)]*ker[l*dim+k];
                }
        }
            
        
}

/* 
 * convolution - Your current working version of convolution
 * IMPORTANT: This is the version you will be graded on
 */
char convolution_descr[] = "Dot product: Current working version";
void convolution(int dim,int *src, int *ker,int *dst) 
{
    int ker0  = ker[0];
    int ker1  = ker[1];
    int ker2  = ker[2];
    int ker3  = ker[3];
    int ker4  = ker[4];
    int ker5  = ker[5];
    int ker6  = ker[6];
    int ker7  = ker[7];

    ker += dim;
    int ker8  = ker[0];
    int ker9  = ker[1];
    int ker10 = ker[2];
    int ker11 = ker[3];
    int ker12 = ker[4];
    int ker13 = ker[5];
    int ker14 = ker[6];
    int ker15 = ker[7];
    
    ker += dim;
    int ker16 = ker[0];
    int ker17 = ker[1];
    int ker18 = ker[2];
    int ker19 = ker[3];
    int ker20 = ker[4];
    int ker21 = ker[5];
    int ker22 = ker[6];
    int ker23 = ker[7];
    
    ker += dim;
    int ker24 = ker[0];
    int ker25 = ker[1];
    int ker26 = ker[2];
    int ker27 = ker[3];
    int ker28 = ker[4];
    int ker29 = ker[5];
    int ker30 = ker[6];
    int ker31 = ker[7];
    
    ker += dim;
    int ker32 = ker[0];
    int ker33 = ker[1];
    int ker34 = ker[2];
    int ker35 = ker[3];
    int ker36 = ker[4];
    int ker37 = ker[5];
    int ker38 = ker[6];
    int ker39 = ker[7];
    
    ker += dim;
    int ker40 = ker[0];
    int ker41 = ker[1];
    int ker42 = ker[2];
    int ker43 = ker[3];
    int ker44 = ker[4];
    int ker45 = ker[5];
    int ker46 = ker[6];
    int ker47 = ker[7];
    
    ker += dim;
    int ker48 = ker[0];
    int ker49 = ker[1];
    int ker50 = ker[2];
    int ker51 = ker[3];
    int ker52 = ker[4];
    int ker53 = ker[5];
    int ker54 = ker[6];
    int ker55 = ker[7];
    
    ker += dim;
    int ker56 = ker[0];
    int ker57 = ker[1];
    int ker58 = ker[2];
    int ker59 = ker[3];
    int ker60 = ker[4];
    int ker61 = ker[5];
    int ker62 = ker[6];
    int ker63 = ker[7];

    int dimTraverse = dim-7;
    for(int j = 0; j<dimTraverse; j++) {
        int sum0;
        int *srcp2 = src, *dsti = dst;
        for(int i = 0; i<dimTraverse; i++) {
            int *srcp = srcp2;
            
            sum0   = srcp[0]*ker0 ;
            sum0  += srcp[1]*ker1 ;
            sum0  += srcp[2]*ker2 ;
            sum0  += srcp[3]*ker3 ;
            sum0  += srcp[4]*ker4 ;
            sum0  += srcp[5]*ker5 ;
            sum0  += srcp[6]*ker6 ;
            sum0  += srcp[7]*ker7 ;
            srcp += dim;
            sum0  += srcp[0]*ker8 ;
            sum0  += srcp[1]*ker9 ;
            sum0  += srcp[2]*ker10;
            sum0  += srcp[3]*ker11;
            sum0  += srcp[4]*ker12;
            sum0  += srcp[5]*ker13;
            sum0  += srcp[6]*ker14;
            sum0  += srcp[7]*ker15;
            srcp += dim;
            sum0  += srcp[0]*ker16;
            sum0  += srcp[1]*ker17;
            sum0  += srcp[2]*ker18;
            sum0  += srcp[3]*ker19;
            sum0  += srcp[4]*ker20;
            sum0  += srcp[5]*ker21;
            sum0  += srcp[6]*ker22;
            sum0  += srcp[7]*ker23;
            srcp += dim;
            sum0  += srcp[0]*ker24;
            sum0  += srcp[1]*ker25;
            sum0  += srcp[2]*ker26;
            sum0  += srcp[3]*ker27;
            sum0  += srcp[4]*ker28;
            sum0  += srcp[5]*ker29;
            sum0  += srcp[6]*ker30;
            sum0  += srcp[7]*ker31;
            srcp += dim;
            sum0  += srcp[0]*ker32;
            sum0  += srcp[1]*ker33;
            sum0  += srcp[2]*ker34;
            sum0  += srcp[3]*ker35;
            sum0  += srcp[4]*ker36;
            sum0  += srcp[5]*ker37;
            sum0  += srcp[6]*ker38;
            sum0  += srcp[7]*ker39;
            srcp += dim;
            sum0  += srcp[0]*ker40;
            sum0  += srcp[1]*ker41;
            sum0  += srcp[2]*ker42;
            sum0  += srcp[3]*ker43;
            sum0  += srcp[4]*ker44;
            sum0  += srcp[5]*ker45;
            sum0  += srcp[6]*ker46;
            sum0  += srcp[7]*ker47;
            srcp += dim;
            sum0  += srcp[0]*ker48;
            sum0  += srcp[1]*ker49;
            sum0  += srcp[2]*ker50;
            sum0  += srcp[3]*ker51;
            sum0  += srcp[4]*ker52;
            sum0  += srcp[5]*ker53;
            sum0  += srcp[6]*ker54;
            sum0  += srcp[7]*ker55;
            srcp += dim;
            sum0  += srcp[0]*ker56;
            sum0  += srcp[1]*ker57;
            sum0  += srcp[2]*ker58;
            sum0  += srcp[3]*ker59;
            sum0  += srcp[4]*ker60;
            sum0  += srcp[5]*ker61;
            sum0  += srcp[6]*ker62;
            sum0  += srcp[7]*ker63;

            srcp2++;
            *dsti=sum0;
            dsti++;
        }
        dst += dim;
        src += dim;
    }
}

/*********************************************************************
 * register_conv_functions - Register all of your different versions
 *     of the convolution functions  with the driver by calling the
 *     add_conv_function() for each test function. When you run the
 *     driver program, it will test and report the performance of each
 *     registered test function.  
 *********************************************************************/

void register_conv_functions() {
    add_conv_function(&naive_conv, naive_conv_descr);   
    add_conv_function(&convolution, convolution_descr);   
    /* ... Register additional test functions here */
}




/***************
 * MATRIX MULTIP KERNEL
 ***************/

/******************************************************
 * Your different versions of the matrix multiplications  go here
 ******************************************************/

/* 
 * naive_matrix_multiplication - The naive baseline version of matrix multiplication 
 */
char naive_matrix_multiplication_descr[] = "Naive_matrix_multiplication: Naive baseline implementation";
void naive_matrix_multiplication(int dim,int *src, int *src2,int *dst) {
    int i,j,k;

    for(i = 0; i < dim; i++)
        for(j = 0; j < dim; j++) {
            dst[j*dim+i]=0;
            for(k = 0; k < dim; k++){
                dst[j*dim+i] = dst[j*dim+i] + src[j*dim+k]*src2[i+k*dim];            	
            } 
        }    
}

/* 
 * matrix_multiplication - Your current working version of matrix_multiplication
 * IMPORTANT: This is the version you will be graded on
 */


char matrix_multiplication_descr[] = "Matrix multiplications: Current working version";
void matrix_multiplication(int dim,int *src, int *src2,int *dst) 
{
 
	int i, j, k,Aik, Aiki;
	int Aik1,Aik2,Aik3,Aik4,Aik5,Aik6,Aik7;
	int Aik1i,Aik2i,Aik3i,Aik4i,Aik5i,Aik6i,Aik7i;
	

	for(i = 0; i <dim ; i+=2)
		for(k = 0; k < dim; k+=8)
		{
			Aik = src[dim*i+k];
			Aik1 = src[dim*i+k+1];
			Aik2 = src[dim*i+k+2];
			Aik3 = src[dim*i+k+3];
			Aik4 = src[dim*i+k+4];
			Aik5 = src[dim*i+k+5];
			Aik6 = src[dim*i+k+6];
			Aik7 = src[dim*i+k+7];

			Aiki = src[dim*(i+1)+k];
			Aik1i = src[dim*(i+1)+k+1];
			Aik2i = src[dim*(i+1)+k+2];
			Aik3i = src[dim*(i+1)+k+3];
			Aik4i = src[dim*(i+1)+k+4];
			Aik5i = src[dim*(i+1)+k+5];
			Aik6i = src[dim*(i+1)+k+6];
			Aik7i = src[dim*(i+1)+k+7];
			for(j = 0; j < dim; j+=16)
			{
				int t1=dim*k;
				int t2=dim*(k+1);
				int t3=dim*(k+2);
				int t4=dim*(k+3);
				int t5=dim*(k+4);
				int t6=dim*(k+5);
				int t7=dim*(k+6);
				int t8=dim*(k+7);
				int sum0=0,sum0i=0;
				sum0 += Aik * src2[t1+j];
				sum0i += Aiki * src2[t1+j];

				sum0 += Aik1 * src2[t2+j];
				sum0i += Aik1i * src2[t2+j];

				sum0 += Aik2 * src2[t3+j];
				sum0i += Aik2i * src2[t3+j];

				sum0 += Aik3 * src2[t4+j];
				sum0i += Aik3i * src2[t4+j];

				sum0 += Aik4 * src2[t5+j];
				sum0i += Aik4i * src2[t5+j];

				sum0 += Aik5 * src2[t6+j];
				sum0i += Aik5i * src2[t6+j];

				sum0 += Aik6 * src2[t7+j];
				sum0i += Aik6i * src2[t7+j];

				sum0 += Aik7 * src2[t8+j];
				sum0i += Aik7i * src2[t8+j];
				if(k==0) {
					dst[dim*i+j]=0;
					dst[dim*(i+1)+j]=0;					
				}
				dst[dim*i+j] += sum0;
				dst[dim*(i+1)+j] += sum0i;
				sum0i=0,sum0=0;
				sum0 += Aik * src2[t1+j+1];
				sum0i += Aiki * src2[t1+j+1];
				sum0 += Aik1 * src2[t2+j+1];
				sum0i += Aik1i * src2[t2+j+1];
				sum0 += Aik2 * src2[t3+j+1];
				sum0i += Aik2i * src2[t3+j+1];
				sum0 += Aik3 * src2[t4+j+1];
				sum0i += Aik3i * src2[t4+j+1];
				sum0 += Aik4 * src2[t5+j+1];
				sum0i += Aik4i * src2[t5+j+1];
				sum0 += Aik5 * src2[t6+j+1];
				sum0i += Aik5i * src2[t6+j+1];
				sum0 += Aik6 * src2[t7+j+1];
				sum0i += Aik6i * src2[t7+j+1];
				sum0 += Aik7 * src2[t8+j+1];
				sum0i += Aik7i * src2[t8+j+1];
				if(k==0) {
					dst[dim*i+j+1] = 0;
					dst[dim*(i+1)+j+1] = 0;			
				}
				dst[dim*i+j+1] += sum0;
				dst[dim*(i+1)+j+1] += sum0i;
				sum0i=0,sum0=0;
				sum0 += Aik * src2[t1+j+2];
				sum0i += Aiki * src2[t1+j+2];
				sum0 += Aik1 * src2[t2+j+2];
				sum0i += Aik1i * src2[t2+j+2];
				sum0 += Aik2 * src2[t3+j+2];
				sum0i += Aik2i * src2[t3+j+2];
				sum0 += Aik3 * src2[t4+j+2];
				sum0i += Aik3i * src2[t4+j+2];
				sum0 += Aik4 * src2[t5+j+2];
				sum0i += Aik4i * src2[t5+j+2];
				sum0 += Aik5 * src2[t6+j+2];
				sum0i += Aik5i * src2[t6+j+2];
				sum0 += Aik6 * src2[t7+j+2];
				sum0i += Aik6i * src2[t7+j+2];
				sum0 += Aik7 * src2[t8+j+2];
				sum0i += Aik7i * src2[t8+j+2];
				if(k==0) {
					dst[dim*i+j+2] = 0;
					dst[dim*(i+1)+j+2] = 0;			
				}
				dst[dim*i+j+2] += sum0;
				dst[dim*(i+1)+j+2] += sum0i;
				sum0i=0,sum0=0;
				sum0 += Aik * src2[t1+j+3];
				sum0i += Aiki * src2[t1+j+3];
				sum0 += Aik1 * src2[t2+j+3];
				sum0i += Aik1i * src2[t2+j+3];
				sum0 += Aik2 * src2[t3+j+3];
				sum0i += Aik2i * src2[t3+j+3];
				sum0 += Aik3 * src2[t4+j+3];
				sum0i += Aik3i * src2[t4+j+3];
				sum0 += Aik4 * src2[t5+j+3];
				sum0i += Aik4i * src2[t5+j+3];
				sum0 += Aik5 * src2[t6+j+3];
				sum0i += Aik5i * src2[t6+j+3];
				sum0 += Aik6 * src2[t7+j+3];
				sum0i += Aik6i * src2[t7+j+3];
				sum0 += Aik7 * src2[t8+j+3];
				sum0i += Aik7i * src2[t8+j+3];
				if(k==0) {
					dst[dim*i+j+3] = 0;
					dst[dim*(i+1)+j+3] = 0;				
				}
				dst[dim*i+j+3] += sum0;
				dst[dim*(i+1)+j+3] += sum0i;
				sum0i=0,sum0=0;
				sum0 += Aik * src2[t1+j+4];
				sum0i += Aiki * src2[t1+j+4];
				sum0 += Aik1 * src2[t2+j+4];
				sum0i += Aik1i * src2[t2+j+4];
				sum0 += Aik2 * src2[t3+j+4];
				sum0i += Aik2i * src2[t3+j+4];
				sum0 += Aik3 * src2[t4+j+4];
				sum0i += Aik3i * src2[t4+j+4];
				sum0 += Aik4 * src2[t5+j+4];
				sum0i += Aik4i * src2[t5+j+4];
				sum0 += Aik5 * src2[t6+j+4];
				sum0i += Aik5i * src2[t6+j+4];
				sum0 += Aik6 * src2[t7+j+4];
				sum0i += Aik6i * src2[t7+j+4];
				sum0 += Aik7 * src2[t8+j+4];
				sum0i += Aik7i * src2[t8+j+4];
				if(k==0) {
					dst[dim*i+j+4] = 0;
					dst[dim*(i+1)+j+4] = 0;				
				}
				dst[dim*i+j+4] += sum0;
				dst[dim*(i+1)+j+4] += sum0i;
				sum0i=0,sum0=0;
				sum0 += Aik * src2[t1+j+5];
				sum0i += Aiki * src2[t1+j+5];
				sum0 += Aik1 * src2[t2+j+5];
				sum0i += Aik1i * src2[t2+j+5];
				sum0 += Aik2 * src2[t3+j+5];
				sum0i += Aik2i * src2[t3+j+5];
				sum0 += Aik3 * src2[t4+j+5];
				sum0i += Aik3i * src2[t4+j+5];
				sum0 += Aik4 * src2[t5+j+5];
				sum0i += Aik4i * src2[t5+j+5];
				sum0 += Aik5 * src2[t6+j+5];
				sum0i += Aik5i * src2[t6+j+5];
				sum0 += Aik6 * src2[t7+j+5];
				sum0i += Aik6i * src2[t7+j+5];
				sum0 += Aik7 * src2[t8+j+5];
				sum0i += Aik7i * src2[t8+j+5];
				if(k==0) {
					dst[dim*i+j+5] = 0;
					dst[dim*(i+1)+j+5]= 0;				
				}
				dst[dim*i+j+5] += sum0;
				dst[dim*(i+1)+j+5] += sum0i;
				sum0i=0,sum0=0;
				sum0 += Aik * src2[t1+j+6];
				sum0i += Aiki * src2[t1+j+6];
				sum0 += Aik1 * src2[t2+j+6];
				sum0i += Aik1i * src2[t2+j+6];
				sum0 += Aik2 * src2[t3+j+6];
				sum0i += Aik2i * src2[t3+j+6];
				sum0 += Aik3 * src2[t4+j+6];
				sum0i += Aik3i * src2[t4+j+6];
				sum0 += Aik4 * src2[t5+j+6];
				sum0i += Aik4i * src2[t5+j+6];
				sum0 += Aik5 * src2[t6+j+6];
				sum0i += Aik5i * src2[t6+j+6];
				sum0 += Aik6 * src2[t7+j+6];
				sum0i += Aik6i * src2[t7+j+6];
				sum0 += Aik7 * src2[t8+j+6];
				sum0i += Aik7i * src2[t8+j+6];
				if(k==0) {
					dst[dim*i+j+6] = 0;
					dst[dim*(i+1)+j+6] = 0;				
				}
				dst[dim*i+j+6] += sum0;
				dst[dim*(i+1)+j+6] += sum0i;
				sum0i=0,sum0=0;
				sum0 += Aik * src2[t1+j+7];
				sum0i += Aiki * src2[t1+j+7];
				sum0 += Aik1 * src2[t2+j+7];
				sum0i += Aik1i * src2[t2+j+7];
				sum0 += Aik2 * src2[t3+j+7];
				sum0i += Aik2i * src2[t3+j+7];
				sum0 += Aik3 * src2[t4+j+7];
				sum0i += Aik3i * src2[t4+j+7];
				sum0 += Aik4 * src2[t5+j+7];
				sum0i += Aik4i * src2[t5+j+7];
				sum0 += Aik5 * src2[t6+j+7];
				sum0i += Aik5i * src2[t6+j+7];
				sum0 += Aik6 * src2[t7+j+7];
				sum0i += Aik6i * src2[t7+j+7];
				sum0 += Aik7 * src2[t8+j+7];
				sum0i += Aik7i * src2[t8+j+7];
				if(k==0) {
					dst[dim*i+j+7] = 0;
					dst[dim*(i+1)+j+7] = 0;			
				}
				dst[dim*i+j+7] += sum0;
				dst[dim*(i+1)+j+7] += sum0i;
				sum0i=0,sum0=0;
				sum0 += Aik * src2[t1+j+8];
				sum0 += Aik1 * src2[t2+j+8];
				sum0 += Aik2 * src2[t3+j+8];
				sum0 += Aik3 * src2[t4+j+8];
				sum0 += Aik4 * src2[t5+j+8];
				sum0 += Aik5 * src2[t6+j+8];
				sum0 += Aik6 * src2[t7+j+8];
				sum0 += Aik7 * src2[t8+j+8];
				sum0i += Aiki * src2[t1+j+8];
				sum0i += Aik1i * src2[t2+j+8];
				sum0i += Aik2i * src2[t3+j+8];
				sum0i += Aik3i * src2[t4+j+8];
				sum0i += Aik4i * src2[t5+j+8];
				sum0i += Aik5i * src2[t6+j+8];
				sum0i += Aik6i * src2[t7+j+8];
				sum0i += Aik7i * src2[t8+j+8];
				if(k==0) {
					dst[dim*i+j+8] = 0;
					dst[dim*(i+1)+j+8] = 0;					
				}
				dst[dim*i+j+8] += sum0;
				dst[dim*(i+1)+j+8] += sum0i;
				sum0i=0,sum0=0;
				sum0 += Aik * src2[t1+j+9];
				sum0i += Aiki * src2[t1+j+9];
				sum0 += Aik1 * src2[t2+j+9];
				sum0i += Aik1i * src2[t2+j+9];
				sum0 += Aik2 * src2[t3+j+9];
				sum0i += Aik2i * src2[t3+j+9];
				sum0 += Aik3 * src2[t4+j+9];
				sum0i += Aik3i * src2[t4+j+9];
				sum0 += Aik4 * src2[t5+j+9];
				sum0i += Aik4i * src2[t5+j+9];
				sum0 += Aik5 * src2[t6+j+9];
				sum0i += Aik5i * src2[t6+j+9];
				sum0 += Aik6 * src2[t7+j+9];
				sum0i += Aik6i * src2[t7+j+9];
				sum0 += Aik7 * src2[t8+j+9];
				sum0i += Aik7i * src2[t8+j+9];
				if(k==0) {
					dst[dim*i+j+9] = 0;
					dst[dim*(i+1)+j+9] = 0;			
				}
				dst[dim*i+j+9] += sum0;
				dst[dim*(i+1)+j+9] += sum0i;
				sum0i=0,sum0=0;
				sum0 += Aik * src2[t1+j+10];
				sum0i += Aiki * src2[t1+j+10];
				sum0 += Aik1 * src2[t2+j+10];
				sum0i += Aik1i * src2[t2+j+10];
				sum0 += Aik2 * src2[t3+j+10];
				sum0i += Aik2i * src2[t3+j+10];
				sum0 += Aik3 * src2[t4+j+10];
				sum0i += Aik3i * src2[t4+j+10];
				sum0 += Aik4 * src2[t5+j+10];
				sum0i += Aik4i * src2[t5+j+10];
				sum0 += Aik5 * src2[t6+j+10];
				sum0i += Aik5i * src2[t6+j+10];
				sum0 += Aik6 * src2[t7+j+10];
				sum0i += Aik6i * src2[t7+j+10];
				sum0 += Aik7 * src2[t8+j+10];
				sum0i += Aik7i * src2[t8+j+10];
				if(k==0) {
					dst[dim*i+j+10] = 0;
					dst[dim*(i+1)+j+10] = 0;				
				}
				dst[dim*i+j+10] += sum0;
				dst[dim*(i+1)+j+10] += sum0i;
				sum0i=0,sum0=0;
				sum0 += Aik * src2[t1+j+11];
				sum0i += Aiki * src2[t1+j+11];
				sum0 += Aik1 * src2[t2+j+11];
				sum0i += Aik1i * src2[t2+j+11];
				sum0 += Aik2 * src2[t3+j+11];
				sum0i += Aik2i * src2[t3+j+11];
				sum0 += Aik3 * src2[t4+j+11];
				sum0i += Aik3i * src2[t4+j+11];
				sum0 += Aik4 * src2[t5+j+11];
				sum0i += Aik4i * src2[t5+j+11];
				sum0 += Aik5 * src2[t6+j+11];
				sum0i += Aik5i * src2[t6+j+11];
				sum0 += Aik6 * src2[t7+j+11];
				sum0i += Aik6i * src2[t7+j+11];
				sum0 += Aik7 * src2[t8+j+11];
				sum0i += Aik7i * src2[t8+j+11];
				if(k==0) {
					dst[dim*i+j+11] = 0;
					dst[dim*(i+1)+j+11] = 0;					
				}
				dst[dim*i+j+11] += sum0;
				dst[dim*(i+1)+j+11] += sum0i;
				sum0i=0,sum0=0;
				sum0 += Aik * src2[t1+j+12];
				sum0i += Aiki * src2[t1+j+12];
				sum0 += Aik1 * src2[t2+j+12];
				sum0i += Aik1i * src2[t2+j+12];
				sum0 += Aik2 * src2[t3+j+12];
				sum0i += Aik2i * src2[t3+j+12];
				sum0 += Aik3 * src2[t4+j+12];
				sum0i += Aik3i * src2[t4+j+12];
				sum0 += Aik4 * src2[t5+j+12];
				sum0i += Aik4i * src2[t5+j+12];
				sum0 += Aik5 * src2[t6+j+12];
				sum0i += Aik5i * src2[t6+j+12];
				sum0 += Aik6 * src2[t7+j+12];
				sum0i += Aik6i * src2[t7+j+12];
				sum0 += Aik7 * src2[t8+j+12];
				sum0i += Aik7i * src2[t8+j+12];
				if(k==0) {
					dst[dim*i+j+12] = 0;
					dst[dim*(i+1)+j+12] = 0;				
				}
				dst[dim*i+j+12] += sum0;
				dst[dim*(i+1)+j+12] += sum0i;
				sum0i=0,sum0=0;
				sum0 += Aik * src2[t1+j+13];
				sum0i += Aiki * src2[t1+j+13];
				sum0 += Aik1 * src2[t2+j+13];
				sum0i += Aik1i * src2[t2+j+13];
				sum0 += Aik2 * src2[t3+j+13];
				sum0i += Aik2i * src2[t3+j+13];
				sum0 += Aik3 * src2[t4+j+13];
				sum0i += Aik3i * src2[t4+j+13];
				sum0 += Aik4 * src2[t5+j+13];
				sum0i += Aik4i * src2[t5+j+13];
				sum0 += Aik5 * src2[t6+j+13];
				sum0i += Aik5i * src2[t6+j+13];
				sum0 += Aik6 * src2[t7+j+13];
				sum0i += Aik6i * src2[t7+j+13];
				sum0 += Aik7 * src2[t8+j+13];
				sum0i += Aik7i * src2[t8+j+13];
				if(k==0) {
					dst[dim*i+j+13] = 0;
					dst[dim*(i+1)+j+13] = 0;					
				}
				dst[dim*i+j+13] += sum0;
				dst[dim*(i+1)+j+13] += sum0i;
				sum0i=0,sum0=0;
				sum0 += Aik * src2[t1+j+14];
				sum0i += Aiki * src2[t1+j+14];
				sum0 += Aik1 * src2[t2+j+14];
				sum0i += Aik1i * src2[t2+j+14];
				sum0 += Aik2 * src2[t3+j+14];
				sum0i += Aik2i * src2[t3+j+14];
				sum0 += Aik3 * src2[t4+j+14];
				sum0i += Aik3i * src2[t4+j+14];
				sum0 += Aik4 * src2[t5+j+14];
				sum0i += Aik4i * src2[t5+j+14];
				sum0 += Aik5 * src2[t6+j+14];
				sum0i += Aik5i * src2[t6+j+14];
				sum0 += Aik6 * src2[t7+j+14];
				sum0i += Aik6i * src2[t7+j+14];
				sum0 += Aik7 * src2[t8+j+14];
				sum0i += Aik7i * src2[t8+j+14];
				if(k==0) {
					dst[dim*i+j+14] = 0;
					dst[dim*(i+1)+j+14] = 0;			
				}
				dst[dim*i+j+14] += sum0;
				dst[dim*(i+1)+j+14] += sum0i;
				sum0i=0,sum0=0;
				sum0 += Aik * src2[t1+j+15];
				sum0i += Aiki * src2[t1+j+15];
				sum0 += Aik1 * src2[t2+j+15];
				sum0i += Aik1i * src2[t2+j+15];
				sum0 += Aik2 * src2[t3+j+15];
				sum0i += Aik2i * src2[t3+j+15];
				sum0 += Aik3 * src2[t4+j+15];
				sum0i += Aik3i * src2[t4+j+15];
				sum0 += Aik4 * src2[t5+j+15];
				sum0i += Aik4i * src2[t5+j+15];
				sum0 += Aik5 * src2[t6+j+15];
				sum0i += Aik5i * src2[t6+j+15];
				sum0 += Aik6 * src2[t7+j+15];
				sum0i += Aik6i * src2[t7+j+15];
				sum0 += Aik7 * src2[t8+j+15];
				sum0i += Aik7i * src2[t8+j+15];
				if(k==0) {
					dst[dim*i+j+15] = 0;
					dst[dim*(i+1)+j+15] = 0;				
				}
				dst[dim*i+j+15] += sum0;
				dst[dim*(i+1)+j+15] += sum0i;
			}
		}			
}


/*********************************************************************
 * register_matrix_multiplication_functions - Register all of your different versions
 *     of the matrix multiplication  with the driver by calling the
 *     add_matrix_multiplication_function() for each test function. When you run the
 *     driver program, it will test and report the performance of each
 *     registered test function.  
 *********************************************************************/

void register_matrix_multiplication_functions() {
    add_matrix_multiplication_function(&naive_matrix_multiplication, naive_matrix_multiplication_descr);   
    add_matrix_multiplication_function(&matrix_multiplication, matrix_multiplication_descr);   
    /* ... Register additional test functions here */
}

