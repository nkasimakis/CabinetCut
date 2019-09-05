/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: nkasimakis
 *
 * Created on September 5, 2019, 9:31 PM
 */
#include <stdio.h>
#include <cstdlib>


int main() 
{
    int cabinetSize;
    float middleBoard, melamineThickness;
    int sides;
    int pvcSides;
    float middleDimensions;
    float heightofSide;
    float widthofSide;
    float depthofMiddle;
    float boardThickness;
    float boardBackThinckness;
    float melamineBackThickness;
    
    printf("Φάρδος ντουλαπιού? \n");
    scanf(" %d", &cabinetSize);
    
    printf("Πάχος Μελαμίνης Πλαινών: \n");
    scanf(" %f", &boardThickness);
    
    printf("Πάχος Μελαμίνης  Πλάτης: \n");
    scanf(" %f", &boardBackThinckness);
    
    melamineThickness = (" %f", boardThickness);
    melamineBackThickness = ( "%f", boardBackThinckness);
    middleBoard = cabinetSize - (melamineThickness * 2);
    heightofSide = 78;
    widthofSide = 56.8;
    depthofMiddle = 56.8;
    
  
    
   
    printf( "Πλαινά : %.1f x %.1f = 1 \n", middleBoard,depthofMiddle);
    printf(" PVC: %.1f = 1\n", middleBoard);
    printf("\n");
    printf("Μεσιανά: %.1f x %.1f = 2 \n", heightofSide,widthofSide);
    /*Προσθήκη Πήχης*/
    printf(" PVC: %.1f = 2 και %.1f = 1 \n", heightofSide,widthofSide);
    printf("\n");
    printf("Μελαμίνη %.1f Χιλιοστά \n", melamineBackThickness);
    printf(" 78 x %d = 1", cabinetSize);
    
    
    return 0;
}

/*9bHvy3C6TKwI1WTBtCM5kupcOvc3LNujHiNXzRN9o8*/