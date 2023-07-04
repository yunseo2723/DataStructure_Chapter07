#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "bst.h"

int main(void) {
	treeNode* root = NULL;
	treeNode* foundedNode = NULL;
	char choice, key;

	//초기 이진 탐색 트리 구성
	//노드 G를 루트노드포인터 root로 지정
	root = insertBSTNode(root, 'G');
	insertBSTNode(root, 'I');
	insertBSTNode(root, 'H');
	insertBSTNode(root, 'D');
	insertBSTNode(root, 'B');
	insertBSTNode(root, 'M');
	insertBSTNode(root, 'N');
	insertBSTNode(root, 'A');
	insertBSTNode(root, 'J');
	insertBSTNode(root, 'E');
	insertBSTNode(root, 'Q');

	displayInorder(root); printf("\n");
	scanf(" %c", &key);
	foundedNode = searchBST(root, key);
	if (foundedNode != NULL)
		printf("\n %c를 찾았습니다! \n", foundedNode->key);
	else printf("\n 문자를 찾지 못했습니다. \n");
}