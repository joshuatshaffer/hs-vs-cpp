
import Data.List (intercalate)

fizzbuzz :: Integer -> String
fizzbuzz n | d3 && d5  = "FizzBuzz"
           | d3        = "Fizz"
           | d5        = "Buzz"
           | otherwise = show n
           where d3 = n `mod` 3 == 0
                 d5 = n `mod` 5 == 0

main :: IO ()
main = putStrLn . (++".") . intercalate ", " $ map fizzbuzz[1..100]
