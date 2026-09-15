class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        container = {}
        for word in strs:
            key = "".join(sorted(word))

            if key not in container:
                container[key] = []
            container[key].append(word)

        return list(container.values())