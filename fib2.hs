
import System.Environment (getArgs)
import Data.List (foldl')
import Data.Bits (testBit, finiteBitSize)

fib :: Int -> Integer
fib = snd . foldl' fib' (1, 0) . bitString
  where
    fib' (f, g) p
      | p         = (f*(f+2*g), ss)
      | otherwise = (ss, g*(2*f-g))
      where ss = f*f+g*g
    bitString n = dropWhile not $ map (testBit n) [s-1,s-2..0]
      where s = finiteBitSize n

main :: IO ()
main = getArgs >>= (print . length . show . fib . read . head)
