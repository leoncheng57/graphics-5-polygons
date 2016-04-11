#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"

int main( int argc, char** argv ) {

  screen s;
  struct matrix *edges;
  struct matrix *transform;

  clear_screen( s );
  
  edges = new_matrix(4, 4);
  transform = new_matrix(4, 4);
  /*
  add_box( edges, 50.0, 50.0, 50.0, 10.0, 10.0, 10.0 ); 
  display( s );
  
  add_polygon( edges, 0, 0, 0, 100, 0, 0, 0, 100, 0 );
  add_torus( edges, 250, 250, 50, 200, 10 );
  save_extension( s, "lines.png" );
  */
  if ( argc == 2 )
    parse_file( argv[1], transform, edges, s );
  else
    parse_file( "stdin", transform, edges, s );


  free_matrix( transform );
  free_matrix( edges );
}  
