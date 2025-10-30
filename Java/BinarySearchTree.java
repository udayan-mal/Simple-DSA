/**
 * Implementation of Binary Search Tree with basic operations
 * - Insertion: Adds a new node to the tree
 * - Deletion: Removes a node from the tree
 * - Search: Finds a node in the tree
 * - Traversals: Inorder, Preorder, Postorder
 */
class BinarySearchTree {
    class Node {
        int key;
        Node left, right;

        public Node(int item) {
            key = item;
            left = right = null;
        }
    }

    Node root;

    BinarySearchTree() {
        root = null;
    }

    // Insert a new key
    void insert(int key) {
        root = insertRec(root, key);
    }

    Node insertRec(Node root, int key) {
        if (root == null) {
            root = new Node(key);
            return root;
        }

        if (key < root.key)
            root.left = insertRec(root.left, key);
        else if (key > root.key)
            root.right = insertRec(root.right, key);

        return root;
    }

    // Search a key
    boolean search(int key) {
        return searchRec(root, key);
    }

    boolean searchRec(Node root, int key) {
        if (root == null || root.key == key)
            return root != null;

        if (key < root.key)
            return searchRec(root.left, key);

        return searchRec(root.right, key);
    }

    // Delete a key
    void delete(int key) {
        root = deleteRec(root, key);
    }

    Node deleteRec(Node root, int key) {
        if (root == null)
            return root;

        if (key < root.key)
            root.left = deleteRec(root.left, key);
        else if (key > root.key)
            root.right = deleteRec(root.right, key);
        else {
            // Node with only one child or no child
            if (root.left == null)
                return root.right;
            else if (root.right == null)
                return root.left;

            // Node with two children: Get inorder successor
            root.key = minValue(root.right);

            // Delete the inorder successor
            root.right = deleteRec(root.right, root.key);
        }

        return root;
    }

    int minValue(Node root) {
        int minv = root.key;
        while (root.left != null) {
            minv = root.left.key;
            root = root.left;
        }
        return minv;
    }

    // Tree Traversals
    void inorder() {
        System.out.print("Inorder traversal: ");
        inorderRec(root);
        System.out.println();
    }

    void inorderRec(Node root) {
        if (root != null) {
            inorderRec(root.left);
            System.out.print(root.key + " ");
            inorderRec(root.right);
        }
    }

    void preorder() {
        System.out.print("Preorder traversal: ");
        preorderRec(root);
        System.out.println();
    }

    void preorderRec(Node root) {
        if (root != null) {
            System.out.print(root.key + " ");
            preorderRec(root.left);
            preorderRec(root.right);
        }
    }

    void postorder() {
        System.out.print("Postorder traversal: ");
        postorderRec(root);
        System.out.println();
    }

    void postorderRec(Node root) {
        if (root != null) {
            postorderRec(root.left);
            postorderRec(root.right);
            System.out.print(root.key + " ");
        }
    }

    // Main method to test the implementation
    public static void main(String[] args) {
        BinarySearchTree bst = new BinarySearchTree();

        /* Test case:
               50
            /     \
           30      70
          /  \    /  \
         20   40 60   80 */

        bst.insert(50);
        bst.insert(30);
        bst.insert(20);
        bst.insert(40);
        bst.insert(70);
        bst.insert(60);
        bst.insert(80);

        // Print traversals
        bst.inorder();
        bst.preorder();
        bst.postorder();

        // Test search
        System.out.println("\nSearch for 40: " + bst.search(40));
        System.out.println("Search for 90: " + bst.search(90));

        // Test deletion
        System.out.println("\nDeleting 20...");
        bst.delete(20);
        bst.inorder();

        System.out.println("Deleting 30...");
        bst.delete(30);
        bst.inorder();

        System.out.println("Deleting 50...");
        bst.delete(50);
        bst.inorder();
    }
}
