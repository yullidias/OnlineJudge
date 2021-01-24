select name
from customers c 
	join legal_person lp on lp.id_customers = c.id
	
select max(c.credit_limit), min(c.credit_limit)
from customers c