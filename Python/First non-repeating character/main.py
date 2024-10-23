def first_non_repeating_letter(s: str):
    checked = []
    for char in s:
        charl = char.lower()
        if (not charl in checked):
            if (s.lower().count(charl) > 1): checked.append(char)
            else: return char
    return ""