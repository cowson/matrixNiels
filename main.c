#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"

int main() {

  struct matrix *d, *m, *x;
     d = new_matrix(4,4);
     m = new_matrix(4,7);
     x = new_matrix(4,4);

     //test

     printf("Identity Matrix: \n");
     ident(d);
     print_matrix(d);

     printf("\n");

     printf("Random Matrix:\n");

     int i, j;
     int n = rand() % 100;

     for (i = 0; i < m->rows; i++){

         for (j = 0; j < m->cols; j++){
             m->m[i][j] = n;
             n = rand() % 100;
         }

     }
     print_matrix(m);

     printf("\n");


     printf("Scalar Multiplication of the Random Matrix and 2\n");
     scalar_mult(2,m);
     print_matrix(m);

     printf("\n");

     printf("Multiply by Identity Matrix\n");
     matrix_mult(d,m);
     print_matrix(m);

     printf("\n");

     printf("Second Random Matrix\n");
     int a, b;

     for (a = 0; a < x->rows; a++){

         for (b = 0;b < x->cols; b++){
             x->m[a][b] = n;
             n = rand() % 100;
         }

     }
     print_matrix(x);
     printf("\n");


     printf("Product of both random matrices\n");
     matrix_mult(x,m);
     print_matrix(m);

     //drawing functions
     color c;

      c.red = 250;
      c.green = 250;
      c.blue = 250;
     screen s;
       struct matrix *edges= new_matrix(4,4);
         add_edge(edges, 100, 50, 50, 50, 100, 100);
         add_edge(edges, 100, 200, 150, 100, 50, 200);
         add_point(edges, 50,50,50);


         draw_lines(edges, s, c);


         display(s);

         free_matrix( edges );




}
