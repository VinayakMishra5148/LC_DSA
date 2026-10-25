# LC 122 — Best Time to Buy and Sell Stock-2

**Difficulty:** Medium
**Topic:** Arrays, Greedy  
**Status:** few references

## Approach
- Just compare the current with the upcoming day
- If lesser, khareed lo 
- Calculate profit @ each day
- Keep updating total

## Key Observation
Keep check on next day and curr day prices, that's it

## Complexity
- **Time:** O(n) — single traversal.
- **Space:** O(1) — only a few variables.

## Mistakes / Learnings
- No significant difficulties encountered.
- Forgot out of bounds conditions and array size

## Revision
- [ ] Re-solve independently after 7 days.
