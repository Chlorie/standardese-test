#pragma once

namespace test
{
    /// Adds two integers together.
    /// \param a The first integer.
    /// \param b The second integer.
    /// \returns The sum of the two integers.
    [[nodiscard]] constexpr int add(const int a, const int b) noexcept { return a + b; }

    /// Calculates the square of an integer.
    /// \param a The integer.
    /// \returns The square of the input.
    [[nodiscard]] constexpr int square(const int a) noexcept { return a * a; }
}
