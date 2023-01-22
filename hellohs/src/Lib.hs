module Lib
    ( someFunc
    ) where

someFunc :: IO ()
someFunc = do
    print $ factorial 5

factorial :: Int -> Int
factorial 0 = 1
factorial x = x * factorial(x-1)
