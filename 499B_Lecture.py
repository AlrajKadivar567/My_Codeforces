n, m = map(int, input().split())
 
final = {}
 
for _ in range(m):
    a, b = input().split()
    final[a] = a if len(a) <= len(b) else b
 
sentence = input().split()
result = [final[word] for word in sentence]
print(" ".join(result))