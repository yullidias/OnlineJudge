select name
from customers c 
	join legal_person lp on lp.id_customers = c.id;