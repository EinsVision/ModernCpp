#include "projects.h"
void Projects_4::m4_9()
{
	//  4.9 �ڷ������� ���� �ٿ��ֱ� (type aliases)
	typedef double distance_t; // double�� distance �������� �� ���̶�� memo�̴�.
	// typedef�� ������ ����� �� ���̴�.
	distance_t home2work;
	distance_t home2school;

	// vector ������ ����.
	vector < pair<string, int>> pairlist;

	// �� �ǹ̴� vector<pair<string, int>> �� pairlist_t ��� �������� ����Ѵٴ� �ǹ��̴�.
	using pairlist_t = vector<pair<string, int>>;

	pairlist_t pairlist1;
	pairlist_t pairlist2;
}
