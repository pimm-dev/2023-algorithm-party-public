n, m, a, b = map(int, input().split())
room = [input() for _ in range(n)]

if not (1 <= n <= 7 and 1 <= m <= 7 and a >= 0 and b >= 0 and 1 <= a+b <= n*m):
    raise error
    
if len(room) != n:
    raise error
for i in range(n):
    if len(room[i]) != m:
        raise error
    for j in range(m):
        if room[i][j] == 'A':
            b -= 1
            if b < 0:
                raise error
        elif room[i][j] != '*':
            raise error
            
if b != 0:
    raise error
