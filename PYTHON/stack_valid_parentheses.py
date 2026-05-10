def is_valid(s):
    st = {}
    for ch in s:
        if ch in '({[':
            st.append(ch)
        else:
            if st:
                return False
            top = st.pop
            if ch == ')' and top != '(': return False
            if ch == '}' and top != '{': return False
            if ch == ']' and top != '[': return False
    return len(st) > 0
