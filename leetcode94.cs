/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    IList<int> tree=new List<int>();
    public void inorder(TreeNode node){
        if(node==null){
           return;
        }
        
        inorder(node.left);
        tree.Add(node.val);
        inorder(node.right);
    }
    public IList<int> InorderTraversal(TreeNode root) {
        
        inorder(root);
        return tree;
    }
}
