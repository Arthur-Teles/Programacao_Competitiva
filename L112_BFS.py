# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:

    def vizinhosNode(node: Optional[TreeNode]) -> List[TreeNode]:
        vizinhos = []
        if node.left: vizinhos.append(node.left)
        if node.rigth: vizinhos.append(node.rigth)

        return vizinhos
    
    def visit(node: Optional[TreeNode]):
        

    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        marcados = [False] * 100
        fila = {TreeNode}

        while (len(fila) > 0):
            node = fila.pop(0)

            visit(node)

            marcados[node.val] = True

            for i in vizinhosNode(node):
                if not marcados[i.val]:
                    fila.append(i)
