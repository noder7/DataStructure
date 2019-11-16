def bin_search(target, array):
    scope_start = 0
    scope_end = len(array) #why not len(array)-1 but len(array)?

    while scope_start < scope_end:
        scope_mid = (scope_start + scope_end) // 2
        if target == array[scope_mid]:
            return scope_mid
        elif target < array[scope_mid]:
            scope_end = scope_mid       #why not +1?
        elif target > array[scope_mid]:
            scope_start = scope_mid + 1 #why +1?

    return -1

def test_bin_search():
    array1 = [1,2,3,4,5]
    target1 = 5
    try:
        assert(bin_search(target1, array1) == 4)
        print('test1 succeed')
    except:
        print('test1 failed')

if __name__ == '__main__':
    test_bin_search()
