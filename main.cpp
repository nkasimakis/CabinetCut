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
    float cabinetSize;
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
    float topmiddleBoards;
    int topboards;
    float doorNum;
    float doorHeight;
    float doorWidth;
    float doorThinckness;
    float selectedNo = -1;
    
     while(1)
    
    {
         
    printf("Φάρδος ντουλαπιού εκατοστά? \n ");
    scanf(" %f", &cabinetSize);
   
    
    
    if
    (cabinetSize<=19 || cabinetSize>=121)
    
    {
      
    printf("Δεν μπορεί να είναι μικρότερο του 20 η μεγαλύτερο του 120!!\n");
    
    }
    
    else
    
    {
      
    //printf("Δεν θα έπρεπε να είναι μεγαλύτερο του 120.\n");
      
    break;
    
    }
    
    }
    printf("Πάχος Μελαμίνης Πλαινών mm: \n ");
    scanf(" %f", &boardThickness);
    
    printf("Πάχος Μελαμίνης  Πλάτης mm: \n ");
    scanf(" %f", &boardBackThinckness);
    
    printf("Αριθμός Πορτών τμχ: \n");
    scanf(" %f", &doorNum);
    
    printf("Πάχος Πόρτας mm: \n ");
    scanf(" %f", &doorThinckness);
    
    melamineThickness = (" %f", boardThickness);
    melamineBackThickness = ( "%f", boardBackThinckness);
    middleBoard = cabinetSize - (melamineThickness * 2);
    topmiddleBoards = ( " %f", middleBoard);
    topboards = 10;
    heightofSide = 78;
    widthofSide = 56.8;
    depthofMiddle = 56.8;
    doorHeight = 78;
    doorWidth = (cabinetSize / 2) - 0.3;
    
  
    
   
    printf( "Πλαινά : %.1f x %.1f = 1 \n", middleBoard,depthofMiddle);
    printf(" PVC: %.1f = 1\n", middleBoard);
    printf("\n");
    
    printf("Μεσιανά: %.1f x %.1f = 2 \n", heightofSide,widthofSide);
    printf(" PVC: %.1f = 2 και %.1f = 1 \n", heightofSide,widthofSide);
    printf("\n");
    
    printf("Πήχες Πάνω: %d x %.1f = 2 \n", topboards,middleBoard);
    printf(" PVC: %.1f = 1 \n", middleBoard);
    printf("\n");
    
    printf("Μελαμίνη %.1f mm  \n", melamineBackThickness);
    printf("\n");
    
    printf(" 78 x %.1f = 1 \n", cabinetSize);
    printf("\n");
    
    printf("Πόρτα πάχους %.1f mm \n\n Διαστάσεις: \n %.1f x %.1f = %.f τμχ \n", doorThinckness,doorHeight, doorWidth, doorNum);
    printf(" PVC: %.1f = 2 και %.1f = 2 \n", doorHeight,doorWidth);
    
    printf("\n");
    
    printf("\n");
    
    return 0;
}