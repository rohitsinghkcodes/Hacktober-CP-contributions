class TrieNode:
    def __init__(self):
        self.children = []*26
        self.isend = False

class Trie:
    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.root = TrieNode()

    def chartoindex(self,ch):
        return ord(ch) - ord('a')

    def insert(self, word: str) -> None:
        """
        Inserts a word into the trie.
        """
        pCrawl = self.root
        length = len(word)
        for level in range(length):
            index = self.chartoindex(word[level])

            if not pCrawl.children[index]:
                pCrawl.children[index] = TrieNode()
            pCrawl = pCrawl.children[index]
        
        pCrawl.isend = True

    def search(self, word: str) -> bool:
        """
        Returns if the word is in the trie.
        """
        pcrawl = self.root
        length = len(word)
        for level in range(length):
            index = self.chartoindex(word[level])
            if not pcrawl.children[index]:
                return False
            pcrawl = pcrawl.children[index]
        
        return pcrawl != None and pcrawl.isend

    def startsWith(self, prefix: str) -> bool:
        """
        Returns if there is any word in the trie that starts with the given prefix.
        """
        pcrawl = self.root
        length = len(prefix)
        for level in range(length):
            index = self.chartoindex(prefix[level])
            if pcrawl.children[index]
        

if __name__ == '__main__':
    obj = Trie()
    obj.insert(word)
    param_2 = obj.search(word)
    param_3 = obj.startsWith(prefix)