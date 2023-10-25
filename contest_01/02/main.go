package main

import (
    "fmt"
    "math"
)

func main() {
    oxygenPerYearPerson := 0.5 * float64(365) // литры кислорода в год для одного человека
    poplarsPerPerson := math.Ceil(oxygenPerYearPerson / 32.0) // количество тополей для обеспечения одного человека кислородом
    oaksPerPerson := math.Ceil(oxygenPerYearPerson / 20.0) // количество дубов для обеспечения одного человека кислородом

    fmt.Printf("%.2f %.0f %.0f", oxygenPerYearPerson, poplarsPerPerson, oaksPerPerson)
}