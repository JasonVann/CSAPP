int main(void) {

    // type declaration
    typedef struct { int x, y; } Point;
    
    // declare (and initialize) Point "object"
    Point pt = { 0, 5 }; 
    
    // declare (and initialize) pointer to Point
    Point *pt_ptr = &pt;
    
    // access elements
    (*pt_ptr).x = (*pt_ptr).y;
    
    // alternative syntax
    pp->x = pp->y;   
    
}

