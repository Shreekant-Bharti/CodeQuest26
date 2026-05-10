def is_valid(s):

    st = []
    
    mapping = {")": "(", "}": "{", "]": "["}
    
    for ch in s:
        if ch in "({[":
            st.append(ch)
        else:
            
            if not st:
                return False
            top = st.pop()
            if mapping[ch] != top:
                return False
                
    return len(st) == 0
