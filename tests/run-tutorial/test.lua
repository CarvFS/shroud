-- test tutorial module

local tutorial = require "tutorial"

tutorial.Function1()
print(tutorial.LastFunctionCalled())

local rv_double = tutorial.Function2(1.0, 4)
print(tutorial.LastFunctionCalled(), rv_double)

-- call a class
local obj = tutorial.Class1()
obj:Method1()
print(tutorial.LastFunctionCalled())
