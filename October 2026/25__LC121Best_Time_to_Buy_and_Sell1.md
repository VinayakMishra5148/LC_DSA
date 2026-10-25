# LC 121 — Best Time to Buy and Sell Stock

**Difficulty:** Easy  
**Topic:** Arrays, Greedy  
**Status:** Solved independently

## Approach
- Track the minimum stock price encountered so far.
- Calculate the profit if selling at the current price.
- Update the maximum profit whenever a better profit is found.
- Update the minimum price as we traverse the array.

## Key Observation
To maximize profit, buy at the lowest price before the selling day and sell at a later, higher price.

## Complexity
- **Time:** O(n) — single traversal.
- **Space:** O(1) — only a few variables.

## Mistakes / Learnings
- No significant difficulties encountered.
- Remember that buying must happen before selling.
- If prices continually decrease, the maximum profit remains 0.

## Revision
- [ ] Re-solve independently after 7 days.
