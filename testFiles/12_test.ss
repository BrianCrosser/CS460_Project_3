(define (notTest)
    (if (not (list? 'a))
        (display "not a list")
        (display "is a list")
    )
    (newline)
)

(define (main)
    (notTest)  
)