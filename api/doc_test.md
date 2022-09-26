# Header file `test.h`

``` cpp
namespace test
{
    constexpr int add(int const a, int const b) noexcept;

    constexpr int square(int const a) noexcept;
}
```

### Function `test::add`

``` cpp
constexpr int add(int const a, int const b) noexcept;
```

Adds two integers together.

*Return values:* The sum of the two integers.

#### Parameters

  - `a` - The first integer.
  - `b` - The second integer.

-----

### Function `test::square`

``` cpp
constexpr int square(int const a) noexcept;
```

Calculates the square of an integer. See also [`test::add`](doc_test.md#standardese-test__add-intconst-intconst-)

*Return values:* The square of the input.

#### Parameters

  - `a` - The integer.

-----
