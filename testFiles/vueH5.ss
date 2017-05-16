; Author : Fern Vue
; Assignment : CS 460 Homework 5
; Description : These functions will recursively reverse
; a list or sort a list.

; This function will create a copy of the elements in the
; even numbered positions in a list starting with the second
; element in the list.
(define (even_copy mylist)
  (if
    (null? mylist)
    '()
  )
  (if
    (null? (cdr mylist))
     '()
    (cons (car(cdr mylist))
        (if (null? (cddr mylist))
            '()
        (even_copy (cddr mylist)))
    )
  )
)

; This function returns a list consisting only of numbers.
(define(numeric_copy mylist)
    (if (null? mylist)
      '()
      (if(number? (car mylist))
        (cons (car mylist) (numeric_copy (cdr mylist)))
        (numeric_copy (cdr mylist))
        )
      )
)

; This function recursivley reverses a list.
(define(all_reverse mylist)
  (if (not(list? mylist))
    "all_reverse requires a list argument"
      (if (null? mylist)
        '()
        (if (list? (car mylist))
            (append (all_reverse (cdr mylist)) (cons (all_reverse (car mylist)) '()))
            (append (all_reverse (cdr mylist)) (cons (car mylist) '()))
        )
      )
  )
)

; This function will check if the passed parameter is a list
; and then call the qs function where the body of the quicksort
; algorithm is with a list consisting only of numbers.
(define(quicksort mylist)
  (if (not(list? mylist))
    "quicksort requires a list argument"
    (qs (numeric_copy mylist))
    )
)

; This function uses the quicksort algorithm to sort a list
; in ascending order.
(define (qs mylist)
      (if (null? mylist) 
        '()
        (let ((pivot (car mylist)))
            (append 
              (append 
                ; Left side of pivot
                (quicksort(partition (lambda (x) (< x pivot))mylist)) 
                ; Equal to pivot
                (partition (lambda (x) (= x pivot)) mylist))
                ; Right side of pivot
                (quicksort (partition (lambda (x) (> x pivot)) mylist))
            )
        )
      )
)

; This function will use a passed function to compare
; values with the pivot of the list.
(define(partition function mylist)
  (cond ((null? mylist)
    '())
    ((function (car mylist)) (cons (car mylist) (partition function(cdr mylist))))
    (else(partition function (cdr mylist))))
)

; This function will check if the passed parameter is a list
; and then call the ms function where the body of the mergesort
; algorthim is with a list consisting only of numbers.
(define (mergesort mylist)
  (if (not(list? mylist))
    "mergesort requires a list argument"
    ;(let ((ret "mergesort requires a list argument"))ret)
    (ms (numeric_copy mylist))
    )
)

; This function will be the recursive split of the list
; in the merge sort algorithm.
(define (ms mylist)
  (if (null? mylist)
      mylist
      (if (null? (cdr mylist))
          mylist
          (merge
            (mergesort (first_half mylist))
            (mergesort (second_half mylist)))
        )
    )
)

; This function will merge two lists together in descending order.
(define (merge list1 list2)
      (if (null? list1)
          list2
          (if (null? list2)
              list1
              (if (> (car list1) (car list2))
                  (cons (car list1) (merge (cdr list1) list2))
                  (cons (car list2) (merge (cdr list2) list1)))
              )
        )
)

; This function will create a copy of the elements in the
; odd numbered positions in a list starting with the first
; element in the list.
(define (odd_copy mylist)
    (if
      (null? mylist)
      '()
      (cons (car mylist) 
          (if (null? (cdr mylist))
            '()
            (odd_copy (cddr mylist))
          )
      )
    )
)

; Returns the first half of a list
(define (first_half mylist)
  (if
    (null? mylist)
    '()
  )
  (if (zero? (even (count mylist)))
    (even_split (/ (- (count mylist) 1) 2) mylist)
    (even_split (/ (count mylist) 2) mylist)
    )
)

; Returns the second half of a list
(define (second_half mylist)
  (if
    (null? mylist)
    '()
    )
  (if (zero? (even (count mylist)))
    (sec_half (/ (- (count mylist) 1) 2) mylist)
    (sec_half (/ (count mylist) 2) mylist)
    )
)
    
; Returns the number of elements in the list.
(define (count mylist)
    (if (null? mylist)
      0
        (if (not (list? (car mylist)))
          (+ 1 (count (cdr mylist)))
        )
    )
)

; Returns 1 if a passed number is even
(define (even n)
    (if (= n 0)
        1
        (odd (- n 1))
    )
)

; Returns 0 if a passed number is odd.
(define (odd n)
    (if (= n 0)
        0
        (even (- n 1))
    )
)

; Returns a list with elements of a given count.
(define (even_split count mylist)
  (if (zero? count)
    '()
    (cons (car mylist) (even_split (- count 1) (cdr mylist)))
    )
)

; Returns a list resulting from chopping off a
; given number of elements.
(define (sec_half count mylist)
  (if (zero? count)
    mylist
    (sec_half (- count 1) (cdr mylist))
    )
)
