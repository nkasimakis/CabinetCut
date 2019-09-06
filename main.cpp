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
    int doorNum;
    float doorHeight;
    float doorWidth;
    float doorThinckness;
    
    printf("Φάρδος ντουλαπιού? \n ");
    scanf(" %f", &cabinetSize);
    
    printf("Πάχος Μελαμίνης Πλαινών: \n ");
    scanf(" %f", &boardThickness);
    
    printf("Πάχος Μελαμίνης  Πλάτης: \n ");
    scanf(" %f", &boardBackThinckness);
    
    printf("Αριθμός Πορτών: \n");
    scanf(" %d", &doorNum);
    
    printf("Πάχος Πόρτας: \n ");
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
    printf("Μελαμίνη %.1f Χιλιοστά \n", melamineBackThickness);
    printf(" 78 x %f = 1", cabinetSize);
    printf("\n");
    printf("Πόρτα πάχους %.1f διαστάσεις %.1f x %.1f = %d τμχ", doorThinckness,doorHeight, doorWidth, doorNum);
    
    
    return 0;
}