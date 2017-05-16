(define (andTest)
    (if (and (< 4 5) (> 5 2))
        (display "true")
        (display "false")
    )
    (newline)
)

(define (main)
    (andTest)  
)

(main)
