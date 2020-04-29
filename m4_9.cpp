#include "projects.h"
void Projects_4::m4_9()
{
	//  4.9 자료형에게 가명 붙여주기 (type aliases)
	typedef double distance_t; // double을 distance 개념으로 쓸 것이라는 memo이다.
	// typedef는 가명을 만들어 준 것이다.
	distance_t home2work;
	distance_t home2school;

	// vector 개념을 배운다.
	vector < pair<string, int>> pairlist;

	// 이 의미는 vector<pair<string, int>> 을 pairlist_t 라는 가명으로 사용한다는 의미이다.
	using pairlist_t = vector<pair<string, int>>;

	pairlist_t pairlist1;
	pairlist_t pairlist2;
}
