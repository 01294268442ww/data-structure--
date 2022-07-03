#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include"Stack.h"
#include"Queue.h"
#define Radix 10
#define K 3
Queue Q[Radix];

void InsertSort(int* a, int n);
void ShellSort(int* a, int n);
void SelectSort(int* a, int n);
void HeapSort(int* a, int n);
void BubbleSort(int* a, int n);
void QuickSort(int* a, int begin, int end);
void MergeSort(int* a, int n);
void QuickSortNonR(int* a, int begin, int end);
void MergeSortNonR(int* a, int n);
void CountSort(int* a, int n);
void ArrayPrint(int* a, int n);

//»ùÊýÅÅÐò
void RadixSort(int* a, int begin, int end);
void Init(Queue* pq[Radix]);
void Destroy(Queue* pq[Radix]);