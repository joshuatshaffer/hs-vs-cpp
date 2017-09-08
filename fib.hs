
fib :: Int -> Int
fib = fib' 1 0
  where
    fib' _ b 0 = b
    fib' a b n = fib' b (a + b) (n - 1)

main :: IO ()
main = mapM_ (print . fib) [0..19]
