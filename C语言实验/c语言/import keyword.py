import keyword
from site import check_enableusersite
message="    This is a string."
a=3
b=4/2
list1=["x","y","z"]
dictionary={"jen":"['python','ruby']",
             "sarah":"['c']"
             }
first_name="chen"
last_name="xutian"
full_name=f"{first_name}{last_name}"
print(f"Hello,{full_name.title()}!")
print("Hello,{}!".format(full_name))
print(message)
print(message.title())
print(message.split())
print(message.join(first_name))
a.isnumeric()
b.isdecimal()
list1.append("w")
print(list1)
list1.pop()
print(list1)
