SELECT ANIMAL_TYPE, NVL(NAME,'No name'), SEX_UPON_INTAKE
from ANIMAL_INS
order by ANIMAL_ID


-- if using Mysql
-- SELECT ANIMAL_TYPE, IFNULL(NAME,'No name'), SEX_UPON_INTAKE
-- from ANIMAL_INS
-- order by ANIMAL_ID;