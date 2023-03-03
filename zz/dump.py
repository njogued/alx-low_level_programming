# Regex matching for * and .
# Leetcode 10.
# In progress

if s == p:
    return True
elif "." in p and "*" not in p:
    pcp = p.replace(".", "")
    return pcp == s
elif "*" in p and "." not in p:
    
    
    for index in range(len(p)):
    if p(index) == ".":
else:
    return False


s = "he**x*e"
p = "he"
"""
for index in range(len(s)):
    if s[index] == "*":
        scp = s.replace("*", "")
        # scp2 = s.replace("*", "s")
        scp2 = s.replace("*", s[index - 1])
        scp3 = s.replace(s[index - 1], "")
        for index in scp3:
            if index == "*":
                scp4 = scp3.replace("*", "")
"""
ast = s.count("*")
for i in range(ast):
    s2 = s.replace("*", "")
    index = s.index("*")
    s[index + 1:]
    print(index)

print(f"{s2}")
"""
print(f"scp: {scp}, scp2: {scp2}, scp3: {scp3}, scp4: {scp4}")
if p in [scp, scp2, scp3, scp4]:
    print("True")
"""
