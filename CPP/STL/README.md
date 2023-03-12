# Standard Tag Library(STL)
- ## [Containers](https://cplusplus.com/reference/stl/)
    - ### Sequence Containers
        - [Array](https://cplusplus.com/reference/array/array/)
        - [Vactor](https://cplusplus.com/reference/vector/vector/)
        - [Deque](https://cplusplus.com/reference/deque/deque/)
        - [Forward_list](https://cplusplus.com/reference/forward_list/forward_list/)
        - [List](https://cplusplus.com/reference/list/list/)

        | **Headers**       |               | `<array>` | `<vector>`    | `<deque>`      | `<forward_list>`          | `<list>`       |
        | ---               | ---           | ---       | ---           | ---            | ---                       |         ---    | 
        | **Members**       |               | array     |  vector       | deque          | forward_list              | list           |
        |                   |               |           |               |                |                           |                |        
        |                   | Constructor   | implicit  | vector        | deque          | forward_list              | list           |
        |                   | Deconstructor | implicit  | ~vector       | ~deque         | ~forward_list             | ~list          |
        |                   | opertor=      | opertor=  | opertor=      | opertor=       | opertor=                  | opertor=       |
        |                   |               |           |               |                |                           |                |        
        |                   | begin         | begin     | begin         | begin          | begin<br/>before_ begin   | begin          |
        | **Iterators**     | end           | end       | end           | end            | end                       | end            |
        |                   |  rbegin       | rbegin    | rbegin        | rbegin         |                           | rbegin         |
        |                   | rend          | rend      | rend          | rend           |                           | rend           |
        |                   |               |           |               |                |                           |                |  
        |                   | cbegin        | cbegin    | cbegin        | cbegin         | cbegin<br/>cbefore_ begin | cbegin         |
        |**Const Iterators** | cend          | cend      | cend          | cend           | cend                      | cend           |
        |                   |  crbegin      | crbegin   | crbegin       | crbegin        |                           | crbegin        |
        |                   | crend         | crend     | crend         | crend          |                           | crend          |
        |                   |               |           |               |                |                           |                |  
        |                   | size          | size      | size          | size           |                           | size           |
        |                   | max_size      | max_size  | max_size      | max_size       |  max_size                 | max_size       |
        |                   | empty         | empty     | empty         | empty          | empty                     | empty          |
        |**Capacity**       | resize        |           | resize        | resize         |     resize                | resize         |
        |                   | shrink_to_fit |           | shrink_to_fit | shrink_to_fit  |                           |                |
        |                   | capacity      |           |               | capacity       |                           |                |
        |                   | reserve       |           |               | reserve        |                           |                |
        |                   |               |           |               |                |                           |                |  
        |                   |  front        |front      |front          |front           |front                      |front           |  
        |                   |  back         |back       |back           |back            |                           |back            |  
        |**Element access** |  operator[]   |operator[] |porator[]      |operator[]      |                           |                |  
        |                   |  at           |at         |at             |at              |                           |                |  
        |                   |               |           |               |                |                           |                |  
        |                   |  assign       |           |assign         |assign          |assign                     |assign          |  
        |                   |  emplace      |           |emplace        |emplace         |emplace_after              |emplace         |  
        |                   |  insert       |           |insert         |insert          |insert_ after              |insert          |  
        |                   |  erase        |           |erase          |erase           |erase_ after               |erase           |  
        |                   | emplace_back  |           | emplace_back  | emplace_back   |                           | emplace_back   |  
        | **Modifiers**     | push_back     |           | push_back     | push_back      |                           | push_back      |  
        |                   | pop_back      |           | pop_back      | pop_back       |                           | pop_back       |  
        |                   | emplace_front |           |               | emplace_front  | emplace_front             | emplace_front  |  
        |                   | push_front    |           |               | push_front     | push_front                | push_front     |  
        |                   | pop_front     |           |               | pop_front      | pop_front                 | pop_front      |  
        |                   | clear         |           | clear         | clear          | clear                     | clear          |  
        |                   | swap          | swap      | swap          | swap           | swap                      | swap           |  
        |                   |               |           |               |                |                           |                |
        |                   | splice        |           |               |                | splice_after              | splice         |   
        |                   | remove        |           |               |                | remove                    | remove         |  
        |                   | remove_if     |           |               |                | remove_if                 | remove-if      |  
        |**List Oporations**| unique        |           |               |                | unique                    | unique         |  
        |                   | merge         |           |               |                | merge                     | merge          |  
        |                   | sort          |           |               |                | sort                      | sort           |  
        |                   | reverse       |           |               |                | reverse                   | reverse        |
        |                   |               |           |               |                |                           |                |
        | **Observers**     | get_allocation|           | get_allocation| get_allocation | get_allocation            | get_allocation |  
        |                   | data          | data      | data          |                |                           |                |
    - ### Derived Containers
        - [Stack](https://cplusplus.com/reference/stack/stack/)
        - [Queue](https://cplusplus.com/reference/queue/queue/)
        - [Priority Queue](https://cplusplus.com/reference/queue/priority_queue/)
    - ### Containers
        - [Set](https://cplusplus.com/reference/set/set/)
        - [Multiset](https://cplusplus.com/reference/set/multiset/)
        - [Map](https://cplusplus.com/reference/map/map/)
        - [Multimap](https://cplusplus.com/reference/map/multimap/)

        | **Headers**         |                   | `<set>`           | `<set>`           | `<map>`           | `<map>`           |
        | ---------------     | ----------------- | -----------       | ------------      | -----------       | -----------       |
        | **Members**         |                   | set               | multiset          | map               | multimap          |
        |                     |                   |                   |                   |                   |                   |
        |                     | Constructor       | set               | multiset          | map               | multimap          |
        |                     | destructor        | ~set              | ~multiset         | ~map              | ~multimap         |
        |                     | assignment        | operator=         | operator=         | operator=         | operator=         |
        |                     |                   |                   |                   |                   |                   |
        |                     | begin             | begin             | begin             | begin             | begin             |
        | **Iterators**       | end               | end               | end               | end               | end               |
        |                     | rbegin            | rbegin            | rbegin            | rbegin            | rbegin            |
        |                     | rend              | rend              | rend              | rend              | rend              |
        |                     |                   |                   |                   |                   |                   |
        |                     | cbegin            | cbegin            | cbegin            | cbegin            | cbegin            |
        | **Const Iterators** | cend              | cend              | cend              | cend              | cend              |
        |                     | crbegin           | crbegin           | crbegin           | crbegin           | crbegin           |
        |                     | crend             | crend             | crend             | crend             | crend             |
        |                     |                   |                   |                   |                   |                   |
        |                     | size              | size              | size              | size              | size              |
        | **Capacity**        | maxz_size         | maxz_size         | maxz_size         | maxz_size         | maxz_size         |
        |                     | empty             | empty             | empty             | empty             | empty             |
        |                     |                   |                   |                   |                   |                   |
        | **Element Access**  | at                |                   |                   | at                |                   |
        |                     | operator[]        |                   |                   | operator[]        |                   |
        |                     |                   |                   |                   |                   |                   |
        |                     | emplace           | emplace           | emplace           | emplace           | emplace           |
        |                     | emplace_hint      | emplace_hint      | emplace_hint      | emplace_hint      | emplace_hint      |
        | **Modifiers**       | insert            | insert            | insert            | insert            | insert            |
        |                     | erase             | erase             | erase             | erase             | erase             |
        |                     | clear             | clear             | clear             | clear             | clear             |
        |                     | swap              | swap              | swap              | swap              | swap              |
        |                     |                   |                   |                   |                   |                   |
        |                     | count             | count             | count             | count             | count             |
        |                     | find              | find              | find              | find              | find              |
        | **Operations**     | equal_range       | equal_range       | equal_range       | equal_range       | equal_range       |
        |                     | lower_bound       | lower_bound       | lower_bound       | lower_bound       | lower_bound       |
        |                     | upper_bound       | upper_bound       | upper_bound       | upper_bound       | upper_bound       |
        |                     |                   |                   |                   |                   |                   |
        |                     | get_allowcator    | get_allowcator    | get_allowcator    | get_allowcator    | get_allowcator    |
        | **Observers**       | key_comp          | key_comp          | key_comp          | key_comp          | key_comp          |
        |                     | value_comp        | value_comp        | value_comp        | value_comp        | value_comp        |
- ## [Algorithms](https://cplusplus.com/reference/algorithm/)
    - ### Non-modifying sequence oporations
        | `all_of`	  | Test condition on all elements in range (function template) |
        | :----------: | :----------------------------------- |
        | `any_of`	  | Test if any element in range fulfills condition (function template) |
        | `none_of`	  | Test if no elements fulfill condition (function template) |
        | `for_each`  | Apply function to range (function template) |
        | `find`	  | Find value in range (function template) |
        | `find_if`	  | Find element in range (function template) |
        | `find_if_not` | Find element in range (negative condition) (function template) |
        | `find_end`  | Find last subsequence in range (function template) |
        | `find_first_of` | Find element from set in range (function template) |
        | `adjacent_find`	| Find equal adjacent elements in range (function template) |
        | `count`	| Count appearances of value in range (function template) |
        | `count_if`	| Return number of elements in range satisfying condition (function template) |
        | `mismatch`	| Return first position where two ranges differ (function template) |
        | `equal`	| Test whether the elements in two ranges are equal (function template) |
        | `is_permutation`	| Test whether range is permutation of another (function template) |
        | `search`	| Search range for subsequence (function template) |
        | `search_n`	| Search range for elements (function template) |
    - ### Modifying sequence opertaions
        | `copy` |	Copy range of elements (function template) |
        | :----------: | :--------------------------------------------- |
        | `copy_n` |	Copy elements (function template) |
        | `copy_if` |	Copy certain elements of range (function template) |
        | `copy_backward` |	Copy range of elements backward (function template) |
        | `move` |	Move range of elements (function template) |
        | `move_backward` |	Move range of elements backward (function template) |
        | `swap` |	Exchange values of two objects (function template) |
        | `swap_ranges` |	Exchange values of two ranges (function template) |
        | `iter_swap` |	Exchange values of objects pointed to by two iterators (function template) |
        | `transform` |	Transform range (function template) |
        | `replace` |	Replace value in range (function template) |
        | `replace_if` |	Replace values in range (function template) |
        | `replace_copy` |	Copy range replacing value (function template) |
        | `replace_copy_if` |	Copy range replacing value (function template) |
        | `fill` |	Fill range with value (function template) |
        | `fill_n` |	Fill sequence with value (function template) |
        | `generate` |	Generate values for range with function (function template) |
        | `generate_n` |	Generate values for sequence with function (function template) |
        | `remove` |	Remove value from range (function template) |
        | `remove_if` |	Remove elements from range (function template) |
        | `remove_copy` |	Copy range removing value (function template) |
        | `remove_copy_if` |	Copy range removing values (function template) |
        | `unique` |	Remove consecutive duplicates in range (function template) |
        | `unique_copy` |	Copy range removing duplicates (function template) |
        | `reverse` |	Reverse range (function template) |
        | `reverse_copy` |	Copy range reversed (function template) |
        | `rotate` |	Rotate left the elements in range (function template) |
        | `rotate_copy` |	Copy range rotated left (function template) |
        | `random_shuffle` |	Randomly rearrange elements in range (function template) |
        | `shuffle	Randomly` | rearrange elements in range using generator (function template) |
    - ### Partitions
        | `is_partitioned` |	Test whether range is partitioned (function template) |
        | :----------: | :--------------------------------------------- |
        | `partition` |	Partition range in two (function template) |
        | `stable_partition` |	Partition range in two - stable ordering (function template) |
        | `partition_copy` |	Partition range into two (function template) |
        | `partition_point` |	Get partition point (function template) |
    - ### Sorting
        | `sort` |	Sort elements in range (function template) |
        | :----------: | :--------------------------------------------- |
        | `stable_sort` |	Sort elements preserving order of equivalents (function template) |
        | `partial_sort` |	Partially sort elements in range (function template) |
        | `partial_sort_copy` |	Copy and partially sort range (function template) |
        | `is_sorted` |	Check whether range is sorted (function template) |
        | `is_sorted_until` |	Find first unsorted element in range (function template) |
        | `nth_element` |	Sort element in range (function template) |
    - ### Binary Search
        | `lower_bound` |	Return iterator to lower bound (function template) |
        | :----------: | :--------------------------------------------- |
        | `upper_bound` |	Return iterator to upper bound (function template) |
        | `equal_range` |	Get subrange of equal elements (function template) |
        | `binary_search` |	Test if value exists in sorted sequence (function template) |
    - ### Merge
        | `merge` |	Merge sorted ranges (function template) |
        | :----------: | :--------------------------------------------- |
        | `inplace_merge` |	Merge consecutive sorted ranges (function template) |
        | `includes` |	Test whether sorted range includes another sorted range (function template) |
        | `set_union` |	Union of two sorted ranges (function template) |
        | `set_intersection` |	Intersection of two sorted ranges (function template) |
        | `set_difference` |	Difference of two sorted ranges (function template) |
        | `set_symmetric_difference` |	Symmetric difference of two sorted ranges (function template) |
    - ### Heap
        | `push_heap` |	Push element into heap range (function template) |
        | :----------: | :--------------------------------------------- |
        | `pop_heap` |	Pop element from heap range (function template) |
        | `make_heap` |	Make heap from range (function template) |
        | `sort_heap` |	Sort elements of heap (function template) |
        | `is_heap` |	Test if range is heap (function template) |
        | `is_heap_until` |	Find first element not in heap order (function template) |
    - ### Min/Max
        | `min` |	Return the smallest (function template) |
        | :----------: | :--------------------------------------------- |
        | `max` |	Return the largest (function template) |
        | `minmax` |	Return smallest and largest elements (function template) |
        | `min_element` |	Return smallest element in range (function template) |
        | `max_element` |	Return largest element in range (function template) |
        | `minmax_element` |	Return smallest and largest elements in range (function template) |
        | `
    - ### Other
        | `lexicographical_compare` |	Lexicographical less-than comparison (function template) |
        | :----------: | :--------------------------------------------- |
        | `next_permutation` |	Transform range to next permutation (function template) |
        | `prev_permutation` |	Transform range to previous permutation (function template) |
- ## [Iterators](https://cplusplus.com/reference/iterator/)
    - ### Functions
        - ### Iterator operations
            | `advance` |	Advance iterator (function template) |
            | :----------: | :--------------------------------------------- |
            | `distance` |	Return distance between iterators (function template) |
            | `begin` |	Iterator to beginning (function template) |
            | `end` |	Iterator to end (function template) |
            | `prev` |	Get iterator to previous element (function template) |
            | `next` |	Get iterator to next element (function template) |

        - ### Iterator Generators
            | `back_inserter` |	Construct back insert iterator (function template) |
            | :----------: | :--------------------------------------------- |
            | `front_inserter` |	Constructs front insert iterator (function template) |
            | `inserter` |	Construct insert iterator (function template) |
            | `make_move_iterator` |	Construct move iterator (function template) |
    - ### Classes
        | `iterator` |	Iterator base class (class template) |
        | :----------: | :--------------------------------------------- |
        | `iterator_traits` |	Iterator traits (class template) |

        - ### Predifined Iteratiors
            | `reverse_iterator` |	Reverse iterator (class template) |
            | :----------: | :--------------------------------------------- |
            | `move_iterator` |	Move iterator (class template) |
            | `back_insert_iterator` |	Back insert iterator (class template) |
            | `front_insert_iterator` |	Front insert iterator (class template) |
            | `insert_iterator` |	Insert iterator (class template) |
            | `istream_iterator` |	Istream iterator (class template) |
            | `ostream_iterator` |	Ostream iterator (class template) |
            | `istreambuf_iterator` |	Input stream buffer iterator (class template) |
            | `ostreambuf_iterator` |	Output stream buffer iterator (class template) |

        - ### Category Tags
            | `input_iterator_tag` |	Input iterator category (class) |
            | :----------: | :--------------------------------------------- |
            | `output_iterator_tag` |	Output iterator category (class) |
            | `forward_iterator_tag` |	Forward iterator category (class) |
            | `bidirectional_iterator_tag` |	Bidirectional iterator category (class) |
            | `random_access_iterator_tag` |	Random-access iterator category (class) |