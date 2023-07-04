#pragma once
typedef char element;

typedef struct treeNode {
	element data;
	struct treeNode* left;
	struct treeNode* right;
}treeNode;