struct rect {
    int llx;
    int lly;
    int color;
    int width;
    int height;
};

void use_struct()
{
    struct rect r;
    r.llx = r.lly = 0;
    r.color = 0xFF00FF;
    r.width = 0;
    r.height = 20;

    struct rect r2 = {0, 0, 0xFF00FF, 10, 20};
    
}

int area(struct rect *rp)
{
    return (*rp).width * (*rp).height;
}

void rotate_left(struct rect *rp)
{
    int t = rp->height; // (*rp).height
    rp->height = rp->width;
    rp->width = t;
    rp->llx -= t;
}

// Union
union U3 {
    char c;
    int i[2];
    double v;
};

union NODE_U {
    struct {
        union NODE_U *left;
        union NODE_U *right;
    } internal;
    double data;
};

typedef enum {N_LEAF, N_INTERNAL } nodetype_t;

struct NODE_T {
    nodetype_t type;
    union {
        struct {
            struct NODE_T *left;
            struct NODE_T *right;
        } internal;
        double data;
    } info;
};

unsigned float2bit(float f)
{
    union {
        float f;
        unsigned u;
    } temp;
    temp.f = f;
    return temp.u;
}

// same as
unsigned copy(unsigned u)
{
    return u;
}

int main()
{
}
