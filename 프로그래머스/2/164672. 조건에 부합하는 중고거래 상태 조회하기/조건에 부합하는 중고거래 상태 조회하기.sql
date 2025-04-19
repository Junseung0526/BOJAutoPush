SELECT  BOARD_ID,
        WRITER_ID,
        TITLE,PRICE,
        CASE WHEN status = 'SALE' THEN '판매중'
             WHEN status = 'RESERVED' THEN '예약중'
             WHEN status = 'DONE' THEN '거래완료'
             END AS status
FROM USED_GOODS_BOARD 
WHERE TO_CHAR(CREATED_DATE,'YYYY-MM-DD') LIKE '2022-10-05'
ORDER BY BOARD_ID DESC