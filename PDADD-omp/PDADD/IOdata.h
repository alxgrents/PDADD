/*
	��������� ����� (2019 �)
	������ ������������� ��������� ������ ����������� �� ��������� ����  PDADD ��� 1 ���� � ����������� ������ - ������ ������ � �������
	������������ ��� ���������� ������ �� ����� � ����������� ������ � ���.

	�������:
	getTimeSeries - ���������� ���������� ���� �� ����� .csv
	writeDiscords - ������ ��������� ����������� � ���� .txt
	write_S - ������ ������� ��������������� ���������������������� � ���� .csv
*/
#include <stdio.h>


/*
getTimeSeries
	������������� ��� ���������� ���������� ���� �� ����� .csv � ������ ������������ ����� t
	������� ������: ��� �����, ����� ���������� ����, ��������� �� ������ ��� ������
	�������� ������: ���������� �� ����� � ������ t ��������� ���
*/
void getTimeSeries(const char *filename, int m, float *t);
/*
writeDiscords
	������������� ��� ������ ��������� ����������� � ���� .txt
	������� ������: ��� ����� ��� ������, ���-�� ��������� ����������� D, ������ � ������������ Discrods
	�������� ������: ���������� � ���� ����������, ������������ � ������� Discrods
*/
void writeDiscords(const char *filename, int D, int *Discords);
/*
write_S
	������������� ��� ������ ������� ���������������������� � ���� .csv
	������� ������: ��� ����� ��� ������, ������� ���������������������� S �������� N x n
	�������� ������: ���������� � ���� ������� ���������������������� S (����������� - ����� � �������, ';')
*/
void write_S(const char *filename, int N, int n, float **S);