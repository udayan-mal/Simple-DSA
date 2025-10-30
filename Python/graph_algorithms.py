"""
Implementation of Graph Algorithms: DFS and BFS
This file implements both Depth First Search and Breadth First Search
along with a simple graph representation using adjacency list.
"""
from collections import defaultdict, deque

class Graph:
    def __init__(self):
        """Initialize the graph as an adjacency list."""
        self.graph = defaultdict(list)
    
    def add_edge(self, u, v):
        """Add an edge to the graph."""
        self.graph[u].append(v)
    
    def bfs(self, start):
        """
        Perform Breadth First Search starting from given vertex.
        Args:
            start: Starting vertex
        Returns:
            List of vertices in BFS order
        """
        # Mark all vertices as not visited
        visited = set()
        
        # Create a queue for BFS
        queue = deque([start])
        visited.add(start)
        
        # List to store BFS traversal result
        bfs_traversal = []
        
        while queue:
            # Dequeue a vertex from queue and print it
            vertex = queue.popleft()
            bfs_traversal.append(vertex)
            
            # Get all adjacent vertices of the dequeued vertex
            # If an adjacent has not been visited, then mark it visited
            # and enqueue it
            for adjacent in self.graph[vertex]:
                if adjacent not in visited:
                    visited.add(adjacent)
                    queue.append(adjacent)
        
        return bfs_traversal
    
    def dfs_util(self, vertex, visited, dfs_traversal):
        """Utility function for DFS traversal."""
        # Mark the current node as visited and add to traversal
        visited.add(vertex)
        dfs_traversal.append(vertex)
        
        # Recur for all the adjacent vertices
        for adjacent in self.graph[vertex]:
            if adjacent not in visited:
                self.dfs_util(adjacent, visited, dfs_traversal)
    
    def dfs(self, start):
        """
        Perform Depth First Search starting from given vertex.
        Args:
            start: Starting vertex
        Returns:
            List of vertices in DFS order
        """
        # Mark all vertices as not visited
        visited = set()
        dfs_traversal = []
        
        # Call the recursive helper function
        self.dfs_util(start, visited, dfs_traversal)
        
        return dfs_traversal

def test_graph_algorithms():
    """Test function to demonstrate graph algorithms."""
    # Create a graph
    g = Graph()
    
    # Add edges for the following graph:
    #     1
    #    / \
    #   2   3
    #  / \   \
    # 4   5   6
    g.add_edge(1, 2)
    g.add_edge(1, 3)
    g.add_edge(2, 4)
    g.add_edge(2, 5)
    g.add_edge(3, 6)
    
    # Test BFS
    print("BFS starting from vertex 1:")
    bfs_result = g.bfs(1)
    print("Expected: [1, 2, 3, 4, 5, 6]")
    print(f"Got:      {bfs_result}")
    
    # Test DFS
    print("\nDFS starting from vertex 1:")
    dfs_result = g.dfs(1)
    print("Expected: [1, 2, 4, 5, 3, 6]")
    print(f"Got:      {dfs_result}")
    
    # Test with a different graph structure
    print("\nTesting with a different graph:")
    g2 = Graph()
    
    # Create a graph with cycle:
    #     1 -- 2
    #     |    |
    #     4 -- 3
    g2.add_edge(1, 2)
    g2.add_edge(2, 3)
    g2.add_edge(3, 4)
    g2.add_edge(4, 1)
    
    print("BFS starting from vertex 1:")
    print(g2.bfs(1))
    
    print("\nDFS starting from vertex 1:")
    print(g2.dfs(1))

if __name__ == "__main__":
    test_graph_algorithms()
