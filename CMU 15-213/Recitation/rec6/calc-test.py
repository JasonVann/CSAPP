#! /usr/local/bin/python

import os
import sys
import subprocess

def main(args):
    test1 = "./calc -h"
    p = subprocess.Popen(test1, stdout = subprocess.PIPE, stderr = subprocess.STDOUT, shell = True)
    for l in p.stdout:
        if (-1 == l.find("calc") or -1 == l.find("-h") or -1 == l.find("-x <num>")):
            print "Missing part of help --- " + l
            return
            
    test2 = "./calc -x 5 -n"
    p = subprocess.Popen(test2, stdout = subprocess.PIPE, stderr = subprocess.STDOUT, shell = True)
    for l in p.stdout:
        if (-1 == l.find("x = 5") and -1 == l.find("Neg") and -1 == l.find("-5")):
            print "Missing part of test2 on line --- " + l
            return
            
    test3 = "./calc -p Hi"
    p = subprocess.Popen(test3, stdout = subprocess.PIPE, stderr = subprocess.STDOUT, shell = True)
    for l in p.stdout:
        if (-1 == l.find("Hi")):
            print "Missing part of test3 on line --- " + l
            return
            
    test4 = "./calc -a -x 2 -y -1"
    p = subprocess.Popen(test4, stdout = subprocess.PIPE, stderr = subprocess.STDOUT, shell = True)
    for l in p.stdout:
        if (-1 == l.find("x = 2") and -1 == l.find("y = -1") and -1 == l.find("Sum = 1")):
            print "Missing part of test4 on line --- " + l
            return

if __name__ == "__main__":
    main(sys.argv)