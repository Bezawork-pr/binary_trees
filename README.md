# <pre> C - Binary trees </pre>
This project aims at mastering Binary trees. Different topics related to binary trees were raised such as the difference between Binary trees and Binary Search trees and the benefit of using Binary trees by checking out the time complexity. How to calculate the depth, height, and size of Binary tree and the different traversal methods to go through a binary tree are also dealt in this project.
## <pre>Function Prototypes   <img src="https://user-images.githubusercontent.com/107026397/209423040-0ba70fc0-8862-492e-944b-fa10de86e407.svg" width=3% height=3%/></pre>
| File  | Prototype |
| ------------- | ------------- |
|<pre>0-binary_tree_node.c|<pre>binary_tree_t *binary_tree_node(binary_tree_t *parent, int value); |
|<pre>1-binary_tree_insert_left.c|<pre>binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);|
|<pre>2-binary_tree_insert_right.c|<pre>binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);|
|<pre>3-binary_tree_delete.c|<pre>void binary_tree_delete(binary_tree_t *tree);|
|<pre>4-binary_tree_is_leaf.c|<pre>int binary_tree_is_leaf(const binary_tree_t *node);|
|<pre>5-binary_tree_is_root.c|<pre>int binary_tree_is_root(const binary_tree_t *node);|
|<pre>6-binary_tree_preorder.c|<pre>void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));|
|<pre>7-binary_tree_inorder.c|<pre>void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));|
|<pre>8-binary_tree_postorder.c|<pre>void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));|
|<pre>9-binary_tree_height.c|<pre>size_t binary_tree_height(const binary_tree_t *tree);|
|<pre>10-binary_tree_depth.c|<pre>size_t binary_tree_depth(const binary_tree_t *tree);|
|<pre>11-binary_tree_size.c|<pre>size_t binary_tree_size(const binary_tree_t *tree);|
|<pre>12-binary_tree_leaves.c|<pre>size_t binary_tree_leaves(const binary_tree_t *tree);|
|<pre>13-binary_tree_nodes.c|<pre>size_t binary_tree_nodes(const binary_tree_t *tree);|
|<pre>14-binary_tree_balance.c|<pre>int binary_tree_balance(const binary_tree_t *tree);|
|<pre>15-binary_tree_is_full.c|<pre>int binary_tree_is_full(const binary_tree_t *tree);|
|<pre>16-binary_tree_is_perfect.c|<pre>int binary_tree_is_perfect(const binary_tree_t *tree);|
|<pre>17-binary_tree_sibling.c|<pre>binary_tree_t *binary_tree_sibling(binary_tree_t *node);|
|<pre>18-binary_tree_uncle.c|<pre>binary_tree_t *binary_tree_uncle(binary_tree_t *node);</pre>|
## <pre> Tasks   <img src="https://user-images.githubusercontent.com/107026397/209345588-c8cc3382-31c2-417b-888a-666928ab0e1d.svg" width=3% height=3%/></pre>
### 0. New node
[0-binary_tree_node.c](https://github.com/Bezawork-pr/binary_trees/blob/master/0-binary_tree_node.c): A function that creates a binary tree node
### 1. Insert left
[1-binary_tree_insert_left.c](https://github.com/Bezawork-pr/binary_trees/blob/master/1-binary_tree_insert_left.c): A function that inserts a node as the left-child of another node
### 2. Insert right
[2-binary_tree_insert_right.c](https://github.com/Bezawork-pr/binary_trees/blob/master/2-binary_tree_insert_right.c): A function that inserts a node as the right-child of another node
### 3. Delete
[3-binary_tree_delete.c](https://github.com/Bezawork-pr/binary_trees/blob/master/3-binary_tree_delete.c): A function that deletes an entire binary tree
### 4. Is leaf
* [4-binary_tree_is_leaf.c](https://github.com/Bezawork-pr/binary_trees/blob/master/4-binary_tree_is_leaf.c):  A function that checks if a node is a leaf
### 5. Is root
* [5-binary_tree_is_root.c](https://github.com/Bezawork-pr/binary_trees/blob/master/5-binary_tree_is_root.c): A function that checks if a given node is a root

### 6. Pre-order traversal
* [6-binary_tree_preorder.c](https://github.com/Bezawork-pr/binary_trees/blob/master/6-binary_tree_preorder.c): A function that goes through a binary tree using pre-order traversal.

### 7. In-order traversal
* [7-binary_tree_inorder.c](https://github.com/Bezawork-pr/binary_trees/blob/master/7-binary_tree_inorder.c): A function that goes through a binary tree using in-order traversal.

### 8. Post-order traversal
* [8-binary_tree_postorder.c](https://github.com/Bezawork-pr/binary_trees/blob/master/8-binary_tree_postorder.c): A function that goes through a binary tree using post-order traversal
### 9. Height
* [9-binary_tree_height.c](https://github.com/Bezawork-pr/binary_trees/blob/master/9-binary_tree_height.c): A function that measures the height of a binary tree
### 10. Depth
* [10-binary_tree_depth.c](https://github.com/Bezawork-pr/binary_trees/blob/master/10-binary_tree_depth.c): A function that measures the depth of a node in a binary tree
### 11. Size
* [11-binary_tree_size.c](https://github.com/Bezawork-pr/binary_trees/blob/master/11-binary_tree_size.c): A function that measures the size of a binary tree.
### 12. Leaves
* [12-binary_tree_leaves.c](https://github.com/Bezawork-pr/binary_trees/blob/master/12-binary_tree_leaves.c): A function that counts the leaves in a binary tree.
### 13. Nodes
* [13-binary_tree_nodes.c](https://github.com/Bezawork-pr/binary_trees/blob/master/13-binary_tree_nodes.c): A function that counts the nodes with at least 1 child in a binary tree
### 14. Balance factor
* [14-binary_tree_balance.c](https://github.com/Bezawork-pr/binary_trees/blob/master/14-binary_tree_balance.c): A function that measures the balance factor of a binary tree.
### 15. Is full
* [15-binary_tree_is_full.c](https://github.com/Bezawork-pr/binary_trees/blob/master/15-binary_tree_is_full.c): A function that checks if a binary tree is full
### 16. Is perfect
* [16-binary_tree_is_perfect.c]()
