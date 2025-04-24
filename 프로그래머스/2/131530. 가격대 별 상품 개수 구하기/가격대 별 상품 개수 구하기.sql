SELECT TRUNC(price/10000)*10000 AS price_group
, COUNT(*) AS products
FROM product
GROUP BY TRUNC(price/10000)
ORDER BY price_group ASC;