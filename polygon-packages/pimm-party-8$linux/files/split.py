n, m, a, b = map(int, input().split())
room = [input() for _ in range(n)]

dp = [[[0] * 4**m for _ in range(a+1)] for _ in range(n*m)]
dp[0][0][0] = 1
if room[0][0] != 'A' and (n == 1 or room[1][0] != 'A') and (m == 1 or room[0][1] != 'A'):
    dp[0][1][1] = 1
    
mod = 1000000007
dx = [0, -1, 0, 1, 0]
dy = [0, 0, -1, 0, 1]

for i in range(1, n*m):
    for j in range(a+1):
        for k in range(4**m):
            if k%4 == 0:
                dp[i][j][k] = dp[i-1][j][k//4] + dp[i-1][j][k//4+4**(m-1)*2]
                dp[i][j][k] %= mod
                continue
            
            flag = False
            for d in range(5):
                x = i//m; y = i%m
                nx = x+dx[d]; ny = y+dy[d]
                if 0 <= nx < n and 0 <= ny < m and room[nx][ny] == 'A':
                    flag = True
                    break
            if flag or j == 0:
                continue
            
            if k%4 == 1:
                if (i%m == 0 or (k//4)%4 == 0):
                    dp[i][j][k] = dp[i-1][j-1][k//4]
                
            elif k%4 == 2:
                if i%m != 0 and k%16 == 10:
                    for p in (k//16*4+1, k//16*4+2, k//16*4+4**(m-1)+1, k//16*4+4**(m-1)+2, k//16*4+4**(m-1)*2+1, k//16*4+4**(m-1)*2+2):
                        dp[i][j][k] += dp[i-1][j-1][p]
                elif i%m == 0 or k%16 == 2:
                    dp[i][j][k] = dp[i-1][j-1][k//4+4**(m-1)] + dp[i-1][j-1][k//4+4**(m-1)*2]
            
            dp[i][j][k] %= mod
            
ans = 0
for k in range(4**m):
    s = bin(k)[2:]
    if len(s)%2:
        s = '0'+s
    for d in range(1, len(s), 2):
        if s[d] == '1':
            s = ''
            break
    if s:
        ans += dp[-1][-1][k]
        
print(ans if ans else "STRESS!")
