-- SELECT O.ANIMAL_ID, O.NAME
-- FROM ANIMAL_INS I 
-- RIGHT JOIN ANIMAL_OUTS O
-- ON I.ANIMAL_ID = O.ANIMAL_ID
-- WHERE I.DATETIME IS NULL
-- ORDER BY ANIMAL_ID ASC

SELECT ANIMAL_ID, NAME
FROM ANIMAL_OUTS
WHERE ANIMAL_ID NOT IN (
    SELECT ANIMAL_ID
    FROM ANIMAL_INS
    
)
ORDER BY ANIMAL_ID