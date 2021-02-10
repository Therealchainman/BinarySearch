

int solve(string s)
{
    int n = s.size(), cntX = 0, cntY = 0, res;
    for (char ch : s)
    {
        if (ch == 'x')
            cntX++;
    }
    res = cntX;
    for (char ch : s)
    {
        if (ch == 'x')
        {
            cntX--;
        }
        else
        {
            cntY++;
        }
        res = min(res, cntX + cntY);
    }
    return res;
}
