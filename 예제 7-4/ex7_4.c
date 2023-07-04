#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "bst.h"

int main(void) {
	treeNode* root = NULL;
	treeNode* foundedNode = NULL;
	char choice, key;

	//�ʱ� ���� Ž�� Ʈ�� ����
	//��� G�� ��Ʈ��������� root�� ����
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
		printf("\n %c�� ã�ҽ��ϴ�! \n", foundedNode->key);
	else printf("\n ���ڸ� ã�� ���߽��ϴ�. \n");
}