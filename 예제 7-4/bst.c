#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "bst.h"

//���� Ž�� Ʈ������ Ű���� x�� ����� ��ġ�� Ž��
treeNode* searchBST(treeNode* root, element x) {
	treeNode* p;
	p = root;
	while (p != NULL) {
		if (x < p->key) p = p->left;
		else if (x == p->key) return p;
		else p = p->right;
	}
	printf("\nã�� Ű�� �����ϴ�!");
	return p;
}
//������ p�� ����Ű�� ���� ���Ͽ� ��� x�� ����
treeNode* insertBSTNode(treeNode* p, element x) {
	treeNode* newNode;
	if (p == NULL) {
		newNode = (treeNode*)malloc(sizeof(treeNode));
		newNode->key = x;
		newNode->left = NULL;
		newNode->right = NULL;
		return newNode;
	}
	else if (x < p->key) p->left = insertBSTNode(p->left, x);
	else if (x > p->key) p->right = insertBSTNode(p->right, x);
	else printf("\n �̹� ���� Ű�� �ֽ��ϴ�! \n");

	return p;
}