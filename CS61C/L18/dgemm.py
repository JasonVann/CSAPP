# -*- coding: utf-8 -*-

import time

def dgemm(N, a, b, c):
    for i in range(N):
        for j in range(N):
            c[i+j*N] = 0
            for k in range(N):
                c[i+j*N] += a[i+k*N] * b[k+j*N]

def init_matrix(N):
    m = list(range(N*N))
    for i in range(N):
        for j in range(N):
            m[i*N+j] = (i+j+1) % 10
    return m
    
def print_matrix(N, m):
    for i in range(N):
        for j in range(N):
            print("%3g " % (m[N*i+j]), end="")
        print()
        
def bench(n):
    for N in n:
        a = init_matrix(N)
        b = init_matrix(N)
        c = init_matrix(N)
        start = time.clock()
        dgemm(N, a, b, c)
        dt = time.clock() - start
        print("%4d  %10.6f Gflops" % (N, (2e-9*N*N*N)/dt))

bench([ 32, 160, 480, 960 ])