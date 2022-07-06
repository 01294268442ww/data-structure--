#pragma once
#include<stdio.h>
#include<stdlib.h>
#include"Stack.h"
#include<string.h>
#include"Queue.h"

#define Radix 10
#define K 3
Queue Q[Radix];
void Init(Queue* Q[Radix]);
void Destroy(Queue* Q[Radix]);

void InsertSort(int* a, int n);

void ShellSort(int* a, int n);

void SelectSort(int* a, int n);

void HeapSort(int* a, int n);
void AdjustDown(int* a, int n, int parent);

void BubbleSort(int* a, int n);

void QuickSort(int* a, int begin, int end);
void QuickSortNonR(int* a, int begin, int end);

void MergeSort(int* a, int n);
void MergeSortNonR(int* a, int n);

void CountSort(int* a, int n);

void RadixSort(int* a, int begin, int end);
