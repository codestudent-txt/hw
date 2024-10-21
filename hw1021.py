def generate_powerset(S, index=0, current=None):
    if current is None:
        current = []
    
  
    if index == len(S):
        return [current]

    without_current = generate_powerset(S, index + 1, current)

  
    with_current = generate_powerset(S, index + 1, current + [S[index]])
    

    return without_current + with_current


def powerset(S):
    return generate_powerset(S)
if __name__ == "__main__":
    S = ['a', 'b', 'c']
    result = powerset(S)

    print("Powerset of S:")
    for subset in result:
        print(subset)
