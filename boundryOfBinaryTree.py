from typing import List


class TreeNode:
    def __init__(self,x):
        self.val=x
        self.left=None
        self.right=None

def boundaryOfBinaryTree(self,root:TreeNode)->List[int]:
    if not root:
        return []
    if not root.left and not root.right:
        return [root.val]
    left_boundary,right_boundary,leaves=[],[],[]


    def dfs_left(node):
        if not node or not node.left and not node.right:
            return
        left_boundary.append(node.val)
        if node.left:
            dfs_left(node.left)
        else:
            dfs_left(node.right)


    def dfs_right(node):
        if not node or not node.left and not node.right:
            return
        right_boundary.append(node.val)
        if node.right:
            dfs_right(node.right)
        else:
            dfs_right(node.left)


    def dfs_leaves(node):
        if not node:
            return
        if not node.left and not node.right:
            leaves.append(node.val)
        dfs_leaves(node.left)
        dfs_leaves(node.right)
    left_boundary.append(root.val)
    dfs_left(root.left)
    dfs_leaves(root)
    dfs_right(root.right)
# explain the below line

    return left_boundary+leaves+right_boundary[::-1]
